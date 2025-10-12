# leercode Problem 242 : Valid Anagram


# Using sorting
def isAnagram(s, t):
	return sorted(s) == sorted(t)


# Runtime: 17ms | Beats 20.86 %
# Memory: 18.54 MB | Beats 11.97 %