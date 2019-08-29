#include <stdio.h>

// 10)	Accept 3 sidea of a triangle and check if triangle is possible or not. Also,tell whether the triangkle is equilateral,isosceles or scalene

int main() {
  int a, b, c;
  printf("Enter first side of triangle: ");
  scanf("%d", &a);
  printf("Enter secound side of triangle: ");
  scanf("%d", &b);
  printf("Enter third side of triangle: ");
  scanf("%d", &c);

  if(a==0 || b==0 || c==0){
    printf("Triangle Is Not Possible");
  }
  else{
    printf("triangle is ");
    if(a == b && b==c && c==a){
      printf("equilateral\n");
    }else if(a==b || b ==c || c==a){
        printf("isosceles\n");
    }else{
        printf("scalene\n");
    }
  }

main();
  return 0;
}
