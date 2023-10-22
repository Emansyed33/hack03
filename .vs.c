/* Author: Eman Syed
Date 22/10/2023
The programme that calculate the user data and inform the user about the data when it closely came to an end

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double totalGB, total_used, averageDailyuse, Max_use, Remaining_GB;
    int currentDay, Remaining_Days;
    printf("Number of GB in the plan per 30 day period: ");
    scanf("%lf",&totalGB);
    printf("The current day in the 30 day period (in the range 1,first day, for the last day) : ");
    scanf("%d",&currentDay);
    printf("The total number of GB used so far : ");
    scanf("%lf",&total_used);
    remaining_Days = 30 - CurrentDay;
    remaining_GB = totalGB - total_used;
    averageDailyUse = total_used /currentDay;
    printf("The total number of GB used so far : ");
    scanf("lf",&total_used);
    Remaining_days = 30 - currentDay;
    Remaining_GB = totalGB - total_used;
    AverageDailyuse = total_used/currentDay;
    max_use = totalGB / 30;
    printf("%d days used, %d days remaining\n", currentDay, Remaining_Days);
    if(averageDailyuse > Max_use)
    {
        printf("you are extending your average daily use (%.3If GB/Day).\n, Max_use");
        double suggestion = (averageDailyuse - Max_Use);
        double ExtraUse = (totalGB - total_used/Remaining_Days);
        printf("you are able to use upto %.3lf GB/day and stay below your data plan limit\n,ExtraUse");
        
      } 
      else 
      {
        printf("you have already availed your package for this month\n",ExtraUse):

      } 
      return 0;
}








    
    
