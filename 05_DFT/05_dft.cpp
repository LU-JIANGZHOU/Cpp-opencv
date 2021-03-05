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
	Mat fossa_original= imread("FocalFossa.jpg", IMREAD_UNCHANGED);
	Mat rgbFossa[3];
	split(fossa_original, rgbFossa);

	imshow("B",rgbFossa[0]);
	imshow("G",rgbFossa[1]);
	imshow("R",rgbFossa[2]);

	rgbFossa[2]=Mat::zeros(rgbFossa[2].size(), CV_8UC1);
	Mat bgFossa;
	merge(rgbFossa, 3, bgFossa);
	imshow("BG", bgFossa);

	waitKey();

	return EXIT_SUCCESS;
}