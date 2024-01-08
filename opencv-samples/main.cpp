#include <iostream>  
#include <opencv2/opencv.hpp>  
#include <string>  
#include <filesystem>
#include <iostream>
  
using namespace cv;  
using namespace std;

int main() {  
	string testImgPath = std::filesystem::current_path().generic_string() + "/test.png";  
	Mat image = imread(testImgPath);  
	imshow("demo", image);  
	waitKey(0);  
	return 0;  
}

