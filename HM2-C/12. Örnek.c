#include <stdio.h>
#include <math.h>

// 12. Örnek
int main(){
	int b,sum,num,a,temp;
	printf("Enter Number : ");
	scanf("%d",&num);
	for (temp=2;temp<num;temp++){
		b=2;
		sum=1;
		while (b<temp){
			if (temp%b==0){
				sum+=b;
			}
			b++;
		}
		if (sum==temp){
			printf("%d \n",temp);
		}
		
	}
	return 0;
}
