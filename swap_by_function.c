#include <stdio.h>
void main(){
int a, b;
// value of a
printf("Enter Value of a: ");
scanf("%d", &a);

// value of b
printf("Enter Value of b: ");
scanf("%d", &b);

swap(a, b);


}

void swap(int a, int b){
printf("value of a : %d and value of b : %d", a,b );
int store;
store = b;
b = a;
a = store;
printf("\n Swaping Value ->");
 printf("value of a : %d and value of b : %d ", a, b );
}
