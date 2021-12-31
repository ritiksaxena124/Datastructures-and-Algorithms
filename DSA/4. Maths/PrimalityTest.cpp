#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if(n == 0 or n == 1) return false;

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	int n = 20;

	if(isPrime(n))
		cout << "Number is Prime";
	else cout << "Numer is Not Prime";
}