#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> nums = {10, 5, 2 , 3, -6, 9 , 11 };
	int target = 4;

	for(int i = 0; i < nums.size() - 1; i++){
		for(int j = i + 1; j < nums.size(); j++){
			if(nums[i] + nums[j] == target){
				cout << nums[i] << " : " << nums[j] << endl;
			}
		} 
	}
}

// Time complexity: O(n^2)