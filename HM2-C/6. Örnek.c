#include <stdio.h>
#include <math.h>

// 6. Örnek
void main(){
	int n1,n2;
	int b=2;
	printf("Enter numbers :\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	while (b%n1!=0 || b%n2!=0){
		b++;
	}
	printf("LCM of %d and %d = %d",n1,n2,b);
}
