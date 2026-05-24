class Solution:
    def findMaxConsecutiveOnes(self, nums):
        minimum=0
        maximum=0

        for i in range(len(nums)):
            if nums[i]==1:
                minimum=minimum+1
                maximum=max(maximum,minimum)
            else:
                minimum=0
        return maximum