class Solution:
    def rearrangeArray(self, nums):
        n=len(nums)

        ans=[0]*n

        p,ng=0,1

        for i in range(n):
            if nums[i]<0:
                ans[ng]=nums[i]
                ng+=2
            else:
                ans[p]=nums[i]