# leetcode Problem 217

# using set

def containsDuplicates(nums: List(int)) -> bool:
	s = set()
	for num in nums:
		if num in s:
			return True
		s.add(num)
	return False


# Runtime: 19ms | Beats 32.59%
# Memory: 31.70 MB | Beats 29.59%