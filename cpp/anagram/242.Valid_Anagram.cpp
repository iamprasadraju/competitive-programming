// leercode Problem 242 : Valid Anagram

#include<iostream>
using namespace std;

// Using unordered_map

bool isAnagram(string s, string t){
	if(s.size() != t.size()){
		return false;
	}
	
	map<char, int> freqS;
	map<char, int> freqT;

	for(int x: s){
		freqS[x]++;
	}
	for(int y: t){
		freqT[y]++;
	}

	return freqS == freqT;

}

int main(){
	isAnagram("anagram", "nagaram");
	return 0;
}


// Runtime: 2 ms | Beats 56.22 %
// Memory: 9.92 | Beats: 56.32 %