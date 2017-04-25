#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


extern void array_selection_sort( int arrayOfIntegers[], int arraySize );
extern void factorial(unsigned int input,unsigned int *output);
extern unsigned int count_ones(unsigned int x);
extern void change_case(char arrayOfChars[], int arraySize);
extern int fibonacci(int n);


void test_ones (unsigned int x);
unsigned int test_factorial (unsigned int x);

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

  /* 
  
	Once you are done implementing the required functions, activate the test cases
			  
  */

	#define TEST_PART1 0
	#define TEST_PART2 0
	#define TEST_PART3 0
	#define TEST_PART4 0 
	#define TEST_PART5 0 

	#define SIZE 15   /* This is the Size of our test array of integers */

	int arrayOfNumbers1[ SIZE ] = {4, 5, 1, 222, 5, 5, 33, 11, -4, 12, -333, 10, -28349, 74, 323232};
	int arrayOfNumbers2[ SIZE ] = {+32131, +432, +232, +4, -1, -4, -5, -7, -8, -8, -9, -100000, -200000, -300000, -9999999};
	int arrayOfNumbers3[ SIZE ] = {4, -5, 1, -222, 5, -5, 33, -11, -4, 12, -333, 10, +28349, 74, -323232};
	int i;

	unsigned int m;
	unsigned int result;

	unsigned int arrayOfNumbers4 [ SIZE ] = {0, 1, 2, 3, 4, 5, 0x11111111, 0x55555555, 0xAAAAAAAA, 0xFFFFFFFF, 637382, -218919, -2000, -300000, -99999};
    unsigned int arrayOfNumbers5 [ SIZE ] = {822, 34, 266, 37, 342234, -397332, 11111111, 555555, 0xAAAAA, 0xF1FFF832, 693232, +4819, -203300, +3000, +329999};


	char arrayOfLetters1[ 21 ] = {'T', 'h', 'i', 's', 'I', 's', 'T', 'h', 'e', 'F', 'i', 'n', 'a', 'l', 'L', 'a', 'b', 'O', 'f', '5', '1'};
	char arrayOfLetters2[ 34 ] = {'I', 'A', 'm', 'O', 'n', 'A', 'S', 'e', 'a', 'f', 'o', 'o', 'd', 'D', 'i', 'e', 't', 'I', 'S', 'e', 'e', 'F', 'o', 'o', 'd', 'A', 'n', 'd', 'I', 'E', 'a', 't', 'I', 't'};
	char arrayOfLetters3[ 10 ] = {'1', '2', '3', '4', 'A', '5', '6', '7', '8', '9'};

	
	printf ("ICS 51 Lab 3 \nName:      %s\nStudentID: %s\n\n", 	  yourName, yourStudentID);

	#if TEST_PART1

		printf("======================PART1======================\n");

		printf("\nThe original array of numbers is:\n\n");

		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers1[i]);
		}
		printf("\n");

		array_selection_sort(arrayOfNumbers1, SIZE );

		printf("\nThe sorted array of numbers is:\n\n");
		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers1[i]);
		}
		printf("\n\n");



		printf("\nThe original array of numbers is:\n\n");

		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers2[i]);
		}
		printf("\n");

		array_selection_sort(arrayOfNumbers2, SIZE );

		printf("\nThe sorted array of numbers is:\n\n");
		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers2[i]);
		}
		printf("\n\n");



		printf("\nThe original array of numbers is:\n\n");

		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers3[i]);
		}
		printf("\n");

		array_selection_sort(arrayOfNumbers3, SIZE );

		printf("\nThe sorted array of numbers is:\n\n");
		for(i=0; i<SIZE; i++){
			printf("%d ", arrayOfNumbers3[i]);
		}
		printf("\n\n");
	
	#endif


	#if TEST_PART2
		
		printf("======================PART2======================\n");
		
		m = 10;
		factorial(m, &result);
		printf("\nfact(%d)=%d",m,result);
		if (result != test_factorial(m)) printf(" | Wrong!\n");
		else printf(" | Correct!\n");

		m = 8;
		factorial(m, &result);
		printf("\nfact(%d)=%d",m,result);
		if (result != test_factorial(m)) printf(" | Wrong!\n");
		else printf(" | Correct!\n");
		
		m = 5;
		factorial(m, &result);
		printf("\nfact(%d)=%d",m,result);
		if (result != test_factorial(m)) printf(" | Wrong!\n");
		else printf(" | Correct!\n");

		printf("\n");
	
	#endif

	
    #if TEST_PART3

		printf("======================PART3======================\n");

		for (i = 0; i < SIZE; i++) {
			test_ones(arrayOfNumbers4[i]);
		}

		for (i = 0; i < SIZE; i++) {
			test_ones(arrayOfNumbers5[i]);
		}

		printf("\n");

	#endif


    #if TEST_PART4

		printf("======================PART4======================\n");
		
		printf("\n");
		for(i=0; i<21; i++){
			printf("%c", arrayOfLetters1[i]);
		}
		printf(" ==> ");

		change_case(arrayOfLetters1, 21);

		for(i=0; i<21; i++){
			printf("%c", arrayOfLetters1[i]);
		}

		printf("\n\n");
		for(i=0; i<34; i++){
			printf("%c", arrayOfLetters2[i]);
		}
		printf(" ==> ");

		change_case(arrayOfLetters2, 34);

		for(i=0; i<34; i++){
			printf("%c", arrayOfLetters2[i]);
		}

		printf("\n\n");
		for(i=0; i<10; i++){
			printf("%c", arrayOfLetters3[i]);
		}
		printf(" ==> ");

		change_case(arrayOfLetters3, 10);

		for(i=0; i<10; i++){
			printf("%c", arrayOfLetters3[i]);
		}


		printf("\n\n");

	#endif

	#if TEST_PART5

    	printf("======================PART5======================\n");

		for (i=0;  i < SIZE;  i++) {
			printf("\nFib (%d) = %d\n", i, fibonacci(i));
		}
		printf("\n");

	#endif

	
}

void test_ones(unsigned int x) {
	unsigned count = 0;
	unsigned mask = 0x80000000;
	unsigned result;

	while (mask > x) {
		mask >>= 1;
	}
	printf("\n");
	while (mask) {
		if (x & mask) {
			count++;
			printf("1");
		} else {
			printf("0");
		}
		mask >>= 1;
	}

	if (x==0)
		printf("0");
	printf(" has %u ones", count);

	result = count_ones(x);

	if (result == count)
		printf(" | Correct!\n\n");
	else
		printf(" | Wrong! You've returned %d \n\n", result);
}

unsigned int test_factorial(unsigned int n)
{
  unsigned int c;
  unsigned int result = 1;
 
  for (c = 1; c <= n; c++)
    result = result * c;
 
  return result;
}