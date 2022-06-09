#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> nums = {10, 5, 2 , 3, -6, 9 , 11 };
	int target = 4;
	unordered_set<int> s;

	for(int i = 0; i < nums.size() - 1; i++){
		int rem = target - nums[i];

		if(s.find(rem) != s.end()){
			cout << nums[i] << " : " << rem << endl;
		}
		s.insert(nums[i]);
	}
}

// Time complexity: O(N)