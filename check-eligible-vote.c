// You are given an integer age.
// Your task is to check whether the person is eligible to vote.

// A person is eligible to vote if:

// age ≥ 18
// Input Format

// Single integer input: {age}

// Constraints

// 0 ≤ age ≤ 150
// Output Format

// You must print:

// "Eligible" or "Not Eligible"
// Sample Input 0

// 20
// Sample Output 0

// Eligible
// Sample Input 1

// 17
// Sample Output 1

// Not Eligible
// Sample Input 2

// 18
// Sample Output 2

// Eligible


#include <stdio.h>
#include <stdbool.h>

bool checkEligible(int age){
    if(age >= 18){
        return true;
    }
    return false;
}

int main() {
    int age;
    scanf("%d", &age);
    
    bool vote = checkEligible(age);

    if(vote == false){
        printf("Not Eligible");
    } 
    else{
        printf("Eligible");  
    }

    return 0;
}