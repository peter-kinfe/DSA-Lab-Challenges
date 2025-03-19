#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (char* left = &s[0], *right = &s[s.size() - 1]; left < right; left++, right--) {
            swap(*left, *right);
        }
    }
};
