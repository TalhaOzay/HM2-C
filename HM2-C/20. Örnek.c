#include <stdio.h>
#include <math.h>

// 20. Örnek
int main(){
	int x,num,a;
	double sum=0;
	printf("Enter Number : ");
	scanf("%d",&x);
	printf("Enter number of repetitions : ");
	scanf("%d",&num);
	for (a=1;a<=num;a+=2){
		sum+=pow(x,a);
	}
	printf("Sum of the series = %.1lf",sum);
	return 0;
}
