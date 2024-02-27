//break and continue
#include<stdio.h>
int main()
{
    int i;
for(i=0; i<10; i++){
    if(i==4){
    // break;
    continue; 
    }
    printf("%d\n", i);
}
return 0;
}