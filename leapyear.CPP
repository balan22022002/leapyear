#include <stdio.h>
#include <stdlib.h>
int main ()
{
int n;
printf("\n Enter the year");
scanf("%d",&n);
if(n%4==0)
printf("\n The yearis a leap year");
else
printf("\n The year is not a leap year");
return 0;
}