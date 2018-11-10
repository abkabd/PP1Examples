#include <iostream>
using namespace std;
string s;
void f(int i,int n){
	if (i>=n){
		cout << s[i];
		return ;
	}
	cout<<s[i]<<"*";
	f(i+1, n);
}

int main(){
	cin>>s;
	f(0, s.size()-1);
}