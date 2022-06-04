#include <opencv2/opencv.hpp>
#include "quickopencv.h"
#include <iostream>


using namespace cv;
using namespace std;



int main(int argc, char** argv)

{
	
 
	QuickDemo qd;
	
	qd.face_detection_demo();

	waitKey(0);
	destroyAllWindows();
	return 0;

}
