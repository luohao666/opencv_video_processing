#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <opencv2/videoio.hpp>
#include <highgui.h>
#include <algorithm>
#include <iterator>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {


	Mat img=imread(argv[1]);
	int width=img.cols;
	int height=img.rows;
	Size size = Size(width,height);
	double frame_rate = 30;
	VideoWriter writer; 
//	writer.open("test.mov", CV_FOURCC('D', 'I', 'V', 'X'), frame_rate, size);
	writer.open("event.avi", CV_FOURCC('M', 'J', 'P', 'G'), frame_rate, size, true);
//	writer.open("img.avi", CV_FOURCC('M', 'J', 'P', 'G'), frame_rate, size, true);

	char image_name[15]; 
	string path="../90ms/EventPic/";
//	string path="../90ms/FullPic/";
	string img_path;
	cv::Mat frame;
	int i = 0;
	for(;i<500;)
	{
		sprintf(image_name, "Pic%d%s", ++i, ".bmp"); 
		img_path=path+image_name;
		Mat img=imread(img_path); 
		writer << img;
		cv::imshow ( "frame", img );
		cv::waitKey ( 1 );
	}
	return 0;
}
