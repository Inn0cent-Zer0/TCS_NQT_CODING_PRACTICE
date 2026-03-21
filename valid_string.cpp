//Problem Statement

//Given a string S consisting only of the characters '*' and '#'. The length of the string can be variable.

//The task is to find the minimum number of '*' or '#' to make it a valid string.

//A string is considered valid if:

/* The number of '*' and '#' are equal.
The '*' and '#' can be at any position in the string.
Note:



The output will be a positive, negative, or zero integer based on the counts:
If (* count > # count) → output positive integer
If (# count > * count) → output negative integer
If (* count = # count) → output 0 */
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int starCount = 0;
    int hashCount = 0;
    size_t n = s.length(); // Cache the string length

    // Iterate using index-based loop for potentially better performance.
    for (size_t i = 0; i < n; ++i) {
        if (s[i] == '*') {
            starCount++;
        } else if (s[i] == '#') {
            hashCount++;
        }
    }

    int result = starCount - hashCount;
    cout << result << endl;

    return 0;
}
x`

