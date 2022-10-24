#include <stdio.h>

int main(){
    int x, y;
    printf("Enter x co-ordinate value: \n");
    scanf("%d", &x);
    printf("Enter y co-ordinate value: \n");
    scanf("%d", &y);

    if(x > 0 && y > 0){
        printf("The point (%d , %d) is on first quadrant \n", x, y);
    }else if (x < 0 && y > 0){
        printf("The point (%d , %d) is on Second quadrant \n", x, y);
    }else if (x > 0 && y < 0){
        printf("The point (%d , %d) is on Third quadrant \n", x, y);
    }else{
        printf("The point (%d , %d) is on Fourth quadrant \n", x, y);
    }
    
   return 0;

}