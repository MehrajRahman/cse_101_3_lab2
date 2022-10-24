#include <stdio.h>
int main(){
    double term1, term2;
    printf("Enter term 1 marks: \n");
    scanf("%lf", &term1);
    printf("Enter term 1 marks: \n");
    scanf("%lf", &term2);

    if(term1 > term2){
        printf("You got more marks in term One. \n ");
    }else if (term1 < term2){
        printf("You got more marks in term Two. \n ");
    }else{
        printf("You got same marks in both exam. \n ");
    }
    

    return 0;
}