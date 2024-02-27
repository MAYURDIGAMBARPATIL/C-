// C Strings 


#include<stdio.h>
int main()
{
char carName[]="Volvo";
int i;
for (i=0; i<5; ++i)
printf("%c\n", carName[i]);
char greetings[]={'H','e','l','l','o',' ', 'w','o','r','l','d','!','\0'};
printf("%s\n",greetings);
char greetings2[]="Hello World!";
printf("%lu\n", sizeof(greetings)); 
printf("%1u\n",sizeof(greetings2));
return 0;
}