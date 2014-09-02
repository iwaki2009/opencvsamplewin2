// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: プログラムに必要な追加ヘッダーをここで参照してください。
// main用
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
//Debugモードの場合
#define CV_VER "300d"

#else
//Releaseモードの場合
#define CV_VER "300"
#endif

#pragma comment(lib, "opencv_core"CV_VER".lib")
#pragma comment(lib, "opencv_imgproc"CV_VER".lib")
#pragma comment(lib, "opencv_highgui"CV_VER".lib")
#pragma comment(lib, "opencv_video"CV_VER".lib")
#pragma comment(lib, "opencv_objdetect"CV_VER".lib")
#pragma comment(lib, "opencv_imgcodecs"CV_VER".lib")
#pragma comment(lib, "opencv_features2d"CV_VER".lib")
#pragma comment(lib, "opencv_xfeatures2d"CV_VER".lib")