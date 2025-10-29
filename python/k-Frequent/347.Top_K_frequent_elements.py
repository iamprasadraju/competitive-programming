#!/usr/bin/env python3

# leetcode Problem 347: Top K Frequent Elements

nums = [4,1,-1,2,-1,2,3]
k = 2

# Output: [1,2]

def topKfrequent(nums, k):
	seen = {}
	for num in nums:
		if num not in seen:
			seen[num] = 1
		else:
			seen[num] += 1 

	# return heapq.nlargest(k, seen, key=seen.get)
	return [item for item, _ in sorted(seen.items(), key = lambda x: x[1], reverse = True)][:k]

print(topKfrequent(nums, k))


# Runtime: 3 ms | Beats: 90.56 %
# Memory:  21.33 MB | Beats: 39.69 %