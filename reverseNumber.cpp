#include <iostream>

using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    
    while (num != 0) {
        int digit = num % 10;  // Get the last digit of the number.
        reversed = reversed * 10 + digit;  // Add the digit to the reversed number.
        num /= 10;  // Remove the last digit from the original number.
    }
    
    return reversed;
}

int main() {
    int number = 12345;
    int reversedNumber = reverseNumber(number);

    cout << "Original number: " << number << endl;
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
