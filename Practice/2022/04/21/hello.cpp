///////////////////////////////////////////////////////////
/// @copyright copyright description
/// 
/// @brief demo
/// 
/// @file hello.cpp
/// 
/// @author author
/// 
/// @date 2022-04-21
///////////////////////////////////////////////////////////

// Current Cpp header
// System header
// C/C++ standard library header
#include <iostream>
// External library header
#include <opencv2/opencv.hpp>
// Current module header
// Root directory header

int main()
{
    std::cout << "step1" << std::endl;
    cv::Mat image = cv::imread("D:/Pictures/Saved Pictures/Germany-Geroldsee.jpg", -1);
    std::cout << "step2" << std::endl;

    if (image.data == nullptr)
    {
        std::cout << "image read error" << std::endl;
        return 0;
    }
    std::cout << "step3" << std::endl;

    cv::namedWindow("Display the first OpenCV Image", cv::WINDOW_AUTOSIZE);
    std::cout << "step4" << std::endl;
    cv::imshow("Display Image:", image);
    std::cout << "step5" << std::endl;
    
    cv::waitKey(0);
    std::cout << "step6" << std::endl;
    // cv::destroyWindow("Display the first OpenCV Image");

    return 0;
}


