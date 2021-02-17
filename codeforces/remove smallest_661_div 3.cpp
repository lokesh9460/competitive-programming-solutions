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
		vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		bool ok = true;
		for (int i = 1; i < n; i++)
		{
			ok &= (a[i] - a[i - 1] <= 1);
		}


		if (ok)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}
