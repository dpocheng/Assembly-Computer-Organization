#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 15   /* This is the Size of our test array of integers */

extern int find_max( int arrayOfIntegers[], int arraySize );
extern void array_sort( int arrayOfIntegers[], int arraySize );

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

	int arrayOfNumbers1[ SIZE ] = {4, 5, 1, 222, 5, 5, 33, 11, -4, 12, -333, 10, -28349, 74, 323232};
	int arrayOfNumbers2[ SIZE ] = {+32131, +432, +232, +4, -1, -4, -5, -7, -8, -8, -9, -100000, -200000, -300000, -9999999};
	int arrayOfNumbers3[ SIZE ] = {4, -5, 1, -222, 5, -5, 33, -11, -4, 12, -333, 10, +28349, 74, -323232};


	int i;

	printf ("ICS 51 Lab 2 \nName:      %s\nStudentID: %s\n\n", 
	  yourName, yourStudentID);

  /* Once you are done implementing the required functions, activate one or more of
     the following test sequences. There are three testcases for each part.
     Procedure to activate a single test sequence:

	 1. First, select which part you want to test. To do that: 

         replace 
              #define TEST_PART1 0
         with
              #define TEST_PART1 1
			  

	2. Then, select which test case you want to use. To do that: 

	     replace 
              #define TEST_1 0
         with
              #define TEST_1 1

  */

	#define TEST_PART1 0
	#define TEST_PART2 0

	#define TEST_1 0
	#define TEST_2 0
	#define TEST_3 0


	#if TEST_1

		printf("================================");


		printf("\nThe original array of numbers is:\n\n");

		#if TEST_PART1

			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers1[i]);
			}
			printf("\n\n");

			printf("The largest number is: %d\n\n", find_max( arrayOfNumbers1, SIZE ));

		#endif

		#if TEST_PART2

			array_sort(arrayOfNumbers1, SIZE );

			printf("\nThe sorted array of numbers is:\n\n");
			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers1[i]);
			}
			printf("\n\n");

		#endif
	
	#endif


	#if TEST_2

		printf("================================");


		printf("\nThe original array of numbers is:\n\n");

		#if TEST_PART1

			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers2[i]);
			}
			printf("\n\n");

			printf("The largest number is: %d\n\n", find_max( arrayOfNumbers2, SIZE ));

		#endif

		#if TEST_PART2

			array_sort(arrayOfNumbers2, SIZE );

			printf("\nThe sorted array of numbers is:\n\n");
			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers2[i]);
			}
			printf("\n\n");

		#endif
	
	#endif


	#if TEST_3

		printf("================================");


		printf("\nThe original array of numbers is:\n\n");

		#if TEST_PART1

			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers3[i]);
			}
			printf("\n\n");

			printf("The largest number is: %d\n\n", find_max( arrayOfNumbers3, SIZE ));

		#endif

		#if TEST_PART2

			array_sort(arrayOfNumbers3, SIZE );

			printf("\nThe sorted array of numbers is:\n\n");
			for(i=0; i<SIZE; i++){
				printf("%d ", arrayOfNumbers3[i]);
			}
			printf("\n\n");

		#endif
	
	#endif
	
}
