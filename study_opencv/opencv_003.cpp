/*
ͼ�����Ĵ����븳ֵ

֪ʶ�㣺OpenCV��ͼ����󴴽��븳ֵ
C++��Mat�����봴��
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int artc, char** argv) {
	Mat src = imread("D:/OpenCV/OpenCV4JZG/140/images/wenxue.png"); 

	if (src.empty()) {
		cout << "could not load image..." << endl;
		return -1;
	}

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", src);

	// ��¡
	Mat m1 = src.clone();

	// ����
	Mat m2;
	src.copyTo(m2);

	// ��ֵ��
	Mat m3 = src;

	// �����հ�ͼ��
	Mat m4 = Mat::zeros(src.size(), src.type());
	Mat m5 = Mat::zeros(Size(512, 512), CV_8UC3);  //8U����Unsigned 8bits��C3����ͨ����������32FC3��64FC3��
	Mat m6 = Mat::ones(Size(512, 512), CV_8UC3);

	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", kernel);

	cout << "create Mat object successfully..." << endl;

	waitKey(0);
	return 0;
}
