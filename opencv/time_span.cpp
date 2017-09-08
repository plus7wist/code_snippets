#include <bits/stdc++.h>
#include <opencv2/opencv.hpp>

int main() {
    int64_t begin = cv::getTickCount();
    for (int i = 0; i < 1024; ++i) {
        std::cout << i << std::endl;
    }
    int64_t end = cv::getTickCount();
    double time_in_second = (end - begin) / cv::getTickFrequency();
    std::cout << "tick count: " << end - begin << std::endl;
    std::cout << "time used: " << time_in_second << " s" << std::endl;
    return 0;
}

// 我的工作环境里，运行结果大概是这样：
// 
// ::
// 
//     tick count: 1255367
//     time used: 0.00125537 s
// 
// 毫秒范围内，这个计时器的精度是比较可信的。
