#include <stdio.h>
#include <math.h>

// 15. Örnek
int main(){
	int num,a,temp;
	int sum=0;
	printf("Enter Number : ");
	scanf("%d",&num);
	temp=num;
	while (0<temp){
		a=temp%10;
		temp=temp/10;
		sum=sum*10+a;
	}
	if (sum==num){
		printf("%d number is Palindrome.",num);
	}else{
		printf("%d number is NOT Palindrome.",num);
	}
	
	return 0;
}
