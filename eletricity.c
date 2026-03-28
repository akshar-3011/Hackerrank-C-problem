// A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

// For units ≤ 100: The rate is ₹5 per unit.
// For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
// For units > 300: The rate is ₹10 for units above 300.
// Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

// Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.

// Input Format

// A single integer n representing the number of electricity units consumed.
// Constraints

// −10^6 ≤ n ≤ 10^6

// Output Format

// If the input is invalid, print, "Invalid Input!"
// Otherwise, print the total electricity bill after applying the discount, rounded to two decimal places, "The electricity bill is: [amount].""
// Sample Input 0

// 250
// Sample Output 0

// The electricity bill is: 1550.00.
// Sample Input 1

// 450
// Sample Output 1

// The electricity bill is: 3400.00.
// Sample Input 2

// -10
// Sample Output 2

// Invalid Input!
// Sample Input 3

// 150
// Sample Output 3

// The electricity bill is: 765.00.

#include <stdio.h>

float electricityBill(int units){
    if (units < 0)
        return -1;

    if(units <= 100)
        return units * 5;
    else if(units <= 300)
        return 100 * 5 + (units - 100) * 7;
    else
        return 100 * 5 + 200 * 7 + (units - 300) * 10;
}

int main() {
    int units;
    scanf("%d", &units);

    float bill = electricityBill(units);

    if (bill < 0) {
        printf("Invalid Input!");
        return 0;
    }

    if (bill <= 1200)
        bill = bill - (bill * 10 / 100);

    printf("The electricity bill is: %.2f.", bill);

    return 0;
}