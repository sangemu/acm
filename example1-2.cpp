#include<stdio.h>
 
//例题1-2 三位数反转 
//输入三位数，分离出它的百位，十位，个位 ,反转后输出 

//127 
//721 

int main()
 
{
	/*
	//程序1-6
	int n;
	scanf("%d",&n);
	
	printf("%d%d%d",n%10,n/10%10,n/100) ;
	*/
	
	//程序1-7 
	int n,m;
	scanf("%d",&n);
	
	m=(n%10)*100+(n/10%10)*10+(n/100);
	
	printf("%03d\n",m);	//printf("%.3d\n",m); .3d 03d 效果一样 左面补0	 
 	return 0; 
}
