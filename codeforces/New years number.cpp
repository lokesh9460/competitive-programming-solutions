#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define ld long double

#define pb push_back
#define MP make_pair
#define F first
#define S second
#define ppb pop_back
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORN(i,a,b) for(int i=a;i<=b;i++)
#define REP(i,n) FOR(i,0,n)
#define REPN(i,n) FORN(i,1,n)
#define REV(i,a,b) for(int i=a;i>=b;i--)
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<lli> vlii;
typedef queue<int> qi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef vector<pii > vpii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<int, int> mii;
typedef map<pair<int, int>, int> mpiii;
typedef unordered_map<int, int> umii;
typedef unordered_map<char, int> umci;
typedef unordered_set<int> usi;
typedef map<char, int> mci;

#define itv for(auto it= v.begin(); it != v.end(); ++it )
#define bs binary_search
#define lb(v,val) lower_bound(ALL(v), val)
#define ub(v,val) upper_bound(ALL(v), val)
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define maxc(v) *max_element(ALL(v))
#define minc(v) *min_element(ALL(v))
#define isvowel(a) (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')

#define test int t; cin>>t; for(int te=1;te<=t;te++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007




void solve()
{

	int n;
	cin >> n;
	int c2021 = n % 2020;
	int c2020 = (n - c2021) / 2020 - c2021;
	if (c2020 >= 0 && 2020 * c2020 + 2021 * c2021 == n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



}


int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	fprintf(stderr, "Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

	fast;

	test{
		solve();
	}
	return 0;
}
