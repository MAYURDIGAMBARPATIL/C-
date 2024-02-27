// for loop and nested loop
#include <stdio.h>
int main()
{
  
  int i, j;
  
  for(i=1; i<=2; ++i){
      printf("=====================\n");
    printf("Outer: %d\n", i);
  
    for(j=1; j<=3; ++j){
        printf("Inner: %d\n", j);
    }
  }
  

    // int i;
    // for (i=1; i<=5; ++i){
    //     printf("%d\n",i);
    // }
    return 0;
}