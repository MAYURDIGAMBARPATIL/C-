// C variables
#include<stdio.h>
int main()
{
    int studentid = 15; 
    int studentage = 23;
    float studentfee = 34;
    char studentgrade = 'A';
    printf("------------------------------\n");
    printf("Student id: %d\t\n", studentid);
    printf("Student age: %d\t\n",studentage);
    printf("Student Fee: %d\t\n]",studentfee);
    printf("Student Grade: %d\t\n",studentgrade);

    
printf("----------------------------------\n");
int myNum = 15;
int myanotherNum;
float myFloatNum = 3.323;
char myLetter = 'R';
myanotherNum = myNum;
printf("\nMy Number:       %d", myNum);
printf("\nMy Float Number: %f", myFloatNum);
printf("\nMy Letter:       %c", myLetter);
printf("\nMy number is %d and my Letter is %c", myNum, myLetter);
printf("-------------------------------------\n");
int myInt;
float myFloat;
double myDouble;

printf("%1u\n",sizeof(myInt));
printf("%1u\n",sizeof(myFloat));
printf("%1u\n",sizeof(myDouble));
return 0;
}