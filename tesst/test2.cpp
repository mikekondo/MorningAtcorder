#include <iostream>
#include <vector>
#include <algorithm>
#include <Eigen/Core>
#include <opencv2/opencv.hpp>
#include <vector>
using namespace std;
using Eigen::MatrixXd;
int main(int argc, char *argv[])
{
    Eigen::Matrix3d mat;
    vector<int> vec;
    for (int i = 0; i < 3; i++)
    {
        vec.push_back(i);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << vec[i] << endl;
    }
    cout << "やったー" << endl;
    cout << "やったー" << endl;
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    cout << m << endl;
    cv::Mat map;
    map = cv::imread("/Users/m.kondo/Desktop/localizability_c++/image/20210616map.pgm");
    //cout << map << endl;
}