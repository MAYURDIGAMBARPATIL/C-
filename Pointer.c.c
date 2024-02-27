// C Pointers
#include<stdio.h>
int main()
{
int myAge=43;
int*ptr=&myAge;

printf("%d\n", myAge); //output the value of myAge(43)
printf("%p\n", &myAge); // Output the memory address of myAge 
printf("%p\n", ptr); // Output the memory address of myAge with the Pointer 
printf("%d\n",*ptr); // Deference: Output the Value of myAge with the pointer 43
return 0;
}