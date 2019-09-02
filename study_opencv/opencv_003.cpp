/*
图像对象的创建与赋值

知识点：OpenCV中图像对象创建与赋值
C++中Mat对象与创建
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

	// 克隆
	Mat m1 = src.clone();

	// 复制
	Mat m2;
	src.copyTo(m2);

	// 赋值法
	Mat m3 = src;

	// 创建空白图像
	Mat m4 = Mat::zeros(src.size(), src.type());
	Mat m5 = Mat::zeros(Size(512, 512), CV_8UC3);  //8U代表Unsigned 8bits，C3代表通道数；还有32FC3、64FC3；
	Mat m6 = Mat::ones(Size(512, 512), CV_8UC3);

	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", kernel);

	cout << "create Mat object successfully..." << endl;

	waitKey(0);
	return 0;
}
