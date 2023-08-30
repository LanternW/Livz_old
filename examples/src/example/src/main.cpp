#include <ros/ros.h>

#include <Eigen/Eigen>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <livz/livz.hpp>

void demoBasicItem();
void demoPointCloud();
void demoAnimate();
void demoUpdater();
void demoField();

int main(int argc, char** argv) {

    // 初始化ROS节点
    ros::init(argc, argv, "lrosvis_example");
    
    // 创建节点句柄
    ros::NodeHandle nh;
    Livz::init(nh);
    Livz::setPolygonType( POLYGON_TYPE::TYPE_MARKER );

    // demoBasicItem();
    // demoPointCloud();
    // demoAnimate();
    // demoUpdater();
    demoField();

    
    ros::spin();
    
    return 0;
}
