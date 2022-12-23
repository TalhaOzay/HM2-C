#include <stdio.h>
#include <math.h>

// 10. Örnek
int main(){
	int Y=11;
	int sum,num,temp;
	int d,T,a;
	printf("Enter Number : ");
	scanf("%d",&num);
	while (Y<num){
		temp=Y;
		T=Y;
		sum=0;
		d=0;
		while (0<T){
			T=T/10;
			d++;
		}
		while (0<temp){
			a=temp%10;
			temp=temp/10;
			sum=sum+pow(a,d);
		}
		if (sum==Y){
			printf("%d \n",Y);
		}
		Y++;
	}
	return 0;
}
