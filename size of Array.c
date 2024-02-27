// C Pointer and Arrays 
#include<stdio.h>
int main()
{
    int myInt;
    printf("%1u\n",sizeof(myInt));// Get the memory size of an int
    
int myNumbers[4]={25, 50, 75, 100};
 printf("%1u\n", sizeof(myNumbers)); // Get the size of the myNumber array
 printf("%d\n",*myNumbers);
 printf("%d\n",*(myNumbers +1));
 printf("%d\n",*(myNumbers + 2));
 printf("%d\n",*(myNumbers + 3));
int i;
for (i=0; i<4; i++){
    printf("%d\n",myNumbers[i]); //print myNumbers values
    printf("%p\n",myNumbers[i]); // Get the memeory address of the myNumbers array
     printf("%p\n",&myNumbers[0]); // Get the memory address of the first array element
   
}
return 0;
}