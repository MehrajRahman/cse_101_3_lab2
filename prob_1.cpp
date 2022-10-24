#include <stdio.h>

int main(){
    int salary;
    double hra, da, grossSalary;
    printf("Enter Your Salary: \n");
    scanf("%d", &salary);

    if(salary > 20000){
        da = salary * .95;
        hra = salary * .30;


    }
    else if (salary <= 20000 && salary >10000){
        da = salary * .90;
        hra = salary * .25;
        
    }
    else{
        da = salary * .80;
        hra = salary * .20;
    }

    grossSalary = salary + da+ hra;

    printf("Gross Salary : %.2lf \n", grossSalary);
    


    return 0;
}
