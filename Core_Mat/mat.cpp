#include <cstring>
#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

// test function that creates an image
cv::Mat function()
{

	// create image
	cv::Mat ima(500, 500, CV_8U, 50);
	// return it
	return ima;
}

int main()
{
	std::array<std::array<int, 26>, 11> arr =
		{{{0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255},
		  {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 255}}};

	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 26; j++)
			cout << setprecision(3) << arr[i][j] << endl;

	cv::Mat greyImg = cv::Mat(26, 11, CV_8U, &arr);
	//std::string greyArrWindow = "Grey Array Image";
	///cv::namedWindow(greyArrWindow, cv::WINDOW_AUTOSIZE);

	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 26; j++)
			cout << setprecision(3) << greyImg.at<int>(i, j) << endl;

	cout << "greyImg = " << endl
		 << " " << greyImg << endl
		 << endl;
	cv::imshow("greyArrWindow", greyImg);

	cv::waitKey(0);

	// create a new image made of 240 rows and 320 columns
	cv::Mat image1(240, 320, CV_8U, 100);
	// or:
	// cv::Mat image1(240,320,CV_8U,cv::Scalar(100));

	cv::imshow("Image", image1); // show the image
	cv::waitKey(0);				 // wait for a key pressed

	// re-allocate a new image
	// (only if size or type are different)
	image1.create(200, 200, CV_8U);
	image1 = 200;

	cv::imshow("Image", image1); // show the image
	cv::waitKey(0);				 // wait for a key pressed

	// create a red color image
	// channel order is BGR
	cv::Mat image2(240, 320, CV_8UC3, cv::Scalar(0, 0, 255));

	// or:
	// cv::Mat image2(cv::Size(320,240),CV_8UC3);
	// image2= cv::Scalar(0,0,255);

	cv::imshow("Image", image2); // show the image
	cv::waitKey(0);				 // wait for a key pressed

	// get a gray-level image from a function
	//cv::Mat gray= function();

	//cv::imshow("Image", gray); // show the image
	//cv::waitKey(0); // wait for a key pressed

	// a 3x3 matrix of double-precision
	cv::Matx33d matrix(3.0, 2.0, 1.0,
					   2.0, 1.0, 3.0,
					   1.0, 2.0, 3.0);
	// a 3x1 matrix (a vector)
	cv::Matx31d vector(5.0, 1.0, 3.0);
	// multiplication
	cv::Matx31d result = matrix * vector;

	std::cout << result;

	cv::waitKey(0); // wait for a key pressed

	cv::destroyAllWindows();
	return EXIT_SUCCESS;
}