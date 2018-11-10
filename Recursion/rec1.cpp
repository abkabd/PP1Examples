#include <iostream>

using namespace std;

string s;

bool f(int i, int j)
{
	if(i<=j){
		if(s[i] != s[j]) return false;
		return f(i+1, j-1);
	}
	else
	{
		return true;
	}
}

int main()
{
	cin>>s;
	if(f(0, s.size()-1) == true) cout <<"Yes";
	else cout << "No";
	return 0;
}