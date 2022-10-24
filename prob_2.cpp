#include <stdio.h>

int main() {
    int taxableIncome;
    double tax;
    printf("Enter Your Taxable Amount: \n");
    scanf("%d", &taxableIncome);

    if(taxableIncome <= 150000){
        printf("No Tax for you! \n");
    }else if (taxableIncome > 150001 && taxableIncome <=300000)
    {
        tax = taxableIncome * 1.1;
        printf("Your tax is %.2lf \n", tax);
    }else if (taxableIncome > 300001 && taxableIncome <=500000)
    {
        tax = taxableIncome * 1.2;
        printf("Your tax is %.2lf \n", tax);
    }
    else{
        tax = taxableIncome * 1.3;
        printf("Your tax is %.2lf \n", tax);
    }
    

    


    return 0;
}