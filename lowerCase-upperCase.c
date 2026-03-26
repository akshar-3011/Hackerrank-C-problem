// Write a C program that takes a single lowercase English letter as input and prints its corresponding uppercase letter.

// Use the ASCII value method to perform the conversion.

// Input Format

// A single lowercase character charLower.

// Constraints

// Input must be a lowercase English alphabet ('a' to 'z').
// Do not use built-in string or character functions like toupper() or strupr().
// Conversion must be done using ASCII value arithmetic.
// Output Format

// A single line in the format:

// The uppercase of {charLower} is {charUpper}

// Sample Input 0

// a
// Sample Output 0

// The uppercase of a is A
// Sample Input 1

// z
// Sample Output 1

// The uppercase of z is Z
// Sample Input 2

// g
// Sample Output 2

// The uppercase of g is G

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char charUpper(char a)
{
    if (a >= 'a' && a <= 'z') {
        return a - 32;
    }
    return a; 
}

int main()
{
    char ch;
    scanf(" %c", &ch);

    char result = charUpper(ch);

    printf("The uppercase of %c is %c", ch, result);

    return 0;
}