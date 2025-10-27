#!/usr/bin/env python3

# leetcode Problem 49: Group Anagrams

strs = ["eat","tea","tan","ate","nat","bat"]


# output: [["bat"],["nat","tan"],["ate","eat","tea"]]


def groupAnagrams(strs):
	seen = {}
	for str in strs:
		sorted_str = "".join(sorted(str)) 
		if sorted_str in seen:
			seen[sorted_str].append(str)
		else:
			seen[sorted_str] = [str]
	
	return [item for item in seen.values()]


print(groupAnagrams(strs))

# Runtime: 7ms | 98.17 %
# Memory: 20.46 MB | 96.38 %