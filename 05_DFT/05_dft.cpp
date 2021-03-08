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

Mat generateDFT(Mat src)
{
	Mat fsrc;
	src.convertTo(fsrc, CV_32FC1);

	Mat complesSrc[2] = {fsrc, Mat::zeros(fsrc.size(), CV_32FC1)};

	Mat srcDft;
	merge(complesSrc, 2, srcDft);

	Mat dftOrg;

	dft(srcDft, dftOrg, DFT_COMPLEX_OUTPUT);
	return dftOrg;
};

void showDft(Mat src)
{
	Mat dftArr[2] = {Mat::zeros(src.size(), CV_32FC1), Mat::zeros(src.size(), CV_32FC1)};

	split(src, dftArr);

	Mat dftMag;

	magnitude(dftArr[0], dftArr[1], dftMag);

	dftMag += Scalar::all(1);
	log(dftMag, dftMag);
	normalize(dftMag, dftMag, 0, 1, 1);
	imshow("dft", dftMag);
}

int main()
{
	Mat fossa_original = imread("FocalFossa.jpg", IMREAD_GRAYSCALE);

	Mat fossa_dft = generateDFT(fossa_original);

	showDft(fossa_dft);

	waitKey();

	return EXIT_SUCCESS;
}