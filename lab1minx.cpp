#include <stdio.h>
int main() {
  int n1;
  int n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  if (n1>n2){
  	int n=n1-n2;
  	printf("num1>num2=%d",n);
  }
  else{
  	int n=n2-n1;
  	printf("num2>num1=%d",n);
  }
  return 0;
}
