#include <stdio.h>
#include <math.h>

// 24. Örnek
int main(){
	int bin,a,s=0;
	int sum,num=1;
	printf("Enter binary : ");
	scanf("%d",&bin);
	while (0<bin){
		a=bin%10;
		bin=bin/10;
		sum=sum*10+a;
	}
	sum=sum/10;
	while (1<sum){
		a=sum%10;
		sum=sum/10;
		if (a==0){
			num=num*2;
		}else{
			num=num*2+1;
			s++;
		}
	}
	printf("%d",num);
	return 0;
}
