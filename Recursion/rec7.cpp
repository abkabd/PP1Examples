#include <iostream>
using namespace std;
int a[10010];

bool f(int i, int x, int n){
	if(i > n) return false;
	if(x == a[i]) return true;
	return f(i+1, x, n);

}

int main(){
	int n, x;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cin>>x;
	if(f(0, x, n) == true) cout << "Yes";
	else cout << "No";
}