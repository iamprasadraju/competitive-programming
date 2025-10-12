# leercode Problem 242 : Valid Anagram


# Using ord() and limited sized list
def isAnagram(s, t):
	if len(s) != len(t):
        return False
    freq = [0] * 26
    for a, b in zip(s, t):
    	freq[ord(a) - ord('a')] += 1
       	freq[ord(b) - ord('a')] -= 1
   	return all(c == 0 for c in freq)

# Runtime: 11ms | Beats 72.05 %
# Memory: 17.81 MB | Beats 64.20 %