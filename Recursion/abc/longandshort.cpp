#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;

int main()
{
	string s;
	int n, minlen=100000, maxlen=0, kolmin = 0, kolmax = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		mp[s]++;
		minlen = min(minlen, (int)s.length());
		maxlen = max(maxlen, (int)s.length());
	}

	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it)
	{
		if(minlen == it->first.size())
		{
			kolmin = max(kolmin, it->second);
		}
		if(maxlen == it->first.size())
		{
			kolmax = max(kolmax, it->second);
		}
	}

	cout << kolmin << ' ' << kolmax << "\n";
	if(kolmin >= kolmax) cout << "My type!";
	else cout << "Not my type";

	return 0;
}