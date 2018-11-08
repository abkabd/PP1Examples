#include <bits/stdc++.h>

using namespace std;

string s;

void rec1(int i)
{
	if(i == s.size()) return;
	cout << s[i] << ' ';
	rec1(i+1);
}

void rec2(int n)
{
	if(n == 0) return;
	rec2(n/10);
	cout << n%10 << ' ';
}
int main() {
	int x;
	cin>>x;
	rec2(x);
}