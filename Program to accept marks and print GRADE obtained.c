#include <stdio.h>
// 9)	Program to accept marks and print GRADE obtained
int main() {
  int n ;
  printf("Enetr Student Number: ");
  scanf("%d", &n);

  if(n<25){
    printf("Student Grade is F");
  }else if(n>=25 && n<=40){
    printf("Student Grade is D");
  }else if(n>=41 && n<=60){
    printf("Student Grade is C");
  }else if(n>=61 && n<=79){
    printf("Student Grade is B");
  }else if(n>80){
    printf("Student Grade is A");
  }else{
    printf("Invalid Input");
  }
  printf("\n");


main();
  return 0;
}
