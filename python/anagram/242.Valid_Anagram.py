# leercode Problem 242 : Valid Anagram


# Using Hashmap
def isAnagram(s, t):
	if len(s) != len(t):
        return False
    freq = {}
    for x, y in zip(s, t):
        freq[x] = freq.get(x, 0) + 1
        freq[y] = freq.get(y, 0) - 1
        
    for count in freq.values():
        if count != 0:
            return False
    return True


# Runtime: 13ms | Beats 47.96 %
# Memory: 17.66 MB | Beats 97.44 %