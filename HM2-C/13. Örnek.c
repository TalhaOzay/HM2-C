#include <stdio.h>
#include <math.h>

// 13. Örnek
int main(){
	int num,temp,a,b,fac;
	int sum=0;
	printf("Enter Number :	");
	scanf("%d",&num);
	temp=num;
	while (0<temp){
		a=temp%10;
		temp=temp/10;
		fac=1;
		for (b=1;b<=a;b++){
			fac*=b;
		}
		sum+=fac;
	}
	if (sum==num){
		printf("%d number is Strong Number.",num);
	}else{
		printf("%d number is NOT Strong Number.",num);
	}
	
	return 0;
}
