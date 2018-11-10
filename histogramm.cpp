#include <bits/stdc++.h>

using namespace std;

int h[100100];
stack<pair<int, int> > st;
int main()
{
	int ans = 0;
	int n;
	cin>>n;
	h[0] = -1;
	for(int i=1; i<=n; i++) {
		cin>>h[i];
	}
	h[n+1] = 0;
	st.push(make_pair(h[0], 0));
	for(int i=1; i<=n+1; i++) {
		int prev_h = st.top().second;
		if(h[i] > prev_h)
		{

			st.push(make_pair(i, h[i]));

		}
		else
		{

			int cnt;
			int j;
			while(!st.empty() && h[i] <= st.top().second)
			{
				j = st.top().first;
				prev_h = st.top().second;
				cnt = (i-j) * prev_h;
				ans = max(ans, cnt);
				st.pop();
			}
			st.push(make_pair(j, h[i]));

		}
	}

	cout << ans;
}