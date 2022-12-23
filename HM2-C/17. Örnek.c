#include <stdio.h>
#include <math.h>

// 17. Örnek
int main(){
	float n,a;
	double sum=0;
	printf("Enter Number : ");
	scanf("%f",&n);
	for (a=1;a<=n;a++){
		sum=sum+1/a;
	}
	printf("Sum of the terms = %.3lf",sum);
	return 0;
}
