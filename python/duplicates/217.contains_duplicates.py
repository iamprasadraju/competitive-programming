# leetcode Problem 217

# using dict (hashmap)

def containsDuplicates(nums: List(int)) -> bool:
	s = {}
	for num in nums:
		if num in s:
			return True
		s[num] == 1
	return False


# Runtime: 17ms | Beats 38.42%
# Memory: 35.10 MB | Beats 10.01%