#include <cstring>
#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>
#include <stdint.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;


int main()
{
/* 	Mat fossa_original= imread("FocalFossa.jpg", IMREAD_GRAYSCALE);
	Mat fossa_modified= imread("FocalFossa.jpg", IMREAD_GRAYSCALE);
	for (int r=0; r<fossa_modified.rows; r++){
		for (int c=0; c<fossa_modified.cols; c++){
			fossa_modified.at<uint8_t>(r,c)*=0.5f;
		}
	}
	
	imshow("fossa_modified",fossa_modified);
	imshow("fossa_original", fossa_original); */

	Mat fossa_original= imread("FocalFossa.jpg", IMREAD_UNCHANGED);
	Mat fossa_modified= imread("FocalFossa.jpg", IMREAD_UNCHANGED);
	for (int r=0; r<fossa_modified.rows; r++){
		for (int c=0; c<fossa_modified.cols; c++){
			fossa_modified.at<cv::Vec3b>(r,c)[1]=fossa_modified.at<cv::Vec2b>(r,c)[1]*0;
		}
	}
	
	imshow("fossa_modified",fossa_modified);
	imshow("fossa_original", fossa_original);

	waitKey();

	return EXIT_SUCCESS;
}