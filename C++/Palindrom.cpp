#include<iostream>
using namespace std;

bool isPalindrome(int num, int &originalNum, int &reverseNum) {
    // Base case: when the number becomes 0
    if (num == 0) {
        return originalNum == reverseNum;
    }

    // Extract the last digit of the number
    int digit = num % 10;

    // Build the reverse number
    reverseNum = reverseNum * 10 + digit;

    // Recursive call with the remaining digits
    return isPalindrome(num / 10, originalNum, reverseNum);
}

int main() {
    int num;

    // Input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Store the original number for comparison
    int originalNum = num;

    // Initialize the reverse number
    int reverseNum = 0;

    // Check if the number is a palindrome
    if (isPalindrome(num, originalNum, reverseNum)) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}