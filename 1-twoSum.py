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
    	i = 0
    	for value in nums:
    		maps[value] = i
    		i = i + 1
    	for key in maps:
    	 	rest_val = target - key
    	 	if nums.__contains__(rest_val):
    	 		if maps[key] != maps[rest_val]:
	    	 		result.append(maps[key] + 1)
	    	 		result.append(maps[rest_val] + 1)
	    			return result
	    		else:
	    			if nums.count()
nums = [0, 7 ,11, 0]
target = 0 
s1 = Solution()
print s1.twoSum(nums, target) 