#include <stdio.h>
int main()
{
    int simple_interest, compound_interest, principal_amount, rate_of_interest, time_period, final_amount, number_of_times;
    printf("Enter the principal amount, rate of interest and time period\n");
    scanf("%d %d %d", &principal_amount, &rate_of_interest, &time_period);

    simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
    printf("The simple interest is %d\n", simple_interest);

    printf("Enter the number of times interest is compounded per year\n");
    scanf("%d", &number_of_times);
    final_amount = principal_amount * (1 + (rate_of_interest / (number_of_times * 100))) ^ (number_of_times * time_period);
    compound_interest = final_amount - principal_amount;
    printf("The compound interest is %d\n", compound_interest);
    return 0;
}