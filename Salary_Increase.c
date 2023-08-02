#include <stdio.h>
#include <math.h>

int main(){
 
    float salary;
    scanf("%f", &salary);
    if (salary > 0 && salary <= 400.00){
        float new_salary_added = salary * 15 / 100;
        salary += new_salary_added;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salary , new_salary_added );
    }
    
    else if (salary > 400.01 && salary <= 800.00){
        float new_salary_added = salary * 12 / 100;
        salary += new_salary_added;

         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salary , new_salary_added );
    }
     else if (salary > 800.01 && salary <= 1200.00){
        float new_salary_added = salary * 10 / 100;
        salary += new_salary_added;

         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salary , new_salary_added );
    }
     else if (salary > 1200.01 && salary <= 2000.00){
        float new_salary_added = salary * 7 / 100;
        salary += new_salary_added;

         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salary , new_salary_added );
    }
     else if (salary > 2000.00){
        float new_salary_added = salary * 4 / 100;
        salary += new_salary_added;

         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salary , new_salary_added );
    }
 
    return 0;
}