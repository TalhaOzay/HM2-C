#include <stdio.h>
#include <math.h>

// 9. Örnek
int main(){
	int num,temp,temp2,a;
	int d=0;
	int sum=0;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	temp2=num;
	while (0<num){
		num=num/10;
		d++;
	}
	while (0<temp){
		a=temp%10;
		temp=temp/10;
		sum=sum+ pow(a,d);
	}
	if (sum==temp2){
		printf("%d number is Armstrong",temp2);
	}else{
		printf("%d number is not Armstrong",temp2);
	}
	return 0;	
}
