#include<bits/stdc++.h>
using namespace std;

int main(void){

	int ar[6] =  {1, 2, 3, 4, 5, 6};
	int arr[6];

	copy_n(ar, 6, arr);

	vector<int> vec1 = {1, 2, 3, 4, 5, 6};
	vector<int> vec2 = {6, 5, 4, 3, 2, 1};

	swap(vec1, vec2);
	// vec1.clear();

	for(auto i: vec1){
		cout << i << endl;
	}

	// Vector
	vector <pair <string, int>> pvec;
	pvec.push_back(make_pair("Ferdous", 23));
	pvec.emplace_back("Akash", 22);

	cout << pvec[0].first << " " << pvec[0].second << endl;
	cout << pvec[1].first << " " << pvec[1].second << endl;



	return 0;
}