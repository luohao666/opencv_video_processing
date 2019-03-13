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

	VideoCapture cap;
	//	string string1 = "../test_video/30_evt.avi";
	//	cap.open(string1);
	cap.open(argv[1]);
	if(!cap.isOpened())
	    return 0;

	//获取视频的帧速率（一般是30或者60）
	double frame_rate = cap.get(CV_CAP_PROP_FPS);
	cout << frame_rate << endl;

	//获取视频的总帧数目
	long num_frame = static_cast<long>(cap.get(CV_CAP_PROP_FRAME_COUNT));
	cout << num_frame << endl;

	//从特定帧开始
//	auto position = num_frame/3;
//	cap.set(CV_CAP_PROP_POS_FRAMES, position);

	//录视频
//	Size size = Size(cap.get(CAP_PROP_FRAME_WIDTH), cap.get(CAP_PROP_FRAME_HEIGHT));
//	VideoWriter writer; 
//	writer.open("dvs5.avi", CV_FOURCC('M', 'J', 'P', 'G'), frame_rate, size, true);
	
	cv::Mat frame;
	int i = 0;
	for(;;)
	{
//		clock_t time_stt = clock();
		if(i<300)
		{
			i++;
			cap >> frame;
//			writer << frame;
		}
		else
		{
			break;
		}
		cv::imshow ( "frame", frame );
		cv::waitKey ( 1 );
	}
	return 0;
}
