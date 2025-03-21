#include <iostream>
#include <string>


class Solution {
public:
    int longestPalindrome(std::string s) {
        int charCount[128] = {}; // I have created an array to hold the count of each character. 128 covers all ASCII characters which include standard English letters, digits, and punctuation.
    
        for (char c : s) { // Count the occurrence of each character in the string.
            charCount[c]++;
        }
    
        int maxLength = 0; // Initialize the length of the longest palindrome to 0.

        for (int count : charCount) { // Iterate through the character counts.
            // Add the largest even number that is less than or equal to the current count.
            // This is because even counts can be mirrored on both sides of a palindrome.
            maxLength += count - (count % 2);
    
            // If the current maxLength is even and there's an odd count of characters,
            // we can add one of those characters to the center of the palindrome.
            // Only one center character is allowed for a palindrome, hence the check (maxLength % 2 == 0).
            if (maxLength % 2 == 0 && count % 2 == 1) {
                maxLength++;
            }
        }
    
        return maxLength; // Return the length of the longest palindrome that can be created
    }
};