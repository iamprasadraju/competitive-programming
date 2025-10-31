// leetcode Problem 1: Two sums


#include<iostream>
#include<map>
using namespace std;



vector<int> twosum(vector<int>& nums, int target){

	unordered_map<int, int> m;
	int i = 0;
	for(int num: nums){
		auto diff = target - num;
		if(m.find(diff) != m.end()){
			cout << "[" << m[diff] << "," << i << "]" << endl;
			return {m[diff], i};
		}
		else{
			m[num] = i;
			++i;
		}
		
	}
	return {};
}

int main(){
	vector<int> nums = {2,7,11,15};
	int target = 9;
	
	twosum(nums, target);

	return 0;
}


// Runtime: 0 ms | Beats: 100.00%
// memory: 14.88 MB | Beats 36.08%