#include <stdio.h>
#include <math.h>

// 25. Örnek
int main(){
  int n,row,s,i;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(row=1; row<=n; row++){
    int a=1;
    for(s=1; s<=40-row; s++){
    printf(" ");
	}
	for(i=1; i<=row; i++){
      printf("%d ",a);
      a=a*(row-i)/i;
    }
	printf("\n");
  }
  return 0;
}
