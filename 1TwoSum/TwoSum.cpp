class Solution {
public:
    """
    My first approach for this is using brute force 
    which is pairing every single pairs

    Complexity: O(n^2), and O(1) extra space
    """
    vector<int> twoSumBruteForce(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
                else {
                    continue;
                }
            }
        }
        return {0};
    }
};