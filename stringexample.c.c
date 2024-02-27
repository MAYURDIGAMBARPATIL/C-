// C User Input

#include<stdio.h>
int main()
{
int myNum;
char mychar;
// printf("Type a number AND a character and press enter:\n");
// scanf("%d %c", &myNum, &mychar);
// printf("Your number is:%d\n", myNum);
// printf("Your character is:%c\n", mychar);6

char firstName[30];
printf("Enter your firsrt name: \n");
scanf("%s",firstName); //dont use &
printf("Hellow %s\n", firstName);

char fullName[30];
printf("Type your full name:\n");
fgets(fullName, sizeof(fullName), stdin);
printf("Hello %s", fullName);
return 0;
}