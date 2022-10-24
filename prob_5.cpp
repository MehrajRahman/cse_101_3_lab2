#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter first side's length of the triangle: \n");
    scanf("%d", &a);
    printf("Enter second side's length of the triangle: \n");
    scanf("%d", &b);
    printf("Enter third side's length of the triangle: \n");
    scanf("%d", &c);

    if(a == b && b==c){
        printf("The triangle is equilateral  \n");
    }
    else if (a == b || b == c || c== a){
        printf("The triangle is isosceles  \n");
        
    }else{
        printf("The triangle is scalene  \n");

    }
    

    return 0;
}