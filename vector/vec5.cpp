#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
	int n, x, pos;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>pos;

	v.erase(v.begin() + pos);

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << ' ';
	}

	return 0;
}