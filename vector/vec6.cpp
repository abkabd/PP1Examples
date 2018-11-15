#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
	int n, x, a, b;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>a>>b;

	v.erase(v.begin() + a, v.begin() + b + 1);

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << ' ';
	}

	return 0;
}