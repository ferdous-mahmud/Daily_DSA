// Find the n`th positive integer whose sum of digits
// is 10 starting from the input number given by user

#include<iostream>
#include <string>
using namespace std;

int main(){
	int n = 5;
	int toFind = 10;
	int current = toFind;
	int res = 0;
	int term = 0;
	
	while(res != toFind || term != n){
		current ++;
		string s = to_string(current);
		res = 0;
		for(int i = 0; i < s.size(); i++){
			res += (int)s[i] - 48;
		}

		if(res == toFind){
			term ++;
		}
	}
	cout << current;

	return 0;
}