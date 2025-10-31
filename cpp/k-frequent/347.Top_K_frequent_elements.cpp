// leetcode Problem 347: Top K Frequent Elements

#include <iostream>
#include <map>

using namespace std;

vector<int> topKfrequent(vector<int>& nums, int k){
	vector<int> keys;

	unordered_map<int, int> N;


	// count frequency
	for(int num: nums){
		if(N.find(num) != N.end()){
			N[num] += 1;
		}
		else{
			N[num] = 1;
		}
	}

	/*
		or

	for(int num: nums){
		N[num]++;
	}
	*/

	vector<pair<int, int>> vec(N.begin(), N.end());

	// sort by value
	sort(vec.begin(), vec.end(), [](auto &a, auto &b){ return a.second > b.second; });


	// k top frequent elements
	for(int i = 0; i < k; i++){
		keys.push_back(vec[i].first);
	}

	for(int key: keys){
		cout << key << endl;
	}
	

	return keys;
}


int main(){
	vector <int> nums = {1,1,1,2,2,3};
	int k = 2;

	topKfrequent(nums, k);
	return 0;
} 


// Runtime: 0 ms | Beats: 100 %
// Memory: 18.16 MB |Beats: 28.92 %
