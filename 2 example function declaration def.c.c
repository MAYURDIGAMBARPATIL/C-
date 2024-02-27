// C Function Declaration and Defination
#include<stdio.h>
int myfunction(int, int);
// int myfunction(int x, int y){
//     return x + y;
// }
int main()
{
    int result=myfunction(5, 3);
    printf("Result is=%d",result);
return 0;
}

int myfunction(int x, int y){
    return x + y;
}