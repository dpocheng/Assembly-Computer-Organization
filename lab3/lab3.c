/*
	ICS 51. Lab #3

	IMPORTATNT NOTES:

  - You cannot define any local variable in the C code. If you need to use temporary variables,
    you have to allocate space for them in the prologue of the function. 

  - You are not allowed to change anything of this file except for putting you assembly codes in 
    the provided spaces.

  - Remember to fill in your name, student ID below.

  - Submit ONLY lab3.c file for grading.

*/

char *yourName = "Your name here";
char *yourStudentID = "Your student ID here";

/***********************************************************************************************

	PART 1: Selection Sort

	In previous lab, you implemented the selection sort algorithm in assembly. This algorithm 
	divides the input list into two parts: the sublist of items already sorted, which is built up 
	from left to right of the list, and the sublist of items remaining to be sorted that occupy 
	the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the 
	entire input list. The algorithm proceeds by finding the smallest element in the unsorted 
	sublist, exchanging it with the leftmost unsorted element (putting it in sorted order), 
	and moving the sublist boundaries one element to the right.

	Our implementation here uses a function called "find_min_index" to find the index of smallest
	element between ith index and jth index of the array. The function "array_selection_sort" uses
	this function to find the smallest number and exchanges it with the leftmost unsorted element in
	each iteration.

************************************************************************************************/

//__declspec(naked) 
int find_min_index (int arrayOfIntegers[], int i, int j)
{

// C code to be converted to x86 assembly
/*
    int iMin = i;
    // test against elements after i and before j to find the smallest 
    for ( i ; i < j; i++) {
        // if this element is less, then it is the new minimum   
        if (arrayOfIntegers[i] < arrayOfIntegers[iMin]) {
            // found new minimum; remember its index 
            iMin = i;
        }
    }

	return iMin;
*/

	__asm{
		  // BEGIN YOUR CODE HERE


		  // END YOUR CODE HERE
		  ret
	}

}

void array_selection_sort( int arrayOfIntegers[], int arraySize )
{

// C code to be converted to x86 assembly
/*  
	int j;
	int iMin;
    int temp;

	// advance the position through the entire array //
	//   (could do j < n-1 because single element is also min element) //
	for (j = 0; j < arraySize-1; j++) {

		// find the index of min element in the unsorted a[j .. n-1] //
 		iMin = find_min_index (arrayOfIntegers, j, arraySize);
 
		if(iMin != j) {
			temp = arrayOfIntegers[iMin];
			arrayOfIntegers[iMin] = arrayOfIntegers [j];
			arrayOfIntegers	[j] = temp;	
		}
	}
*/

	__asm{
		  // BEGIN YOUR CODE HERE


		  // END YOUR CODE HERE
	}

}

/***********************************************************************************************

    PART 2: Recursive Factorial

	Implement two functions that calculates the factorial of an integer not greater than 10.

	The 1st function, factorial (unsigned int input, unsigned int *output), is the non 
	recursive wrapper function which take the input, sets up the stack, calls the recursive 
	function and puts the result in the location pointed to by *output

	The 2nd function, factorial_rec(unsigned int n), is the recursive function that actually 
	calculates the factorial.

	Given an unsigned integer number n,we define FACTORIAL(n) as:

	Factorial(n) = 1                   ,    if n = 0 or n = 1
		           n * Factorial(n-1)  ,    if n > 1
		
	Hint:
		
	- You need to use IMUL instruction. Learn how to use it:
	http://www.cs.virginia.edu/~evans/cs216/guides/x86.html#instructions

************************************************************************************************/

__declspec(naked) 
unsigned int factorial_rec(unsigned int n)
{

// C code to be converted to x86 assembly
/*
	if (n<=1) return n;

	else return n * factorial_rec(n-1); 
*/


	__asm{
		    // BEGIN YOUR CODE HERE


			// END YOUR CODE HERE
		    ret
	}

}

_declspec(naked) 
void factorial(unsigned int input, unsigned int *output)
{

// C code to be converted to x86 assembly
/*
	*output = factorial_rec (input);
*/

	__asm{
		    // BEGIN YOUR CODE HERE


            // END YOUR CODE HERE
		    ret
	}

}

/***********************************************************************************************

    PART 3: Count Ones

	Implement the "count_ones" function that counts the number of "1" bits in the binary 
	representation of an integer, and returns the result.

************************************************************************************************/
unsigned int count_ones(unsigned int x) {


	__asm{
			push ebx  
			push ecx  
			push edx
			push esi
			push edi

			// BEGIN YOUR CODE HERE


			// END YOUR CODE HERE

			pop edi
			pop esi
			pop edx
			pop ecx
 			pop ebx
	}

}

/***********************************************************************************************

    PART 4: Reverse Letter Case

	You're given an array of characters (a string) that may contain numbers as well as upper and 
	lower case letters. Implement a function to convert all the uppercase letters to lowercase and 
	vice versa. For example "ThisIsTheFinalLabOf51" should be converted to "tHISiStHEfINALlABoF51". 
	The function has the following inputs: An array of charaters and the size of the array. The 
	array should be converted in place. There is no explicit output for this function.

	Hint:

	- Note that each element of the arrays is a char (1 byte). You can not use a 32-bit register 
	to read/write from/to a memory location. Instead you should use the 8-bit version of the x86
	general-purpose registers. 
	More info: http://www.cs.virginia.edu/~evans/cs216/guides/x86.html#registers

	- The link to the ascii codes is here: http://www.asciitable.com/

************************************************************************************************/
void change_case(char arrayOfChars[], int arraySize ) {

	__asm{
			push eax 
			push ebx 
			push ecx 
			push edx
			push esi
			push edi

			// BEGIN YOUR CODE HERE


			// END YOUR CODE HERE

			pop edi
			pop esi
			pop edx
			pop ecx
 			pop ebx
			pop eax
	}

}

/***********************************************************************************************

    PART 5: Fibonacci

	Implement a recursive function in assembly which calculates the nth fibonacci number.

************************************************************************************************/
_declspec(naked) 
int fibonacci(int n) {

// C code to be converted to x86 assembly
/*
	if (n < 2) return 1;
	else return fibonaci(n - 1) + fibonaci(n - 2);
*/

	__asm{
		    // BEGIN YOUR CODE HERE


		    // END YOUR CODE HERE
			ret
	}
}