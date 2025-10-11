# leetcode Problem 217

# using set

def containsDuplicates(nums: List(int)) -> bool:
	return len(nums) != len(set(nums))


# Runtime: 12ms | Beats 68.52%
# Memory: 31.60 MB | Beats 53.82%