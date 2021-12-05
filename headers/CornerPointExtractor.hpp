#include <opencv2/core/mat.hpp>
#include "../headers/Image.hpp"

#pragma once
class CornerPointExtractor {
    public:
        CornerPointExtractor(Image image, Image imageEdges);
        CornerPointExtractor();
        Image get_contours_image();
        std::vector<cv::Point> find_corner_points(std::vector<std::vector<cv::Point>> contours);
        int find_largest_contour(std::vector<std::vector<cv::Point>> contours);
        std::vector<cv::Point> reorder_points(std::vector<cv::Point> points);
        void draw_corner_points(cv::Mat image, std::vector<cv::Point> cornerPoints);
        std::vector<cv::Point> get_corner_points();
        Image get_corner_point_image();
    private:
        Image m_cornerPointImage;
        std::vector<cv::Point> m_cornerPoints;
};