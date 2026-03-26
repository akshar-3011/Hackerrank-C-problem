// Given a 3-digit number ABC, extract and print A, B, and C separately.

// Important Instructions

// Do NOT write the entire logic in main().
// Create a function void split(int n) and call it from main().
// Input Format

// A single 3-digit integer {ABC}

// Constraints

// 100 ≤ n ≤ 999
// Output Format

// Single line printing the output as: {A} {B} {C}

// Sample Input 0

// 456
// Sample Output 0

// 4 5 6
// Sample Input 1

// 902
// Sample Output 1

// 9 0 2

#include <stdio.h>

int split(int n, int arr[])
{
    int i = 0;

    while (n > 0)
    {
        int Ld = n % 10;
        arr[i] = Ld;
        i++;
        n = n / 10;
    }

    return i;
}

void reverseArray(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int Num;
    int array[10];

    scanf("%d", &Num);

    int size = split(Num, array);

    reverseArray(array, size);

    return 0;
}