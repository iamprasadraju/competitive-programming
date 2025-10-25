# leetcode Problem 1 : TwoSum

nums = [2, 7, 11, 15]
target = 9

# output: [0, 1]

def twosum(nums, target):
	size = len(nums)
    for i in range(size): 
        if (target - nums[i]) in nums[i+1:]:
            return [i, i + 1 + nums[i+1:].index(target - nums[i])]


# Runtime: 314 ms | Beats 33.94% -> O(n^2)
# Memory: 18.34 MB| Beats 87.96% 
