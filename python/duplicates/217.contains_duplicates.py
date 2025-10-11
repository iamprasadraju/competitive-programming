# leetcode Problem 217

# using set

def containsDuplicates(nums: List(int)) -> bool:
	return len(set(nums)) != len(nums)

# Runtime: 5ms | Beats 95.42%
# Memory: 31.38 MB | Beats 90.82%