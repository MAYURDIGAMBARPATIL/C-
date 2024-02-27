//if else if 
#include<stdio.h>
int main()
{
int time;
printf("Enter the time:\n");
scanf("%d",&time);
if(time<10)
{
    printf("Good morning.");
}
else if(time<20){
    printf("Good day.");
}
else {
    printf("Good evening");
}
return 0;
}