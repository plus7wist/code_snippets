#include <opencv2/opencv.hpp>
#include <bits/stdc++.h>

int main() {
    cv::Mat img(500, 500, CV_8UC3);
    cv::RNG& rng = cv::theRNG();
    std::vector<cv::Point> points;
    // Generate a random set of points
    for (int i = 0; i < 10; i++ ) {
        cv::Point pt;
        pt.x = rng.uniform(img.cols/4, img.cols*3/4);
        pt.y = rng.uniform(img.rows/4, img.rows*3/4);
        points.push_back(pt);
    }
    for (const auto& point: points) {
        std::cout << point << std::endl;
    }
    return 0;
}

// cv::theRNG() 是线程安全的
// int rng.uniform(a, b); [a. b)
// unsigned rng.operator()(unsigned N); [0, N)
