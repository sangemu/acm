#include<stdio.h>
#include<math.h> 
 
//����1-1 Բ�������� 
//�������뾶r�͸�h,���Բ����ı������������λС������ʽ������

//3.5 9
//Area = 274.889 

//����1-5 
int main()
 
{
	const double pi = acos(-1.0); //pi �ļ��㷽���������ȥ����acos asin �Ķ����� pi = 4*atan(1.0) 
	 
//	printf("%e\n",pi);  //e g f���������� 
//  printf("%f\n",M_PI) //����ʾδ���� 
 	
 	double r,h,s1,s2,s;
 	
 	//Ϊɶlf ��������� 
 	scanf("%lf%lf",&r,&h);
 	
 	s1 = pi*r*r;
 	
 	s2 = 2*pi*r*h;
 	
 	s = 2*s1+s2;
 	
 	printf("Area = %.3f\n",s);
 	
 	return 0; 
}
