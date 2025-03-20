#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
//The time complexity of the function is O(n) as we iterate through the string twice, once to count the characters and once to find the first unique character.

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> char_count; //create a hash map to store the count of each character in the string
        for (char c : s) { //iterate through the string
            char_count[c]++; //increment the count of the character in the hash map
        }

        for (int i = 0; i < s.size(); i++) { //iterate through the string
            if (char_count[s[i]] == 1) { //if the count of the character is 1
                return i; //return the index of the character
            }
        }

        return -1; //if no unique character is found, return -1
    }
};