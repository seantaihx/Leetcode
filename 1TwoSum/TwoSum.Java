class Solution {
    """
    My first approach for this is using brute force 
    which is pairing every single pairs

    Complexity: O(n^2), and O(1) extra space
    """
    public int[] twoSumBruteForce(int[] nums, int target) {
        for (int i=0; i<nums.length; i++) {
            for (int j=i+1; j<nums.length; j++) {
                if (nums[i]+nums[j]== target) {
                    return new int[] {i, j};
                } else continue;
            }
        }
        return new int[] {0};
    }
}