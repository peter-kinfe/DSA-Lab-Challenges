#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1Index = m - 1, nums2Index = n - 1, mergeIndex = m + n - 1; // i Initialized two pointers for the end of the two arrays and one pointer for the end of the merged array

        while (nums2Index >= 0) { // i Iterate through nums1 and nums2 from the end to the beginning until all elements from nums2 are merged into nums1
            if (nums1Index >= 0 && nums1[nums1Index] > nums2[nums2Index]) { // check if there are elements in nums1 and nums1 element is greater than nums2 element
                nums1[mergeIndex] = nums1[nums1Index]; // copy the nums1 element to the merged array
                nums1Index--; // move the nums1 pointer to the left
            } else {
                nums1[mergeIndex] = nums2[nums2Index]; // copy the nums2 element to the merged array
                nums2Index--; // move the nums2 pointer to the left
            }
            mergeIndex--; // move the merged array pointer to the left
        }
    }
};
