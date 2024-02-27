// String. 
#include<stdio.h>
#include<string.h>
int main()
{
// char txt[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// printf("%d\n",strlen(txt));
// printf("%d\n",sizeof(txt));
char str1[20] ="Hello World!";
char str2[20];
strcpy(str2, str1);
printf("%s",str2);
// char str2[]="Hellow";
// char str3[]="Hi";
// printf("%d\n",strcmp(str1, str2));
// printf("%d\n",strcmp(str1, str3));

return 0;
}