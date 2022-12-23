#include <stdio.h>
#include <math.h>

// 11. Örnek
int main(){
	int b=2;
	int sum=1;
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	while (b<num){
		if (num%b==0){
			sum+=b;
		}
		b++;
	}
	if (sum==num){
		printf("%d number is Perfect Number.",num);
	}else{
		printf("%d number is NOT Perfect Number.",num);
	}
	return 0;
}
