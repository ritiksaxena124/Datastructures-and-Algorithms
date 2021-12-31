#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr){
	int i = 0;
	int n = arr.size();

	while(i < n){
		if(i == arr[i] - 1) i++;
		// SWAPPING ELEMENT AT WRONG INDEX WITH ITS CORRECT POSITION ELEMENT
		else swap(arr[i],arr[arr[i] - 1]);
	}
}

int main(){
	vector<int> arr = {3, 5, 2, 1, 4};
	sort(arr);
	for(int i=0; i< arr.size();i++){
		cout << arr[i] << " ";
	}
}