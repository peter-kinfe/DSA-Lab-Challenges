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
            return {};
        }
    };
