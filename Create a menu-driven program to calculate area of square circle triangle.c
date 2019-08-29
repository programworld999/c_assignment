#include <stdio.h>

int main(){
    int n;
    printf("Select Shape ('1' for square and '2' for circle , '3' for triangle): ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Your shape is square");
            break;
        case 2:
            printf("Your shape is circle");
            break;
        case 3:
            printf("Your shape is triangle");
            break;
        default:
            printf("Invalid input");
    }
    printf("\n");
main();
    return 0;
}
