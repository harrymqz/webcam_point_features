// OpenCV
#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/features2d.hpp"

// Std
#include <iostream>
#include <cstdlib>
#include <vector>

// Consts
// Minimum number of point features
const unsigned int MIN_NUM_FEATURES = 300;

int main(int argc, char *argv[])
{
    // OpenCV video capture object
    cv::VideoCapture camera;

    // OpenCV image object
    cv::Mat image;
    
    // Camera id. Associated to device number in /dev/videoX
    int cam_id;
    
    // ORB point feature detector
    cv::Ptr<cv::ORB> orb_detector = cv::ORB::create(MIN_NUM_FEATURES);
    
    // Set of point features
    std::vector<cv::KeyPoint> point_set;
    
    // Set of descriptors, for each feature there is an associated descriptor
    cv::Mat descriptor_set;

    // Check user args
    switch(argc)
    {
        // No argument provided, so try /dev/video0
        case 1:
            cam_id = 0;
            break;
        // An argument is provided. Get it and set cam_id
        case 2:
            cam_id = atoi(argv[1]);
            break;
        default:
            std::cout << "Invalid number of arguments. Call program as: webcam_capture [video_device_id]. " << std::endl;
            std::cout << "EXIT program." << std::endl;
            break;
    }

    // Advertising to the user
    std::cout << "Opening video device " << cam_id << std::endl;

    // Open the video stream and make sure it's opened
    if( !camera.open(cam_id) )
    {
        std::cout << "Error opening the camera. May be invalid device id. EXIT program." << std::endl;
        return -1;
    }

    cv::Mat mask;
    int h_divisions = 3,
        v_divisions = 4,
        mask_height = 0,
        mask_width  = 0;

    bool first_loop = true;

    // Process loop. Capture and point feature extraction. User can quit pressing a key
    while(1)
    {
        // Read image and check it. Blocking call up to a new image arrives from camera.
        if(!camera.read(image))
        {
            std::cout << "No image" << std::endl;
            cv::waitKey();
        }

        // **************** Find ORB point features and descriptors ****************************

        if (first_loop)
        {
            mask_height = image.rows/h_divisions,
            mask_width  = image.cols/v_divisions;

            first_loop = false;
        }

        for (int i = 0; i < h_divisions; i++)
        {
            for (int j = 0; j < v_divisions; j++)
            {
                // code 
            }
        }

        std::cout << "Image vertical pixels: " << image.cols << ", Image horizontal pixels: " << image.rows << std::endl;
        std::cout << "Image column size:     " << mask_width << ", Image row size: " << mask_height << std::endl;
        std::cout << "Image columns:         " << v_divisions << ",   Image rows: " << h_divisions << std::endl;
        std::cout << std::endl;

        // Clear previous points
        point_set.clear();

        // Detect and compute(extract) features
        orb_detector->detectAndCompute(image, mask, point_set, descriptor_set);

        // Draw points on the image
        cv::drawKeypoints( image, point_set, image, 255, cv::DrawMatchesFlags::DEFAULT );

        // ********************************************************************

        // Show image
        cv::imshow("Output Window", image);

        // Waits 30 millisecond to check if 'q' key has been pressed. If so, breaks the loop. Otherwise continues.
        if( (unsigned char)(cv::waitKey(30) & 0xff) == 'q' ) break;
    }   
}