#include<stdio.h>
#include<math.h> 
 
//例题1-1 圆柱体表面积 
//输入地面半径r和高h,输出圆柱体的表面积，保留三位小数，格式见样例

//3.5 9
//Area = 274.889 

//程序1-5 
int main()
 
{
	const double pi = acos(-1.0); //pi 的计算方法。不理解去看下acos asin 的定义域。 pi = 4*atan(1.0) 
	 
//	printf("%e\n",pi);  //e g f都可以试试 
//  printf("%f\n",M_PI) //会显示未定义 
 	
 	double r,h,s1,s2,s;
 	
 	//为啥lf 后面会讨论 
 	scanf("%lf%lf",&r,&h);
 	
 	s1 = pi*r*r;
 	
 	s2 = 2*pi*r*h;
 	
 	s = 2*s1+s2;
 	
 	printf("Area = %.3f\n",s);
 	
 	return 0; 
}
