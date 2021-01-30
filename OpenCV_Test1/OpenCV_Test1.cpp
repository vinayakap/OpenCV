// OpenCV_Test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>


int main()
{
	//----------------------- DRAW CIRCLE ON IMAGE --------------------------
	cv::Mat img = cv::imread("Nature.jpg");
	cv::circle(img, cv::Point(250, 150), 100, cv::Scalar(0, 255, 128), -100);
	cv::circle(img, cv::Point(350, 150), 100, cv::Scalar(255, 255, 255), -100);
	cv::namedWindow("image", cv::WINDOW_NORMAL);
	cv::imshow("image", img);
	cv::waitKey(0);

	//----------------------- CAMERA FEED -----------------------------------
	cv::VideoCapture videoCapture;
	videoCapture.open(0);

	if (!videoCapture.isOpened())
	{
		std::cerr << "Couldn't capture!" << std::endl;
		return -1;
	}
	
	cv::UMat bgr_frame;
	cv::UMat edges;
	cv::UMat gray;
	
	for (;;)
	{
		videoCapture >> bgr_frame;

		if (bgr_frame.empty()) break;
	
		cv::cvtColor(bgr_frame, gray, cv::COLOR_BGR2GRAY);
		cv::imshow("gray", gray);
		cv::Canny(gray, edges, 10, 100, 3, true);
		cv::imshow("edges", edges);
		
		char c = cv::waitKey(10);
		if (c == 27) break;
	}

	videoCapture.release();

	return 0;
}