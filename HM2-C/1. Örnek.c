#include <stdio.h>
#include <math.h>


// 1. Örnek
void main(){
	float side1,side2,A,P;
	printf("Please enter sides lenght : " );
	scanf("%f",&side1);
	scanf("%f",&side2);
	A=side1*side2;
	P=2*side1+2*side2;
	printf("Area = %f\nPerimeter = %f",A,P);
}

