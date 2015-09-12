class Solution:
	# @param {string} s
    # @return {integer}
    def lengthOfLongestSubstring(self, s):
 		l = []
 		for i in range(256):
  			l.append(-1)
		index = -1
		max = 0
		count  = 0
		for x in s:
			if l[ord(x)] - index > 0:
				index = l[ord(x)]
			if count - index > max :
				max = count - index
			l[ord(x)] = count
			count += 1
		return max