#include <stdio.h> 

int main()
{
    int mins; 
    double hours; 
    double days; 
    double years; 
    printf("Enter number of minutes: ");
    scanf("%d", &mins);

    hours = mins / 60; 
    days = hours / 24;
    years = days / 365; 

    printf("Minutes: %d\n", mins);
    printf("Hours: %.3lf\n", hours);
    printf("Days: %.3lf\n", days);
    printf("Years: %.3lf\n", years);

    return 0; 
}