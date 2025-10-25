# leetcode Problem 1 : TwoSum

nums = [2, 7, 11, 15]
target = 9

# output: [0, 1]

# It takes O(n^2) of time complexity
def twosum(nums, target):
	size = len(nums)
	for i in range(size):
		for j in range(i+1, size):
			if nums[i] + nums[j] == target:
				print([i , j])	# Check
				return [i, j]


twosum(nums, target)


# Runtime: 1670ms | Beats 29.94%
# Memory: 18.61 MB| Beats 65.96% 
