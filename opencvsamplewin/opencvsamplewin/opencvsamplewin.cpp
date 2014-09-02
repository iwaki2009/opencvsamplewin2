//
// opencvsamplewin by iwaki2009
//

//
// settings for opencv is written in stdafx.h
//
#include "stdafx.h"

//
// contrib‚ÍŒÂ•Ê‚ÉŽw’è
//
#include <opencv2/xfeatures2d/nonfree.hpp>

int main( int argc, char** argv )
{
	// modify file name
	//
	std::string fname = "c:\\tmp\\kan.jpg";

	cv::xfeatures2d::SIFT detector;

	std::vector<cv::KeyPoint> keypoints;
	cv::Mat descriptors;

	cv::Mat image, gimage;
	image = cv::imread(fname);

	cv::cvtColor(image, gimage, cv::COLOR_BGR2GRAY);

	detector(gimage, cv::noArray(), keypoints);
	
	cv::drawKeypoints(image, keypoints, image);

	cv::imshow( "SIFT image", image );

	cv::waitKey(0);

	return 0;
}
