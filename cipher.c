#include <stdio.h>

int main (void) {
	char mystring[]	= "hello";
	int shift = 4;
    printf("Enter your word: ");
    scanf("%s", mystring);
    printf("Enter the amount you want to shift by: ");
    scanf("%d", &shift);
	printf("\nThe string to be encoded is %s and the shift to use is %d\n", mystring, shift);
	char new = (int)mystring + (int)mystring;
	printf("new string = %c\n", new);
	return 0;
}
