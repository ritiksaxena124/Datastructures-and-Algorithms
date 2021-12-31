#include<bits/stdc++.h>
using namespace std;

// SELECTION SORT
void sort(vector<int> &arr)
{
	// SMALLEST ELEMENT COMES AT ITS RIGHT INDEX AT EACH PASS
	for(int i=0;i<arr.size()-1;i++){
		for(int j=i+1;j<arr.size();j++){
			// COMPARE WITH FIRST ELEMENT
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
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