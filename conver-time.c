// You are given two integers h and m, representing time in 24-hour format:

// h → Hour (0 to 23)
// m → Minutes (0 to 59)
// Your task is to convert this time into 12-hour format and print the result in the form:

// {hh}:{mm} AM/PM - where hh and mm are converted hours and minutes double digit formats
// Conversion Rules

// 00:00 to 11:59 → AM
// 12:00 to 23:59 → PM
// In 12-hour format:

// 00 hours → 12 AM
// 12 hours → 12 PM
// 13–23 hours → 1-11 PM
// Minutes must always be printed as given (including leading zeros when necessary).

// Input Format

// Two space-separated integers: {h} {m}

// where

// h is the hour
// m is the minutes
// Constraints

// 0 ≤ h ≤ 23
// 0 ≤ m ≤ 59
// Output Format

// Print the converted time in 12-hour format as:

// {hh}:{mm} AM/PM , where hh and mm are converted hour and minute double digit formats
// Sample Input 0

// 00 10
// Sample Output 0

// 12:10 AM
// Sample Input 1

// 15 45
// Sample Output 1

// 03:45 PM
// Sample Input 2

// 12 30
// Sample Output 2

// 12:30 PM
// Sample Input 3

// 9 45
// Sample Output 3

// 09:45 AM

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    if (H == 0) {
        printf("12:%02d AM", M);
    }
    else if (H == 12) {
        printf("12:%02d PM", M);
    }
    else if (H > 0 && H < 12) {
        printf("%02d:%02d AM", H, M);
    }
    else if (H > 12 && H < 24) {
        printf("%02d:%02d PM", H - 12, M);
    }

    return 0;
}