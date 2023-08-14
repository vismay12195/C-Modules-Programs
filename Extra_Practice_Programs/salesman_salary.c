// A computer manufacturing company has the following monthly compensation policy to their sales persons:
// base salary: 1500.00,   Bonus for each computer sold: 200.00, Commission on monthly sales: 2%
// The gross salary equation is as below:
// Gross Salary = base salary + (quantity * bonus rate) + (quantity * Price) * commission rate

#include <stdio.h>

#define BASE 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02

int main()
{
    int quantity;
    float gross_salary, price, bonus, commission;

    printf("Enter the numbers sold and price\n");
    scanf("%d %f", &quantity, &price);
    bonus = BONUS_RATE * quantity;
    commission = COMMISSION * quantity * price;
    gross_salary = BASE + bonus + commission;
    printf("\n");
    printf("Bonus = %6.2f\n", bonus);
    printf("Commissio = %6.2f\n", commission);
    printf("Gross salary = %6.2f\n", gross_salary);
    return 0;
}