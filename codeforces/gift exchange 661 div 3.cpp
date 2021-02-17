#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>a(n), b(n);
		for (auto &it : a) cin >> it;
		for (auto &it : b) cin >> it;
		int mna = *min_element(a.begin(), a.end());
		int mnb = *min_element(b.begin(), b.end());
		ll ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans += max(a[i] - mna, b[i] - mnb);
		}
		cout << ans << endl;

	}
	return 0;
}
