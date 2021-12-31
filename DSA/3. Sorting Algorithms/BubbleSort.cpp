#include<bits/stdc++.h>
using namespace std;

// BUBBLE SORT
void sort(vector<int> &arr, int n){
	bool swapped = false;
	// LARGEST ELEMENT COMES AT ITS RIGHT INDEX AT EACH PASS
	for(int i=0; i<n;i++){
		for(int j=1;j<=n-i-1;j++){
			// IF PREV ELEMENT IS GREATER THAN THE CURRENT ELEMENT THEN SWAP
			if(arr[j] < arr[j-1]){ 
				swap(arr[j], arr[j-1]);
				swapped = true;
			}
		}
		if(!swapped) break;
	}
}

int main(){
	
	vector<int> arr = {3, 1, 5, 4, 2};
	sort(arr, arr.size());
	for(int i=0;i<arr.size();i++){
		cout << arr[i] << " ";
	}

	return 0;
}