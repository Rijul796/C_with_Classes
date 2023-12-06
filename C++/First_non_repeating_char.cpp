#include<iostream>
#include<algorithm>
#include<vector>
#include <unordered_map>
using namespace std;
int firstNonRepeatingCharacter(string s) {
  unordered_map<char, int> charCount; // Use an unordered_map to store character counts

  for (char c : s) {
    charCount[c]++; // Increment the count for each character
  }
  int x=s.length();
  for (int i = 0; i < x; i++) {
    if (charCount[s[i]] == 1) { // Check if the current character's count is 1
      return i; // Return the index of the first non-repeating character
    }
  }

  return -1; // If no non-repeating character is found, return -1
}

int main() {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int index = firstNonRepeatingCharacter(s);

  if (index == -1) {
    cout << "No non-repeating character found" << endl;
  } else {
    cout << "The first non-repeating character is '" << s[index] << "' at index " << index << endl;
  }

  return 0;
}
