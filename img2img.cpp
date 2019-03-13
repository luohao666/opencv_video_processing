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

	cv::Mat frame;
/*
	int i = 0;
	int j = 0;
	int k = 0;
	for(;;)
	{
		if(i<30000)
		{
			i++;
			j++;
			if(j==10)
			{
				j=0;
				k++;
				char str[100];
				sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22/img/20190222_145107_%06d.jpg",i);
				cout<<str<<endl;
				frame=cv::imread(str);

				sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22/select/%d.jpg",k);
				cv::imwrite(str,frame);

			}
		}
		else
		{
			break;
		}
		cv::imshow ( "frame", frame );
		cv::waitKey ( 1 );
	}
*/

int i=1;
int k=0;
for(;;)
{
	i+=20;
	k++;
	char str[100];
//	sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/17/binary/20190217_120505_%06d.jpg",i);
//	sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22/binary/20190222_145107_%06d.jpg",i);
//sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22_1/image_event_binary/20190222_170741_%06d.jpg",i);
sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/17_1/image_event_binary/20190217_115637_%06d.jpg",i);
	frame=cv::imread(str);
//	sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22/select2/%d.jpg",k);
//	sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/17/select2/%d.jpg",k);
//sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/22_1/select2/%d.jpg",k);
sprintf(str,"/home/luohao/Documents/dvs_dataset/dvs_100/17_1/select2/%d.jpg",k);
	cv::imwrite(str,frame);
	cv::imshow ( "frame", frame );
	cv::waitKey (1);
}


	return 0;
}
