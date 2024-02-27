// Create a structure
#include<stdio.h>
#include<string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};
int main(){
    //Create a structure variable and assign values to it
    struct myStructure s1 ={13, 'M', "Mayur Patil"};
    s1.myNum=23;
    s1.myLetter='b';
    strcpy(s1.myString,"Pavan zalse");
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
    struct myStructure s2;
    // s2 = s1;
    // printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}