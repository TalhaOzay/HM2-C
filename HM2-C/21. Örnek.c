#include <stdio.h>
#include <math.h>

// 21. Örnek
int main(){
	double sum2=0;
	int num,a,sum;
	printf("Enter Number : ");
	scanf("%d",&num);
	for (a=1;a<=num;a++){
		sum=sum*10+1;
		sum2+=sum;
	}
	printf("Sum of this series = %.1lf",sum2);
	return 0;
}
