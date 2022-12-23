#include <stdio.h>
#include <math.h>

// 23. Örnek
int main(){
	int sum=1;
	int sum2=0;
	int num,a,T;
	printf("Enter Number : ");
	scanf("%d",&num);
	T=num;
	while (1<=T){
		a=T%2;
		T=T/2;
		sum=sum*10+a;
	}
	while (0<sum){
		a=sum%10;
		sum=sum/10;
		sum2=sum2*10+a;
	}
	sum2=sum2/10;
	printf("Binary of %d number = %d",num,sum2);
	return 0;
}
