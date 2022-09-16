#include <opencv2/opencv.hpp>
#include <opencv2/core/utils/logger.hpp>

using namespace cv;

int main() {
	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_ERROR);
	namedWindow("Astronaut girl12", WINDOW_NORMAL);
	Mat img = imread("C:\\Users\\≤‹÷ŒÍª\\Pictures\\Saved Pictures\\Astronaut girl1.jpg");
	imshow("Astronaut girl12", img);
	waitKey(0);
	destroyAllWindows();
	return 0;
}