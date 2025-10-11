// leetcode Problem 217

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// using set


bool hasDuplicates(vector<int>& nums){
	unordered_setset<int> s;
	for(int num : nums){
		if(s.find(num) != s.end()){
			return true;
		}
		s.insert(num);
	}
	return false;
}


// Runtime: 51ms | Beats: 55.21%
// Memory: 90.73 MB | 59.43%