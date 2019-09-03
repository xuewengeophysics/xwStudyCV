/*
图像读取与显示

知识点：
读取图像 - imread
显示图像 - imshow
*/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int artc, char** argv)
{
	//Mat src = imread("D:/OpenCV/OpenCV4JZG/140/images/wenxue.png"); 
	Mat src = imread("D:/OpenCV/OpenCV4JZG/140/images/wenxue.png", IMREAD_GRAYSCALE);

	if (src.empty())
	{
		cout << "could not load image..." << endl;
		return -1;
	}

	namedWindow("input", WINDOW_AUTOSIZE);
	imshow("input", src);

	cout << "load image successfully..." << endl;

	waitKey(0);
	return 0;
}
