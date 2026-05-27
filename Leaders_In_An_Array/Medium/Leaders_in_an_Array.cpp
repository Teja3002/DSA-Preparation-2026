class Solution:
    def leaders(self, nums):
        ans=[]
        leader=nums[-1]
        ans.append(nums[-1])
        for i in range(len(nums)-2,-1,-1):
            if nums[i]>leader:
                ans.append(nums[i])
                leader=nums[i]
        ans.reverse()
        return ans