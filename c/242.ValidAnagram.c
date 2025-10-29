// leetcode Problem 242: Valid Anagram


#include<string.h>
#include<stdio.h>
#include<stdbool.h>


int cmpfunc(const void *a, const void *b){
	return (*(char *)a - *(char *)b);
}

bool isAnagram(char *s, char *t){
	int len_s = strlen(s);
	int len_t = strlen(t);

	if (len_s != len_t){
		return false;
	}

	qsort(s, len_s, sizeof(char), cmpfunc);
	qsort(t, len_t, sizeof(char), cmpfunc);

	for(int i=0; i < len_s; i++){
		if(s[i] != t[i])
			return false;
	}
	return true;
}


int main(void){
	char s[] = "cat";
	char t[] = "ace";
	isAnagram(s, t);

	return 0;
}


// Runtime: 22ms | Beat 18.91%
// Memory: 8.52 MB | Beats 14.24 %