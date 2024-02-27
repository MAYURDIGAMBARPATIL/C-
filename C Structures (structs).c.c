// C Structures (structs)
#include<stdio.h>
#include<string.h>
struct myStructure {
    int myNum;
    char myLetter;
    char mystring[30]; //string

};
int main(){
    struct myStructure s1;
    struct myStructure s2;
    strcpy(s1.mystring,"Some text\n");
    printf("My string: %s\n", s1.mystring);
    s1.myNum=13;
    s1.myLetter='M';
    

    s2.myNum = 45;
    s2.myLetter = 'a';
    printf("My Number:%d %d \n", s1.myNum, s2.myNum);
    printf("My letter: %c %c \n",s1.myLetter, s2.myLetter);
    
    return 0;
}