// C Pointers and Arrays
#include<stdio.h>
int main()
{
int myNumbers[4]={25, 50, 75, 100};
// *myNumbers = 13;
// *(myNumbers +1) = 17;
// printf("%d\n", *(myNumbers + 1));
// printf("%d\n", *myNumbers);
int *ptr = myNumbers;
int i;
for(i=0; i<4; i++){
    // printf("%d\n",*(ptr + i));
    printf("%p\n", &myNumbers[i]);
    printf("%1u", sizeof(myNumbers));
}
return 0;
}