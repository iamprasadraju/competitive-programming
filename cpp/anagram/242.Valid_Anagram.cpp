// leercode Problem 242 : Valid Anagram

#include<iostream>
using namespace std;

// Using sorting 

bool isAnagram(string s, string t){
	if(s.size() != t.size()){
		return false;
	}
	
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	return s == t;

}

int main(){
	isAnagram("anagram", "nagaram");
	return 0;
}


// Runtime: 5 ms | Beats 29.44 %
// Memory: 9.48 | Beats 98.88 %