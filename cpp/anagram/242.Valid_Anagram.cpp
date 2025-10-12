// leercode Problem 242 : Valid Anagram

#include<iostream>
#include<unordered_map>

using namespace std;

// Using unordered_map and single loop

bool isAnagram(string s, string t){
	if(s.size() != t.size()){
		return false;
	}
	
	unordered_map<char, int> freq;

	for(int i  = 0; i < s.size(); i++){
		freq[s[i]]++;
		freq[t[i]]--;
	}

	for(auto& [ch, count] : freq){
		if(count != 0){
			return false;
		}
	}
	return true;

}

int main(){
	isAnagram("anagram", "nagaram");
	return 0;
}


// Runtime: 1 ms | Beats 60.51 %
// Memory: 9.92 | Beats: 56.32 %