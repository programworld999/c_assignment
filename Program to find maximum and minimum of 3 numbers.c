#include <stdio.h>

// 8)	Program to find maximum and minimum of 3 numbers
int main(void) {

  int a, b, c ;
  printf("Enter value of a: ");
  scanf("%d", &a);
  printf("Enter value of b: ");
  scanf("%d", &b);
  printf("Enter value of c: ");
  scanf("%d", &c);

  if(a>b && a>c){
    printf("a is maximum number");
  }else if(b>a && b>c){
    printf("b is maximum number");
  }else{
    printf("c is maximum number");
  }
  printf("\n");
  if(a<b && a<c){
    printf("a is minmum number");
  }else if(b<a && b<c){
    printf("b is minmum number");
  }else{
    printf("c is minmum number");
  }



  return 0;
}
