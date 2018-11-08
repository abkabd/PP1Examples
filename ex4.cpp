#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;

int main() {
	string s;
	while(cin>>s)
	{
		cout << mp[s] << ' ';
		mp[s]++;
	}
}