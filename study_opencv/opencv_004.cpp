/*
图像像素的读写操作

OpenCV中图像像素读写操作
C++中的像素遍历与访问
-  数组遍历
-  指针方式遍历
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

	// 直接读取图像相素
	int height = src.rows;
	int width = src.cols;
	int ch = src.channels();
	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < width; col++)
		{
			if (ch == 3)
			{
				Vec3b bgr = src.at<Vec3b>(row, col);  // 表示在第row行第col列的像素值，8U类型的RGB彩色图像
				bgr[0] = 255 - bgr[0];
				bgr[1] = 255 - bgr[1];
				bgr[2] = 255 - bgr[2];
				src.at<Vec3b>(row, col) = bgr;
			}
			else if (ch == 1)
			{
				int gray = src.at<uchar>(row, col);
				src.at<uchar>(row, col) = 255 - gray;
			}
		}
	}

	imshow("output", src);

	// 指针读取
	Mat result = Mat::zeros(src.size(), src.type());
	int blue = 0, green = 0, red = 0;
	int gray;
	for (int row = 0; row < height; row++)
	{
		uchar* curr_row = src.ptr<uchar>(row);  // 在访问图片中像素时的操作，指的是访问第row行像素值
		uchar* result_row = result.ptr<uchar>(row);
		for (int col = 0; col < width; col++)
		{
			if (ch == 3)
			{
				blue = *curr_row++;
				green = *curr_row++;
				red = *curr_row++;

				*result_row++ = blue;
				*result_row++ = green;
				*result_row++ = red;
			}
			else if (ch == 1)
			{
				gray = *curr_row++;
				*result_row++ = gray;
			}
		}
	}

	imshow("result", src);

	cout << "pixels read/write successfully..." << endl;

	waitKey(0);
	return 0;

}