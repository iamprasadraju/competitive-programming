# leetcode Problem 1 : TwoSum

nums = [2, 7, 11, 15]
target = 9

# output: [0, 1]

def twosum(nums, target):
	seen = {}
    for i, num in enumerate(nums):
        diff = target - num
        if diff in seen:
            return [seen[diff], i]
        seen[num] = i

# Time Complexity: O(n)
# Runtime: 3 ms | Beats 99.94% -> O(n^2)
# Memory: 19.34 MB| Beats 10.96% 

