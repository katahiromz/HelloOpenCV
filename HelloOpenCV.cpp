#include <opencv2/opencv.hpp>

int main(void)
{
    cv::Mat img;
    img = cv::imread("hello.png");
    cv::namedWindow("Image");
    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}
