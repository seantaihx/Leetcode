class Solution:
    """
    My first approach for this is using brute force 
    which is pairing every single pairs

    Complexity: O(n^2), and O(1) extra space
    """
    def twoSumBruteForce(self, nums: list[int], target: int) -> list[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return[i, j]
                else:
                    continue

        return 0

    