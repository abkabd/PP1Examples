#include <bits/stdc++.h>

using namespace std;

vector<int> v;

bool isPrime(int n)
{
	if(n < 2) return false;

	for(int i=2; i*i<=n; i++)
	{
		if(n % i == 0) return false;
	}

	return true;
}

int main()
{
	int n, x, k, cnt = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>k;

	for(int i=0; i<v.size(); i++) {
		if(v[i] > k && isPrime(v[i]) == true) cnt++;
	}

	cout << cnt;

	return 0;
}