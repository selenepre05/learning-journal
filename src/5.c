  #include <stdio.h>
  #include <stdlib.h>
  
  int main() {
      int age;
      printf("Please enter your age: ");
      scanf("%d", &age);
      
      if (age >= 18) {
          printf("You are eligible to vote.");
      } else {
          printf("You are not eligible to vote.");
      }
  
      return 0;
  }