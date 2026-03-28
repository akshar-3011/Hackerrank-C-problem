// Write a program to determine the largest number among three integer numbers.

// Input Format

// The input consists of three integers a, b, and c, separated by spaces.
// Constraints

// −10^3 ≤ a, b, c ≤10^3

// Output Format

// Print the largest number among the three integers along with the given message.
// Sample Input 0

// 5 10 15
// Sample Output 0

// The largest number is : 15
// Sample Input 1

// 88 76 76
// Sample Output 1

// The largest number is : 88

#include <stdio.h>


int findLargest(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("The largest number is : %d",findLargest (a , b, c));
    
    return 0;
}

