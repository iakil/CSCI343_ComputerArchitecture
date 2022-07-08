/**
 * @author Akil Bhuiyan
 * @brief Wait SystemCall
 */

#include <unistd.h>
#include <sys/wait.h>
// W(A) means write(1, "A", sizeof "A")
#define W(x) write(1, #x, sizeof #x)
int main()
{
// Scenerio: 1

W(A);  // 'A' prints
int child=fork();  // Fork System call
W(B); // 'B' Prints 2 times

if (child) 
         wait(NULL); // Wait system call
W(C);      // Output: ABBCC or ABCBC or many...


// Scenerio: 2

// W(A);
// int child=fork();
// W(B);

// if (child)
//          wait(NULL);
// W(C);
// W(B);         // Output: ABBCBCB or many...

}