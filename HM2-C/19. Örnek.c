#include <stdio.h>
#include <math.h>

int main(){
	int b,d,fac,x;
	double sum=1;
	printf("Enter \"x\" Number : ");
	scanf("%d",&x);
	for (b=1;b<=x;b++){
		fac=1;
		for (d=1;d<=b;d++){
			fac*=d;
		}
		sum+=pow(x,b)/fac;
	}
	printf("%.2lf",sum);
	
	return 0;
}

