#include<stdio.h>
 
//程序1-2 
int main()
 
{
 	printf("%d\n",8/5) ;		//1
 	printf("%.1f\n",8.0/5.0) ;	//1.6
	printf("%.2f\n",8.0/5.0) ;	//1.60
	
	//不好解释，等待后面解释	
	printf("%.1f\n",8/5) ;		//0.0
	printf("%d\n",8.0/5.0) ;	//-1717986918
	
}
