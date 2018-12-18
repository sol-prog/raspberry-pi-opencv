// C++ GUI test program to read an image and convert it to gray with OpenCV 4
// You can compile the program with:
//     g++ gui_cpp_test.cpp -o gui_cpp_test `pkg-config --cflags --libs opencv`
// Be sure that you have an image file named "lake.jpg" in the work folder and run the code with:
//     ./gui_cpp_test

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main() {
    const std::string img_file{"lake.jpg"};

    // Check if we can open the file
    cv::Mat input = cv::imread(img_file, 1);
    if(!input.data) {
        std::cout << "Can't open file " << img_file << '\n';
        return -1;
    }

    // Convert to gray
    cv::Mat output;
    cvtColor(input, output, cv::COLOR_BGR2GRAY);

    // Show the original and the result
    cv::namedWindow("Original image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Original image", input);

    cv::namedWindow("Gray image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Gray image", output);

    // Wait until the presses any key
    cv::waitKey(0);

    return 0;
}

