// leetcode Problem 217

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// using unordered_map

bool hasDuplicates(vector<int>& nums){
	unordered_map<int, int> s;
	for(int num : nums){
		if(s.find(num) != s.end()){
			return true;
		}
		s[nums] = 1;
	}
	return false;
}


// Runtime: 48ms | Beats: 62.69%
// Memory: 90.95 MB | 30.90%