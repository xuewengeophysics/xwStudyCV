/*
ͼ��ɫ�ʿռ�ת��

֪ʶ�㣺
1. ɫ�ʿռ�ת������- cvtColor(����ͼ, ���ͼ, ��ɫӳ������, ��ɫӳ������)
COLOR_BGR2GRAY = 6 ��ɫ���Ҷ�
COLOR_GRAY2BGR = 8 �Ҷȵ���ɫ
COLOR_BGR2HSV = 40 BGR��HSV
COLOR_HSV2BGR = 54 HSV��BGR

2. ͼ�񱣴� - imwrite
��һ��������ͼ�񱣴�·��
�ڶ���������ͼ���ڴ����
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	Mat src = imread("D:/OpenCV/OpenCV4JZG/140/images/wenxue.png");

	if (src.empty()) {
		cout << "could not load image..." << endl;
		return -1;
	}

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", src);

	Mat gray;
	cvtColor(src, gray, COLOR_BGR2GRAY);

	imwrite("D:/OpenCV/OpenCV4JZG/140/images/wenxue_gray.png", gray);

	cout << "write gray image successfully..." << endl;

	Mat hsv;
	cvtColor(src, hsv, COLOR_BGR2HSV);

	imwrite("D:/OpenCV/OpenCV4JZG/140/images/wenxue_hsv.png", hsv);

	cout << "write hsv image successfully..." << endl;

	waitKey(0);
	return 0;

}