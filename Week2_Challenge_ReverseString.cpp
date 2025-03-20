#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (char* left_pointer = &s[0], *right_pointer = &s[s.size() - 1]; left_pointer < right_pointer; left_pointer++, right_pointer--) { //using for loop i initialized left pointer to the first element of the vector and right pointer to the last element of the vector
            swap(*left_pointer, *right_pointer);//then i used the swap function to swap the elements of the left and right pointers
        }
    }
};
//the time complexity is as each swap takes O(1) time, then the total time complexity is O(n), and 
//the space complexity is O(1) as there are only two pointers used in the function
