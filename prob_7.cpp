#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter first Angle of the triangle: \n");
    scanf("%d", &a);
    printf("Enter second Angle of the triangle: \n");
    scanf("%d", &b);
    printf("Enter third Angle of the triangle: \n");
    scanf("%d", &c);


    if(a + b + c == 180 ){
        printf("This is Valid \n");
    }
    else{
        printf("This is not Valid \n");
    }

    return 0;
}