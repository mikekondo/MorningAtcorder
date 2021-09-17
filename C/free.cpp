#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <opencv2/opencv.hpp>
using namespace std;
int main()
{
    FILE *gp;

    gp = popen("gnuplot -persist", "w");

    fprintf(gp, "plot sin(x)\n");

    pclose(gp);
    cv::Mat img;
    img = cv::imread("/Users/m.kondo/Desktop/g2-6.png");
    cout << img << endl;
    cv::imshow("title", img);
    cv::waitKey(0);
    return 0;
}