#include <stdio.h>
#include <ctype.h>

/*
You are given three integer numbers. You need to add the smallest number to
the largest number and multiply that sum by two.

Implementation details:
The three integer numbers are stored in registers eax, ebx, and ecx. You need 
to store the answer into register edx.

Hint:
One way of finding minimum and maximum number is to sort the numbers.

IMPORTANT comments:
(i)   To test your code see the "testcode" function in lab1-testing.c
(ii)  Write your assembly code only in the marked block.
(iii) Do NOT write any code outside the marked block.
(iv)  You are NOT allowed to use any version of the MULTIPLY instruction!
(v)   Make sure you put your name and student ID in the strings below.
*/

char *yourName	= "Your name here";
char *yourStudentID   = "Your student ID here";

/* You are supposed to implement the body of this function */

void lab1( int a, int b, int c, int *result )
{
	__asm 
	{
		mov esi, result
		push eax
		push ebx
		push ecx
		push edx

		mov eax, a
		mov ebx, b
		mov ecx, c

// YOUR CODE STARTS HERE


	
// YOUR CODE ENDS HERE

		mov [esi][0], edx
		pop edx
		pop ecx
		pop ebx
		pop eax
	}
	return;

}