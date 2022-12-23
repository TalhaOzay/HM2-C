#include <stdio.h>
#include <math.h>

// 7. Örnek
void main(){
	int num,t,a;
	int b=2;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("2 \n");
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
			printf("%d\n",a);
		}
	b=2;
	}
}
