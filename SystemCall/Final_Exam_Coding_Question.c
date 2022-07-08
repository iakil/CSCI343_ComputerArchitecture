/*
 * @author Akil Bhuiyan
 * @brief Parent Process and Child Process
 */

#include <stdio.h>
#include <unistd.h>
int main()
{

/**
 * @brief After Fork System Call Parent will create one Child and one parent process
 * .. After Second system call Child will create 2 child process
 *    and parent will create like before 
 * 
 *  Output will be: (may vary)
 *                  Akil H15
 *                  B6
 */



printf("Akil H15\n"); // Print Akil H15

int i = fork(); // fork system call executed
 
if (i > 0)
{   // if i > 0 Parent process created
printf("B"); 
}

 if (i < 0)
{   // if i < 0 Fork Failed
   printf("Bhuiyan"); 
}

if (i == 0 )
{   // if i == 0 Child process created
    printf("6"); 
} 

return 0;
} // main