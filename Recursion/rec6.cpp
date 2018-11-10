#include <iostream>
using namespace std;
void f(int n){
	if(n == 0) return;
	int x;
	cin>>x;
	f(n-1);
	cout << x << ' ';
	return;
}


int main(){
	int n;
	cin>>n;
	f(n);
}