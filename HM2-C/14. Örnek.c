#include <stdio.h>
#include <math.h>

// 14. Örnek
int main(){
	int num,temp,temp2,a,b,fac,sum;
	printf("Enter Number : ");
	scanf("%d",&num);
	for (temp=1;temp<num;temp++){
		temp2=temp;
		sum=0;
		while (0<temp2){
			a=temp2%10;
			temp2=temp2/10;
			fac=1;
			for (b=1;b<=a;b++){
				fac*=b;
			}
			sum+=fac;
		}
		if (sum==temp){
		printf("%d \n",temp);
		}
	}
	
	return 0;
}
