#ifndef CAL_POSE_H
#define CAL_POSE_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <vector>

using namespace cv;
using namespace std;

enum Alg{ STEREO_BM=0, STEREO_SGBM=1, STEREO_HH=2, STEREO_VAR=3, STEREO_3WAY=4 };

int cal_pose(Mat img1_l, Mat img1_r, Mat img2_l, Mat img2_r);

int stereo_matching(Mat &disp8, Mat img1, Mat img2, Alg alg, int numberOfDisparities, int SADWindowSize, float scale, bool no_dispaly);

int bucket_features(Mat I, vector<KeyPoint> &keypoints, int h, int b, int h_break, int b_break, int numCorners);
#endif