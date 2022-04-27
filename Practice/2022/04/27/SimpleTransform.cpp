///////////////////////////////////////////////////////////
/// @copyright copyright description
/// 
/// @brief a demo for simple image transform used OpenCV
/// 
/// @file SimpleTransform.cpp
/// 
/// @author author
/// 
/// @date 2022-04-27
///////////////////////////////////////////////////////////

// Current Cpp header
// System header
// C/C++ standard library header
#include <iostream>
// External library header
#include "opencv2/opencv.hpp"
// Current module header
// Root directory header

// this sample need use the 4/21 demo

void SimepleTransform(const cv::Mat &image)
{
    cv::namedWindow("win-in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("win-out", cv::WINDOW_AUTOSIZE);

    cv::imshow("raw image", image);
    cv::Mat out;

    cv::GaussianBlur(image, out, cv::Size(5,5), 3, 3);
    cv::GaussianBlur(out, out, cv::Size(5,5), 3, 3);

    cv::imshow("trans image", out);

    cv::waitKey(0);
}


// use cv::pyrDown() achieve the gauss blur and down sample
void DownSample(const cv::Mat &image)
{
    cv::namedWindow("win-in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("win-out", cv::WINDOW_AUTOSIZE);

    cv::imshow("raw image", image);
    cv::Mat out;

    cv::pyrDown(image, out);

    cv::imshow("trans image", out);

    cv::waitKey(0);
}


// add boundary detect when down sampling
// cv::Canny is a kind of boundary detector, 
// use the cv::cvtColor() tranform the image from RGB to Gray
void GannyWithDownSample(const cv::Mat &image)
{
    cv::Mat image_rgb, image_gray, image_canny;
    image_rgb = image;

    // image display windows
    cv::namedWindow("win-RGB", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("win-Gray", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("win-Canny", cv::WINDOW_AUTOSIZE);

    cv::cvtColor(image_rgb, image_gray, cv::COLOR_RGB2GRAY);
    cv::imshow("Gray image:", image_gray);

    cv::Canny(image_gray, image_canny, 10, 100, 3, true);
    cv::imshow("Canny image", image_canny);

    cv::waitKey(0);
}

int main(int argc, char **argv)
{
    cv::Mat image = cv::imread("C:/Users/Administrator/Desktop/algorithm-platform.png", -1);
    // SimepleTransform(image);

    // DownSample(image);

    GannyWithDownSample(image);

    return 0;
}
 