#include<bits/stdc++.h>
using namespace std;

// INSERTION SORT
void sort(vector<int> &arr)
{
	for(int i = 0; i < arr.size() - 1; i++){
		for(int j = i+1; j > 0; j--){
			if(arr[j] < arr[j-1]) swap(arr[j], arr[j-1]);
			else break;
		}
	}
}

int main()
{
	vector<int> arr = {5, 4, 3, 2, 1};
	sort(arr);
	for(int i=0;i<arr.size();i++){
		cout << arr[i] << " ";
	}

	return 0;
}