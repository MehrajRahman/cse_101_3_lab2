#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side's length of the triangle: \n");
    scanf("%d", &a);
    printf("Enter second side's length of the triangle: \n");
    scanf("%d", &b);
    printf("Enter third side's length of the triangle: \n");
    scanf("%d", &c);

    if(a > 0 && b > 0 && c > 0){
        if(a+b >c && b+c > a && c+a > b){
            printf("Possible \n");
        }else{
            printf("Not Possible \n");
        }
    }
    else{
        printf("Not Possible \n");
    }

    return 0;
}