#include <iostream>

using namespace std;

int n;

bool f(int sum)
{
	if(sum == n) return true;
	if(sum > n) return false;
	if(sum < n)
	{
		return f(sum + 3) || f(sum + 5);
	}
}

int main()
{
	cin>>n;
	if(f(1) == true) cout << "YES";
	else cout << "NO";
	return 0;
}