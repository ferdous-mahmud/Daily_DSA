#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> nums = {10, 5, 2 , 3, -6, 9 , 11 };
	int target = 4;

	sort(nums.begin(), nums.end());

	for(int i = 0; i < nums.size() - 1; i++){

		int rem = target - nums[i];

		for(int j = i + 1; j < nums.size(); j++){
			if(nums[j] == rem){
				cout << nums[i] << " : " << nums[j] << endl;
			}
		} 
	}
}

// Time complexity: O(n log n)