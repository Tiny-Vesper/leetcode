'''class Solution:
    def twoSum(self, nums, target):
    	for key in nums:
    	 	rest_val = target - key
    	 	if nums.__contains__(rest_val):
    	 		print nums[key] + 1 
nums = {2:0, 7:1, 11:2, 15:3}  
target = 9 
s1 = Solution()
s1.twoSum(nums, target) 
'''
class Solution:
    # @param {integer[]} nums
    # @param {integer} target
    # @return {integer[]}
    def twoSum(self, nums, target):
    	result=[]
    	maps = {}
    	maps[nums[0]] = 1;
    	i = 1
    	while (i < len(nums)):
    		if ( (target-nums[i]) in maps):
    			result.append(maps[target-nums[i]])
    			result.append(i+1)
    			return result
    		else:
    			maps[nums[i]] = i+1
    		i = i+1

nums = [0, 7 ,11, 0]
target = 0 
s1 = Solution()
print s1.twoSum(nums, target) 