/*
ͼ���ȡ����ʾ

֪ʶ�㣺
��ȡͼ�� - imread
��ʾͼ�� - imshow
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int artc, char** argv) {
	//Mat src = imread("D:\\OpenCV\\OpenCV4JZG\\140\\images\\wenxue.png"); 
	Mat src = imread("D:\\OpenCV\\OpenCV4JZG\\140\\images\\wenxue.png", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cout << "could not load image..." << endl;
		return -1;
	}

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", src);

	cout << "load image successfully..." << endl;

	waitKey(0);
	return 0;
}