#include <iostream>

using namespace std;

string s;
int maxi = 0;
char f(int i, int n)
{
	if(i>n) return;
	if(s[i] > maxi) maxi = s[i];
	f(i+1, n);
}

int main()
{
	cin>>s;
	f(0, s.size()-1);
	cout << (char)maxi;
	return 0;
}