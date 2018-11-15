#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
	int n, x, k;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>>k;
	
	if(find(v.begin(), v.end(), k) == v.end()) cout << "No";
	else cout << "Yes";

	return 0;
}