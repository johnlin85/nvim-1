Vim�UnDo� �SA���WOmȌbN��|�; ʚ6��v���j   ]                                   ^���    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^���     �              X   #include <iostream>   #include <pcl/point_types.h>   #include <pcl/features/gasd.h>   L#include <pcl/io/pcd_io.h>                      /* 点云文件pcd 读写 */   E#include <pcl/visualization/cloud_viewer.h>     /* 点云可视化 */   N#include <pcl/visualization/pcl_visualizer.h>   /* 高级可视化点云类 */   S#include <pcl/visualization/pcl_plotter.h>      /* 直方图的可视化 方法2 */   "#include <boost/thread/thread.hpp>   using namespace std;   /* 别名 */   -typedef pcl::PointCloud<pcl::PointXYZ> Cloud;        typedef pcl::PointXYZ PointType;       #int main( int argc, char** argv ) {   %	/* 定义　点云对象　指针 */   #	Cloud::Ptr cloud_ptr( new Cloud );       .	/* 读取点云文件　填充点云对象 */   	pcl::PCDReader reader;   A	reader.read( "../../datas/table_scene_lms400.pcd", *cloud_ptr );   	if ( cloud_ptr == NULL ) {   2		cout << "pcd file read err" << endl; return(-1);   	}   E	cout	<< "PointCLoud size() " << cloud_ptr->width * cloud_ptr->height   J		<< " data points ( " << pcl::getFieldsList( *cloud_ptr ) << "." << endl;           /*   K     * 创建 GASD 全局一致的空间分布描述子特征 传递 点云   ]     * pcl::GASDColorEstimation<pcl::PointXYZRGBA, pcl::GASDSignature984> gasd;//包含颜色        */   E	pcl::GASDColorEstimation<pcl::PointXYZ, pcl::GASDSignature984> gasd;   !	gasd.setInputCloud( cloud_ptr );       	/* 输出描述子 */   3	pcl::PointCloud<pcl::GASDSignature984> descriptor;       	/* 计算描述子 */   	gasd.compute( descriptor );       	/* 得到匹配 变换 */   -	Eigen::Matrix4f trans = gasd.getTransform();       	/* Unpack histogram bins */   J	for ( size_t i = 0; i < size_t( descriptor[0].descriptorSize() ); ++i ) {   		descriptor[0].histogram[i];   	}           /*       * 可视化   -    * pcl::visualization::PCLPlotter plotter;   �    *  plotter.addFeatureHistogram(descriptor[0].histogram, 300); //设置的很坐标长度，该值越大，则显示的越细致       * plotter.plot();       */       	/*   	 * 点云+法线 可视化   U	 * pcl::visualization::PCLVisualizer viewer("pcd　viewer");// 显示窗口的名字   	 */   y	boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer_ptr( new pcl::visualization::PCLVisualizer( "3D Viewer" ) );   ?    /* 设置一个boost共享对象，并分配内存空间 */   �	viewer_ptr->setBackgroundColor( 0.0, 0.0, 0.0 );                                                                /* 背景黑色 */   3	/* viewer.setBackgroundColor (1, 1, 1);//白色 */   �	viewer_ptr->addCoordinateSystem( 1.0f, "global" );                                                              /* 坐标系 */   	/*   T	 * pcl::visualization::PointCloudColorHandlerRGBField<pcl::PointXYZRGB> rgb(cloud);   Q	 * pcl::visualization::PointCloudColorHandlerRGBField<pcl::PointXYZ> rgb(cloud);   _	 * pcl::visualization::PointCloudColorHandlerRandom<PointType> cloud_color_handler(cloud_ptr);   �	 * 该句的意思是：对输入的点云着色，Random表示的是随机上色，以上是其他两种渲染色彩的方式.   	 */   }	pcl::visualization::PointCloudColorHandlerCustom<PointType> cloud_color_handler( cloud_ptr, 255, 0, 0 );        /* 红色 */   t	/* viewer->addPointCloud<pcl::PointXYZRGB>(cloud_ptr,cloud_color_handler,"sample cloud");//PointXYZRGB 类型点 */   �	viewer_ptr->addPointCloud<PointType>( cloud_ptr, cloud_color_handler, "original point cloud" );                 /* 点云标签 */   z	viewer_ptr->setPointCloudRenderingProperties( pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 3, "original point cloud" );   	/*   n	 * 渲染属性，可视化工具，3维数据， 其中PCL_VISUALIZER_POINT_SIZE表示设置点的大小为3   F	 * viewer_ptr->addCoordinateSystem(1.0);//建立空间直角坐标系   @	 * viewer_ptr->setCameraPosition(0,0,200); //设置坐标原点   	 */   �	viewer_ptr->initCameraParameters();                                                                             /* 初始化相机参数 */       &	while ( !viewer_ptr->wasStopped() ) {   		viewer_ptr->spinOnce();   		pcl_sleep( 0.01 );   	}       	return(0);   }5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             ^���    �                   5��