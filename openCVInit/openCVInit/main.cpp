#include "define.h"

void main() 
{
	Mat image = imread("test.jpg");	
	resize( image, image, Size(image.cols/2,image.rows/2), 0, 0, INTER_CUBIC);
	imshow("Show", image);

	waitKey(0);
}