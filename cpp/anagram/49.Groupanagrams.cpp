// leetcode problem 49: Group Anagrams 


// input: strs = ["eat","tea","tan","ate","nat","bat"]
// output: [["bat"],["nat","tan"],["ate","eat","tea"]]

#include <iostream>
#include <map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs){
	unordered_map<string, vector<string>> M; 
	for(string str: strs){
		string key = str;
		sort(key.begin(), key.end());
		M[key].push_back(str);

	}

	vector<vector<string>> result;
	for(auto& [key, value]: M){
		result.push_back(value);
	}

	return result;
}



int main(){
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	groupAnagrams(strs);

	return 0;
}

// Runtime: 15 ms | Beats 71.34 %
// Memory : 25.11 MB | Beats 60.98 %