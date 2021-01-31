// OpenCV_Test1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>


int main()
{
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
	cv::UMat temp;
	
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
