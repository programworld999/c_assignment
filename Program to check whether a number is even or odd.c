#include <stdio.h>
// Program to check whether a number is even or odd
int main() {
  int n ;
  printf("\nEnter A Number: ");
  scanf("%d", &n);
  if(n%2){
    printf("%d is a odd number", n);
  }else{
    printf("%d is a even number", n);
  }
main();
  return 0;
}
