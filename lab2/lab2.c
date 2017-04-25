/*
	ICS 51. Lab #2

	PART 1. Implement a function (in assembly) that finds the largest number in a given
	array of integers and then returns it.   
	The function has the following input: an array of integers (passed as a pointer to the begining of that array)
	and the size of the array.
	Store the result (i.e. the largest integer) in edx.

	PART 2. Using the selection sort algorithm (see http://en.wikipedia.org/wiki/Selection_sort for more details), 
	implement a function (in assembly) that sorts a given array of integers in ascending order.
	The inputs to the function are the same as in part A.
	The function will re-arrange the numbers in the array as it sorts.

	You should not modify or add any code outside the designated editable assembly portions of the code.

*/

char *yourName = "Your name here";
char *yourStudentID = "Your student ID here";

int find_max( int arrayOfIntegers[], int arraySize )
{
	int max;

	__asm{
		push eax
	    push ebx
 	    push ecx
	    push edx
		mov edx, 00h        // initialize edx

// BEGIN YOUR CODE HERE



// END YOUR CODE HERE

		mov max, edx        // read edx
		pop edx
		pop ecx
		pop ebx
		pop eax
	}

	return max;
}

void array_sort( int arrayOfIntegers[], int arraySize )
{
	int temp;

	__asm{
		push eax
	    push ebx
 	    push ecx
	    push edx
		push esi
		push edi

// BEGIN YOUR CODE HERE

// Note: You can safely use the 6 registers listed above as well
// as the variable temp in your code, if needed.



// END YOUR CODE HERE

	   pop edi
	   pop esi
       pop edx
	   pop ecx
 	   pop ebx
	   pop eax
	}
}