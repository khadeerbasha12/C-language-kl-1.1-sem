 #include<stdio.h>
 #define g 9.8
 float getheight(float m,float p)
 {
 	float kg;
 	m=kg/2.2046;
 	float h=p/(m*g);
 	return h;
 }
 int main()
 {
 	float kg,p;
 	float ans;
 	printf("\n enter the values of kg and p");
 	scanf("%f %f",&kg,&p);
 	ans=getheight(kg,p);
 	printf("\n the height of shelf is:%f",ans);
 	return 0;
 }
