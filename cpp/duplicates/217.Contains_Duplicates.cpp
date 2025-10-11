// leetcode Problem 217

#include<iostream>
#include<vector>
using namespace std;

// using sorting

bool hasDuplicates(vector<int>& nums){
	int n = nums.size;
	sort(nums.begin(), nums.end());
	for(int i = 0; i < n - 1; i++){
		if(nums[i] == nums[i+1]){
			return true;
		}
	}
	return false;
}


// Runtime: 19ms | Beats: 92.81%
// Memory: 70.88 MB | 95.44%