// Triplets google interview problem
// Problem:
// 		Given an array containing N integers, and an number S
// 		denoting a target sum.
// 		Find all distinct integers that can add up to form target
// 		sum. The numbers in each triplet should be ordered in
// 		ascending order, and triplets should be ordered too.
// 		Return empty array if no such triplet exists.
// Input:
// 		array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 15]
// 		target = 18
// Output:
// 		[[1, 2, 15],
// 		[3, 7, 8],
// 		[4, 6, 8],
// 		[5, 6, 7]]

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int target = 18;
	int sum = 0;

	sort(v.begin(), v.end()); // O(nlogN)

	for (int i = 0; i < v.size() - 2; ++i)
	{
		for (int j = i + 1; j < v.size() - 1; ++j)
		{
			for (int k = j + 1; k < v.size(); ++k)
			{
				sum = v[i] + v[j] + v[k];
				if(sum == target)
					cout << v[i] << ", " << v[j] << ", " << v[k] << endl;
			}
		}
	}

	return 0;
}
