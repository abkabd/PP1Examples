#include <iostream>
using namespace std;
string s;
void f(int i,int j){
	if(i == j)
	{
		cout << s[i];
		return;
	}
	if(i == j-1)
	{
		cout << s[i] << s[j];
		return;
	}
	if(i<j)
	{
		cout << s[i] << '(';
		f(i+1, j-1);
		cout << ')' << s[j] ;
	}
}

int main(){
	cin>>s;
	f(0, s.size()-1);
}