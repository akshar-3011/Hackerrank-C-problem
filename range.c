// You are given three integers n, low, high.

// Your task is to check if n is in the inclusive range [low, high].

// Input Format

// Three space separated integers: {n} {low} {high}

// Constraints

// -10^9 ≤ n, low, high ≤ 10^9
// Output Format

// You must print:

// "In Range" or "Out of Range"

// Sample Input 0

// 10 5 20
// Sample Output 0

// In Range
// Sample Input 1

// 4 5 10
// Sample Output 1

// Out of Range
// Sample Input 2

// 15 15 30
// Sample Output 2

// In Range

 // test commit
// test commit

#include <stdio.h>
#include <stdbool.h>

bool checkRange(int num, int min, int max) {
    if(min <= num && num <= max){
        return 1;
    }
    return 0;
}

int main() {
    int num, min, max;
    scanf("%d %d %d", &num, &min, &max);
    
    bool res = checkRange(num, min, max);

    if (res == 1){
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}