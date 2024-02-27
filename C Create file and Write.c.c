// C Create file and Write 
#include<stdio.h>
int main()
{
FILE *fptr;
fptr=fopen("filename.txt","w");
fprintf(fptr,"My name is mayur digambar patil i am 20 year old and also unluckly ece eng. but good at programming");

fclose(fptr);
fptr = fopen("filename.txt","r");
char myString[100];
fgets(myString, 100, fptr);
printf("%s", myString);
fclose(fptr);
return 0;
}