#include <stdio.h>
#include <math.h>

// 22. Örnek
int main(){
	int a,sum=0;
	for (a=101;a<200;a++){
		if (a%9==0){
			sum+=a;
		}
	}
	printf("Answer = %d",sum);
	return 0;
}
