#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<pair<int, int> > v;

bool comp(pair<int, int> a, pair<int, int> b) {
	if(a.first < b.first) return true;
	if(a.first == b.first && a.second < b.second) return true;
	return false;
}

int main()
{
	int n, x, y;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}
	cout << endl;
	sort(v.begin(), v.end(), comp);

	for(int i=0; i<v.size(); i++)
	{
		pair<int, int> p = v[i];
		cout << p.first << ' ' << p.second << endl;
	}

	return 0;
}