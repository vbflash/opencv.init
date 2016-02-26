
#pragma once

// basic
#include "mycv.hpp"
#include "Singletone.h"


//using Arg class
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <opencv2/gpu/gpu.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2\opencv.hpp>
#include <ppl.h>
// <concurrent_vector.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
#include <fstream>
//#include <Windows.h>


// File Read / Write
#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>

using namespace std;
using namespace cv;


#define EXPORT_API __declspec(dllexport)
#define IMPORT_API __declspec(dllimport)



#pragma comment(lib, OPENCV_LIB_EXPAND("core"))
#pragma comment(lib, OPENCV_LIB_EXPAND("imgproc"))
#pragma comment(lib, OPENCV_LIB_EXPAND("highgui"))
#pragma comment(lib, OPENCV_LIB_EXPAND("contrib"))

#pragma comment(lib, OPENCV_LIB_EXPAND("video"))
#pragma comment(lib, OPENCV_LIB_EXPAND("ts"))
#pragma comment(lib, OPENCV_LIB_EXPAND("objdetect"))
#pragma comment(lib, OPENCV_LIB_EXPAND("legacy"))
//#pragma comment(lib, OPENCV_LIB_EXPAND("haartraining_engine"))
#pragma comment(lib, OPENCV_LIB_EXPAND("ml"))
#pragma comment(lib, OPENCV_LIB_EXPAND("gpu"))
#pragma comment(lib, OPENCV_LIB_EXPAND("flann"))
#pragma comment(lib, OPENCV_LIB_EXPAND("features2d"))
#pragma comment(lib, OPENCV_LIB_EXPAND("calib3d"))

#define M_PI 3.141592
//#define POS_COUNT 530 // 7247		// 530 // 1246	//530		//12173//2713//2649//7248//14496	 
//#define NEG_COUNT 3581 // 30341		// 2340 //3581		//30341//20847//20260//19940//12180//39814

#define POS_COUNT 7247		// 530 // 1246	//530		//12173//2713//2649//7248//14496	 
#define NEG_COUNT 10341		// 2340 //3581		//30341//20847//20260//19940//12180//39814



#define SAMPLE_WIDTH  40//40//64 
#define SAMPLE_HEIGHT 32//72//128


#define SAMPLE_VEH_WIDTH 40//40//64
#define SAMPLE_VEH_HEIGHT 32//72//128

#define SAMPLE_PEO_WIDTH 64//40//64
#define SAMPLE_PEO_HEIGHT 128//72//128

#define ALL_COUNT POS_COUNT+NEG_COUNT