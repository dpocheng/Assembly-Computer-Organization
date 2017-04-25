#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

extern void lab1(int a, int b, int c, int *result);

extern char *yourName;
extern char *yourStudentID;
static void testcode();

int main(void)
{
	testcode();
	return 0;
}

static void testcode (void)
{
	int *result;

	printf ("ICS 51 Lab 1 \nName:      %s\nStudentID: %s\n\n", 
	  yourName, yourStudentID);

  /* Once you are done implementing the function, activate one or more of
     the following test sequences.
     Procedure to activate a single test sequence:
         replace 
              #define TEST1 0
         with
              #define TEST1 1
     You can similarly activate TEST2 and TEST3
  */

	#define TEST1 0
	#define TEST2 0
	#define TEST3 0

	#if TEST1
		result = (int*) malloc(sizeof(int));
		lab1(1,2,3,result);
		printf( "Input = %d, %d, %d, Output = %d\n", 1, 2, 3, *result );
		free(result);
	#endif

	#if TEST2
		result = (int*) malloc(sizeof(int));
		lab1(4,2,7,result);
		printf( "Input = %d, %d, %d, Output = %d\n", 4, 2, 7, *result );
		free(result);
	#endif

	#if TEST3
		result = (int*) malloc(sizeof(int));
		lab1(3,3,3,result);
		printf( "Input = %d, %d, %d, Output = %d\n", 3, 2, 1, *result );
		free(result);
	#endif
}
