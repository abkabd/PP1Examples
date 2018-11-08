#include <bits/stdc++.h>

using namespace std;

map<string, string> mp;

int main() {
	int n, m, k;
	string country, city;

	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>country;
		cin>>k;
		for(int j=0; j<k; j++) {
			cin>>city;
			mp[city] = country;
		}
	}

	cin>>m;
	for(int i=0; i<m; i++) {
		cin>>city;
		if(mp[city] == "")
		{
			cout << "Unknown\n";
		}
		else cout << mp[city] << endl;
	}
}