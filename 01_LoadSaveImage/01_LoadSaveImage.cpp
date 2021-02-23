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
	//Mat acesColor= imread("aces.png", IMREAD_COLOR);
	//Mat acesColor= imread("aces.png", IMREAD_UNCHANGED);
	//Mat acesGrey=imread("aces.png", IMREAD_GRAYSCALE);

	Mat acesColor= imread("aces.png", -1);
	Mat acesGrey=imread("aces.png", 0);

	imshow("Aces Color", acesColor);
	imshow("Aces Grey", acesGrey);
	
	imwrite("acesColor.jpg", acesColor);
	imwrite("acesGrey.jpg", acesGrey);

	waitKey();

	return EXIT_SUCCESS;
}