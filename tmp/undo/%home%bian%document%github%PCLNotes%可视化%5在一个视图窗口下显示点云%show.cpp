Vim�UnDo� ��Qy�)d�Z �ӿ�7�}Dp�!�)���F   1   T	//***************************read PCD file*****************************************      #                       ^��]    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^�~�     �       2           5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             ^�~�     �      
   1      
int main()   {�   	      1      {5�_�                    !        ����                                                                                                                                                                                                                                                                                                                                                             ^�~�     �       "   0     �//上面几行代码，创建新的视口，所需的四个参数是视口在X轴的最小值、最大值、Y轴的最小值、最大值，取值在0-1之间。我们创建的视口分布于窗口的左半部分，最后一个字符串参数，用来唯一标识该视口，在其他改变该视口内容的调用中，需要以该唯一标识为参数，我们还设置该视口的背景颜色，添加一个标签以区别于其他视口，利用RGB颜色着色器并添加点云到当前视口中。5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�     �         0    �         0    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�     �         1      #include <pcl/io/pcd_io.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�     �         1      	string filename1 = "pcl.pcd";5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�     �         1      	string filename1 = "";5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             ^�     �         1    �         1    5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             ^�      �                	string filename2 = "pcl1.pcd";5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             ^�#     �         1      3	string filename1 = "/home/bian/software/test.ply";5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             ^�3     �         1      *	pcl::io::loadPCDFile(filename1, *source);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�;     �         1      +	pcl::io::loadPCDFile(filename2, *source2);5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             ^�@    �         1      T	//***************************read PCD file*****************************************5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v       ^��Q     �         1      P	//***************************read file*****************************************5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v       ^��\     �         1      Qjj//***************************read file*****************************************5�_�                             ����                                                                                                                                                                                                                                                                                                                                                  v       ^��]    �         1      Pj//***************************read file*****************************************5��