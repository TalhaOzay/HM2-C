#include <stdio.h>
#include <math.h>

// 18. Örnek
int main(){
	int num,a,b;
	printf("Enter Number : ");
	scanf("%d",&num);
	for (a=1;a<=num;a++){
		for (b=a;b<(2*a);b++){
			if (b%2!=0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
