// C Enumeration (enum)
#include <stdio.h>

enum Level {
  LOW = 45,
  MEDIUM =  23,
  HIGH = 24,
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = LOW;
 
  // Print the enum variable
  printf("%d", myVar);
  
  return 0;
}