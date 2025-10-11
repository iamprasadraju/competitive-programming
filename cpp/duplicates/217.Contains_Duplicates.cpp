// leetcode Problem 217

#include<iostream>
#include<vector>
#include<map>
using namespace std;

// using Map


bool hasDuplicates(vector<int>& nums){
	map<int, int> s;
	for(int num : nums){
		if(s.find(num) != s.end()){
			return true;
		}
		s[num] = 1;
	}
	return false;
}


// Runtime: 110ms | Beats: 6.75%
// Memory: 92.22 MB | 27.12 %