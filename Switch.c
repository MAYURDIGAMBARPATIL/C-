// C Switch
#include<stdio.h>
int main()
{
int a,b;

printf("Welcome to My calculator program\n");
printf("--------------------------------------------\n");
printf("Enter any two number:\n");
scanf("%d %d",&a,&b);
printf("1. Addition\n2. Subtraction\n3. Division\n4. Multiplexing");
int operation;
printf("Enter the No of operation do you Want to perform:");
scanf("%d",&operation);
printf("-----------------OUTPUT------------------\n");



switch (operation)
{
case 1:
    printf("Answer:%d\n",a+b);
    break;

case 2:
    printf("Answer:%d\n",a-b);
    break;

case 3:
    printf("Answer:%f\n",a/b);
    break;

case 4:
    printf("Answer:%d\n",a*b);
    break;

default:
    printf("Enter valid operation number");
    break;
}

return 0;
}