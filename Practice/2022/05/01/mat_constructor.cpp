/**
 * @file mat_constructor.cpp
 * @author Jonathan (junbaogao@foxmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// c++ standard library header
#include <iostream>
// Opencv header
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

/**
 * @brief instrduce the cv::Mat constructor
 * 
 */
void ConstructorDemo1()
{
    constexpr int dims = 3;
    int size[dims] = {4, 4, 4};

    cv::Mat mat(dims, size, CV_32FC3);
    cv::randu(mat, -1.0, 1.0);

    float max = 0;
    auto iter = mat.begin();
    while (iter != mat.end())
    {
        /* code */
    }
    
}