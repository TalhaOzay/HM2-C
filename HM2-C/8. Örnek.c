#include <stdio.h>
#include <math.h>

// 8. Örnek
void main(){
	int num,t,a;
	int b=2;
	double sum=2;
	printf("Enter number : ");
	scanf("%d",&num);
	for (a=2;a<num;a++){
		while (b<a){
			if (a%b==0){
				t=1;
				break;
			}else{
				b++;
				t=2;
			}
		}
		if (t==2){
			sum+=a;
		}
	b=2;
	}
	printf("Sum of all prime number = %.1lf",sum);
}
