#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

/** Detect objects in the image and save their coordinates to the given vector. */
void detect(cv::Mat &src_image,    std::vector<cv::Rect> &end_vector)
{
    cv::CascadeClassifier classifier;
    cv::Mat gray_image;
    cv::cvtColor(src_image,gray_image, cv::COLOR_RGB2GRAY);
    classifier.load("../classifierFolder/cascade.xml");
    classifier.detectMultiScale(gray_image, end_vector, 1.1, 3);


}
int main()
{
    /** Input image */
    cv::Mat image;
    /** Vector of rectangle coordinates of detected players. */
    std::vector<cv::Rect> players;

    // Load images to detect.
    image = cv::imread("../test_img/test6.png", cv::IMREAD_COLOR);

    // Detect players in the image.
    detect(image, players);

    // Draw rectangles around detected objects.
    for (int i = 0; i < players.size(); i++)
    {
        cv::Point startPoint (players[i].x, players[i].y );
        cv::Point endPoint (players[i].x + players[i].width, players[i].y + players[i].height);
        cv::rectangle(image, startPoint,endPoint, cv::Scalar(0, 255, 0), 2 );

        cv::imwrite("../test_img/detection.jpg", image);

        // Show image.
        cv::imshow("Detection", image);
    }

    cv::waitKey(0);

    return 0;
}