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
#define REPN(i,n) FORN(i,0,n)
#define REV(i,a,b) for(int i=a;i>b;i--)
#define REVN(i,a,b) for(int i=a;i>=b;i--)
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<lli> vlii;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef set<int> si;
typedef vector<vvc> vvvc;
typedef vector<pii > vpii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef unordered_map<char, int> umci;
typedef unordered_set<string> uss;
typedef map<char, int> mci;
#include<memory>

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
    string s, t;
    cin >> s >> t;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '1' && t[i] == '0') || (s[i] == '0' && t[i] == '1'))
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << endl;

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
