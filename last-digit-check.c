// You are given two integers a and b.
// Your task is to determine whether they share the same last digit.

// Bonus Challenge: Try approach of not using modulo operator.

// Input Format

// Two space separated integers: {a} {b}

// Constraints

// 0 ≤ a, b ≤ 10^9
// Output Format

// You must print: "YES" or "NO"

// Sample Input 0

// 57 87
// Sample Output 0

// YES
// Sample Input 1

// 123 456
// Sample Output 1

// NO
// Sample Input 2

// 100 0
// Sample Output 2

// YES

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    A = A - (A / 10) * 10;
    B = B - (B / 10) * 10;

    if (A == B)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
