#include <stdio.h>
#include <math.h>
int main()
{
    float simple_interest, compound_interest, principal_amount, rate_of_interest, time_period, final_amount;
    int number_of_times;
    printf("Enter the principal amount, rate of interest and time period\n");
    scanf("%f %f %f", &principal_amount, &rate_of_interest, &time_period);

    simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
    printf("The simple interest is %.2f\n", simple_interest);

    printf("Enter the number of times interest is compounded per year\n");
    scanf("%d", &number_of_times);
    final_amount = principal_amount * pow(1 + (rate_of_interest / (number_of_times * 100)), number_of_times * time_period);
    compound_interest = final_amount - principal_amount;
    printf("The compound interest is %.2f\n", compound_interest);
    return 0;
}