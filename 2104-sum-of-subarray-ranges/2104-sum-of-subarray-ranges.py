class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        n=len(nums)
        sum =0
        for i in range(n):
            s=nums[i]
            l=nums[i]
            for i in range(i+1,n):
                s=min(s,nums[i])
                l=max(l,nums[i])
                sum += l-s
        return sum