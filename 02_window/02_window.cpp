#include <cstring>
#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat focalFossaC = imread("FocalFossa.jpg", 1);
	Mat focalFossaG = imread("FocalFossa.jpg", 0);

	namedWindow("Color", WINDOW_FREERATIO);
	namedWindow("Fixed", WINDOW_AUTOSIZE);

	imshow("Color", focalFossaC);
	imshow("Fixed", focalFossaG);

	resizeWindow("Color", focalFossaC.cols, focalFossaC.rows );
	resizeWindow("Fixed", focalFossaG.cols , focalFossaG.rows );
	//imwrite("acesColor.jpg", acesColor);
	//imwrite("acesGrey.jpg", acesGrey);

	moveWindow("Color", 200, 200);
	moveWindow("Fixed", 250+focalFossaC.cols, 200);
	waitKey();

	return EXIT_SUCCESS;
}