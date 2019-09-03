/*
图像色彩空间转换

知识点：
1. 色彩空间转换函数- cvtColor(输入图, 输出图, 颜色映射类型, 颜色映射类型)
COLOR_BGR2GRAY = 6 彩色到灰度
COLOR_GRAY2BGR = 8 灰度到彩色
COLOR_BGR2HSV = 40 BGR到HSV
COLOR_HSV2BGR = 54 HSV到BGR

2. 图像保存 - imwrite
第一个参数是图像保存路径
第二个参数是图像内存对象
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int artc, char** argv)
{
	Mat src = imread("D:/OpenCV/OpenCV4JZG/140/images/wenxue.png");

	if (src.empty())
	{
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
