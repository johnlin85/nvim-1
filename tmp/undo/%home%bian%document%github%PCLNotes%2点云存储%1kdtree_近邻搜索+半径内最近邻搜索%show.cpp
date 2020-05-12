Vim�UnDo� ��Z�䆢���j���Ȁp�#L��=|��|�e	   h          S         +       +   +   +    ^�x    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^�mv     �                   5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             ^�m}     �      	   k      int   main( int argc, char** argv )�      
   k      main( int argc, char** argv )5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             ^�m~     �      	   j      !int main( int argc, char** argv )   {�      
   j      {5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^�m�     �         i      3	for ( size_t i = 0; i < cloud.points.size(); ++i )   {�         i      	{5�_�                    D       ����                                                                                                                                                                                                                                                                                                                                                             ^�m�     �   B   D   h      _	if ( kdtree.nearestKSearch( searchPoint, K, pointIdxNKNSearch, pointNKNSquaredDistance ) > 0 )   {�   C   E   h      	{5�_�                    Y       ����                                                                                                                                                                                                                                                                                                                                                             ^�m�    �   W   Y   g      h	if ( kdtree.radiusSearch( searchPoint, radius, pointIdxRadiusSearch, pointRadiusSquaredDistance ) > 0 )   {�   X   Z   g      	{5�_�                    N       ����                                                                                                                                                                                                                                                                                                                                                             ^�t�    �   M   O   f      >	/* 半径内最近领搜索 Neighbors within radius search */5�_�      	              ;       ����                                                                                                                                                                                                                                                                                                                                                             ^�v5     �   ;   D   g           * �   ;   =   f    5�_�      
           	   <       ����                                                                                                                                                                                                                                                                                                                                                             ^�v:     �   ;   <          .     *     搜索给定查询点的k个近邻.5�_�   	              
   :       ����                                                                                                                                                                                                                                                                                                                                                             ^�v;     �   :   <   m    �   :   ;   m    5�_�   
                 ;       ����                                                                                                                                                                                                                                                                                                                                                             ^�v=     �   :   <   n      .     *     搜索给定查询点的k个近邻.5�_�                    =       ����                                                                                                                                                                                                                                                                                                                                                             ^�v?     �   <   =              Parameters:5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                             ^�vE     �   @   B   m          Returns:5�_�                    B       ����                                                                                                                                                                                                                                                                                                                                                             ^�vG     �   A   C   m               找到的近邻点数量5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                             ^�vM     �   @   B   m              Returns:5�_�                    B       ����                                                                                                                                                                                                                                                                                                                                                             ^�vO     �   A   C   m      $            找到的近邻点数量5�_�                    =       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vY     �   <   A   m              [in] 给定查询点   +        [in] 要搜索的近邻点个数k     &        [out] 相邻点的结果索引   /        [out] 到相邻点的最终平方距离5�_�                    =       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�v\     �   <   A   m                   [in] 给定查询点   /            [in] 要搜索的近邻点个数k     *            [out] 相邻点的结果索引   3            [out] 到相邻点的最终平方距离5�_�                    =       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vc     �   <   >   m                 [in] 给定查询点5�_�                    >       ����                                                                                                                                                                                                                                                                                                                            >          B                 ^�vi     �   >   C   m      )           [out] 相邻点的结果索引   2           [out] 到相邻点的最终平方距离          Returns:   #           找到的近邻点数量�   =   ?   m      .           [in] 要搜索的近邻点个数k  5�_�                    =       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vm     �   <   A   m            *      [in] 给定查询点   /     *      [in] 要搜索的近邻点个数k     *     *      [out] 相邻点的结果索引   3     *      [out] 到相邻点的最终平方距离5�_�                    A       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vo     �   @   B   m           *  Returns:5�_�                    B       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vp     �   A   C   m      $     *      找到的近邻点数量5�_�                    C       ����                                                                                                                                                                                                                                                                                                                            =          @                 ^�vu    �   B   C          "	 *     [in] the given query point   4	 *     [in] k the number of neighbors to search for   =	 *     [out] the resultant indices of the neighboring points   G	 *     [out] the resultant squared distances to the neighboring points   	 * Returns:   !	 *     number of neighbors found5�_�                    P   K    ����                                                                                                                                                                                                                                                                                                                                                             ^�v�     �   O   Q   g      c	std::vector<int>	pointIdxRadiusSearch;                           /* 半价搜索得到的索引 */5�_�                    R   T    ����                                                                                                                                                                                                                                                                                                                                                             ^�v�    �   Q   S   g      W	float			radius = 256.0f * rand() / (RAND_MAX + 1.0f);   /* 随机产生一个半价 */5�_�                    R   1    ����                                                                                                                                                                                                                                                                                                                                                             ^�w     �   R   T   h          �   R   T   g    5�_�                    S       ����                                                                                                                                                                                                                                                                                                                                                             ^�w%    �   R   T   h          radius = min(radius, 10)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^�w0    �         i       �         h    5�_�                    T       ����                                                                                                                                                                                                                                                                                                                                                             ^�wD    �   S   U   i          radius = min(radius, 10);5�_�                     T        ����                                                                                                                                                                                                                                                                                                                                                             ^�wU    �   S   U   i      "    radius = std::min(radius, 10);5�_�      !               T       ����                                                                                                                                                                                                                                                                                                                                                             ^�w_     �   S   T          $    radius = std::min(radius, 10.0);5�_�       "           !           ����                                                                                                                                                                                                                                                                                                                                                             ^�wa   	 �                #include <algorithm>5�_�   !   #           "   R       ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h          �   R   T   g    5�_�   "   $           #   S       ����                                                                                                                                                                                                                                                                                                                                                             ^�w�   
 �   R   T   h          radius = min(radius, 10.0)5�_�   #   %           $   S       ����                                                                                                                                                                                                                                                                                                                                                             ^�w�    �   R   T   h          radius = min(radius, 10.0);5�_�   $   &           %   S       ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h      $    radius = std::min(radius, 10.0);5�_�   %   '           &   S   %    ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h      +    radius = std::min(radius, float()10.0);5�_�   &   (           '   S   (    ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h      *    radius = std::min(radius, float(10.0);5�_�   '   )           (   S   *    ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h      +    radius = std::min(radius, float(10.0 );5�_�   (   *           )   S   )    ����                                                                                                                                                                                                                                                                                                                                                             ^�w�     �   R   T   h      ,    radius = std::min(radius, float(10.0 ));5�_�   )   +           *   S   )    ����                                                                                                                                                                                                                                                                                                                                                             ^�w�    �   R   T   h      +    radius = std::min(radius, float(10.0));5�_�   *               +   S   %    ����                                                                                                                                                                                                                                                                                                                                                             ^�x    �   R   T   h      ,    radius = std::min(radius, float(10.0) );5��