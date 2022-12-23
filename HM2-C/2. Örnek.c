#include <stdio.h>
#include <math.h>

// 2. Örnek
void main(){
	double x1,x2;
	int a,b,c,dis;
	printf("Enter materials (a,b,c) of the equation one by one (ax^2+bx+x) :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	dis=pow(b,2)-4*a*c;
	if (0<dis){
		x1=((-b)+dis^(1/2))/2*a;
		x2=((-b)-dis^(1/2))/2*a;
		printf("First root = %.2lf \nSecond root = %.2lf",x1,x2);
	}else if (dis==0){
		x1=(-b)/(2*a);
		printf("Root of the equation = %.2lf",x1);
	}else{
		printf("This equation don't have any reeal root.");
	}

}
