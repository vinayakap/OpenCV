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
	//cv::VideoCapture videoCapture;
	//videoCapture.open(0);

	//if (!videoCapture.isOpened())
	//{
	//	std::cerr << "Couldn't open capture!" << std::endl;
	//	return -1;
	//}
	//
	//cv::UMat bgr_frame, edges, gray;
	//
	//for (;;)
	//{
	//	videoCapture >> bgr_frame;
	//	if (bgr_frame.empty()) break;
	//
	//	cv::cvtColor(bgr_frame, gray, cv::COLOR_BGR2GRAY);
	//	cv::imshow("gray", gray);
	//	cv::Canny(gray, edges, 10, 100, 3, true);
	//	cv::imshow("edges", edges);
	//	char c = cv::waitKey(10);
	//	if (c == 27) break;
	//}
	//videoCapture.release();


	//------------------------ REALTIME EXP ------------------------------

	//cv::VideoCapture videoCapture("The-Horse-in-Motion-anim.gif");
	//cv::VideoCapture videoCapture(0);
	//if (!videoCapture.isOpened())
	//{
	//	std::cerr << "couldn't open capture!" << std::endl;
	//	return -1;
	//}

	//cv::UMat bgr_frame, edges, gray, blur_gray, edges2;
	//
	//double threshold1 = 20;
	//double threshold2 = 100;
	//int apertueSize = 3;
	//int counter = 1;

	//for (;;)
	//{
	//	counter++;
	//	if (counter <= 1) { counter = 1; }
	//	threshold1 = counter % 200;

	//	if (threshold1 == 0) { threshold1 = 1; }

	//	std::cout << threshold1 << " ";

	//	videoCapture >> bgr_frame;
	//
	//	if (bgr_frame.empty()) break;
	//
	//	cv::cvtColor(bgr_frame, gray, cv::COLOR_BGR2GRAY);
	//	//cv::GaussianBlur(gray, blur_gray, cv::Size(3,3), 11);
	//	cv::imshow("gray", gray);
	//	cv::Canny(gray, edges, threshold1, threshold2, 3, true);
	//	cv::imshow("edges", edges);
	//
	//	char c = cv::waitKey(20);
	//	if (c == 27) break;
	//}
	//
	//videoCapture.release();


	//-------------------------- LEARNING -----------------------------


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
//
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//