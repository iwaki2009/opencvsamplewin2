// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
// main�p
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
//Debug���[�h�̏ꍇ
#define CV_VER "300d"

#else
//Release���[�h�̏ꍇ
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