/* Author: Eman Syed
Date 22/10/2023
The programme that calculate the user data and inform the user about the data when it closely came to an end

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int days;
    float average_spending;
    int remaining_days;
    float GBs_used;
    int GB_limit=15;
    float end_result;
    float exceeding_limit;
    float daily_allowance;
    int lim;

    printf("Enter the Limit:");
      scanf("%d", &lim);

    printf("Enter the number of days spent:");
      scanf("%d", &days);
    
    printf("enter the total number of GBs used so for:");
      scanf("%f", &GBs_used);

    remaining_days=30-days;

    printf("%d days used, %d days remaining!",days,remaining_days);

    average_spending=GBs_used/days;
    printf("Average daily use:%.2f", average_spending);

    end_result= average_spending*30;

    if(average_spending>0.50 && GBs_used!=lim)
    {
      printf("you are exceding your average daily use(0.50 GB/day)\n");
      daily_allowance=(GB_limit-GBs_used)/(30-days);
      printf("To stay below your data plan,use no more than %.2f GB/day.",daily_allowance);
    }
    
    
}