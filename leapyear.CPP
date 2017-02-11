#include <stdio.h>
#include <stdlib.h>
int main ()
{
int n;
printf("\n Enter the year");
scanf("%d",&n);
if(n%100==0)
{
  if(n%400==0)
  printf("\n The year is a leap year");  
  else
printf("\n The year is not a leap year");
}
  else if(n%4==0)
printf("\n The year is a leap year");
else
printf("\n The year is not a leap year");
  system("PAUSE");
return 0;
}
