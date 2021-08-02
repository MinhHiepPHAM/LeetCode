class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ret = []
        for i in range(len(nums)):
            second = target - nums[i]
            for j in range(i+1, len(nums)):
                if(second == nums[j]):
                    ret.append(i)
                    ret.append(j) 
                    return ret
