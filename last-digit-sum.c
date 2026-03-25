// Given two integers, extract their last digits and print the sum of those digits.

// Important Instructions

// Do NOT write the entire logic in main().
// Write a function int sumLastDigits(int a, int b) and call it from main().
// Input Format

// Two integers: {a} {b}

// Constraints

// 0 ≤ a, b ≤ 10⁹
// Output Format

// Single line printing the result as: The sum of last digits is: {res}

// Sample Input 0

// 42 59
// Sample Output 0

// The sum of last digits is: 11
// Sample Input 1

// 100 9
// Sample Output 1

// The sum of last digits is: 9

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sumLastDigits(int a, int b)
{
    short Ld1 = 0, Ld2 = 0, sum = 0;
    if (a >= 9)
    {
        Ld1 = a % 10;
    }
    if (b >= 9)
    {
        Ld2 = b % 10;
    }
    sum = Ld1 + Ld2;
    printf("The sum of last digits is: %hd", sum);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sumLastDigits(a, b);

    return 0;
}
