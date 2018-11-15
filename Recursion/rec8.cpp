#include <bits/stdc++.h>

using namespace std;
int a[1000], n;

bool find(int pos, int k)
{
	if(pos > n) {return false;}

	if(a[pos] == k) return true;
	return find(pos+1, k);
}

int main()
{
	int k;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cin>>k;

	if(find(0, k) == true) cout << "Yes";
	else cout << "No";
	
	return 0;
}