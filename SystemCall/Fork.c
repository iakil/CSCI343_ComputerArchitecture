/**
 * @author Akil Bhuiyan
 * @brief Fork SystemCall
 */

#include <stdio.h>
#include <unistd.h>
int main(){

/**
 * @brief After Fork System Call Parent will create one Child and one parent process
 * .. After Second system call Child will create 2 child process
 *    and parent will create like before 
 * 
 *    2^n total process
 *    2^n - 1 Child process
 * 
 */

int i;

// Scenerio: 1

for (i=0;i<3; i++){
    fork();  // Inside a for loop is same as Without for loop 3 fork
             // For example: fork(); fork(); fork;
  }  // End of the loop 8 process created (7 Child and 1 Parent)
printf("Hello World\n");  // Output: 8 Hello World


// Scenerio 1    V2:

// fork (); // 2
// fork (); // 4
// fork (); // 8
// printf("Hello World\n"); // Output: 8 Hello World



// Scenerio: 2

// for (i=0;i<3; i++){
//     fork();  // Inside a for loop is same as Without for loop 3 fork
//              // For example: fork(); fork(); fork;
//     printf("Hello World\n"); Output: 2 + 4 + 8 = 14 Hello World
//   }
  

// Scenerio: 3

// for (i=0;i<3; i++){
//     fork();  // Inside a for loop is same as Without for loop 3 fork
//              // For example: fork(); fork(); fork;
//     printf("Hello World\n");    // inside For loop prints: 2 + 4 + 8
//   } 
// printf("Hello World\n"); // outside for loop prints: 8
                            // Total: (2+4+8)  + 8 = 22
                            // Output: 22 Hello World

  
return 0;
}