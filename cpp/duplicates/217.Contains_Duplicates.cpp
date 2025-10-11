// leetcode Problem 217

#include<iostream>
#include<vector>
#include<set>
using namespace std;

// using set


bool hasDuplicates(vector<int>& nums){
	set<int> s;
	for(int num : nums){
		if(s.find(num) != s.end()){
			return true;
		}
		s.insert(num);
	}
	return false;
}


// Runtime: 100ms | Beats: 11.95%
// Memory: 92.29 MB | 27.12 %