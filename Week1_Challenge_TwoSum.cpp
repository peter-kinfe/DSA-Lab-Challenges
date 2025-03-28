// brute force solution this is the first approach, the time complexity is O(n^2) and the space complexity is O(1)

// vector<int> twoSum(vector<int>& nums, int target) { //function to find the indices of the two numbers that add up to the target
//     for (int i = 0; i < nums.size(); i++) {       //outer loop
//         for (int j = i + 1; j < nums.size(); j++) { //inner loop
//             if (nums[i] + nums[j] == target) {
//                 return {i, j};  //return indices
//             }
//         }
//     }
//     return {};// return empty vector if there is no solution
// }


// this is the second approach which is the hash table approach which is more efficient than the brute force one and the time and space complexity is O(n)
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> map;  // it is a hash table that stores key-value pairs, which is used for mapping the numbers to their index
             for (int i = 0; i < nums.size(); i++) {
                int current = nums[i]; // holds the value of the current number
                //target = x(some unknown value to be added to our current value to found the target) + cur(current value)
                //so, x = target - cur
                int x = target - current;
    
                if (map.find(x) != map.end()) {
                    return { map[x], i }; //This returns the two indices of the numbers that sum up to target
                }
    
                map[current] = i; //store the current value and its index in the map
            }
            return {}; //return empty if there is no solution
        }
    };
