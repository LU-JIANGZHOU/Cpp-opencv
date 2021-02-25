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
	Mat acesColor = imread("aces.png", -1);
	Mat acesGrey = imread("aces.png", 0);

	namedWindow("Color", WINDOW_FREERATIO);
	namedWindow("Fixed", WINDOW_AUTOSIZE);

	imshow("Color", acesColor);
	imshow("Fixed", acesGrey);

	resizeWindow("Color", acesColor.cols / 4, acesColor.rows / 4);
	resizeWindow("Fixed", acesGrey.cols / 4, acesGrey.rows / 4);
	//imwrite("acesColor.jpg", acesColor);
	//imwrite("acesGrey.jpg", acesGrey);

	moveWindow("Color", 20, 20);
	moveWindow("fixed", 20+acesColor.cols, 20);
	waitKey();

	return EXIT_SUCCESS;
}