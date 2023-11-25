#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x=nums.size();
        // Iterate through the array to place each number in its correct position
        for(int i = 0; i < x; ++i) {
            // Check if the current number is positive and within the valid range
            // Also, make sure it's not already in its correct position to avoid infinite loops
            if(nums[i] > 0 && nums[i] <= x && nums[i] != nums[nums[i] - 1]) {
                // Swap the numbers to put them in their correct positions
                swap(nums[i], nums[nums[i] - 1]);
                // Decrement the loop counter to reevaluate the current index after the swap
                --i;
            }
        }

        // Iterate through the array again to find the first missing positive integer
        for(int i = 0; i < x; ++i) {
            // If the current number is not in its correct position, return the missing positive integer
            if(nums[i] != (i + 1)) {
                return i + 1;
            }
        }

        // If all positive integers are in their correct positions, return the next positive integer
        return x + 1;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {3, 4, -1, 1};
    int result = solution.firstMissingPositive(nums);
    
    // Print the result
    cout << "The first missing positive integer is: " << result << endl;

    return 0;
}
