/**
 *    author:  Vermax
 *    created: 10.05.2026 18:54:01
 **/
#include <bits/stdc++.h>
#include "Templates/debu.cpp"
using namespace std;
#define bset(x) __builtin_popcount(x)
#define bsetl(x) __builtin_popcountll(x)
#define pos(x) __builtin_ctz(x)
#define pb push_back
#define pob pop_back
#define mp make_pair
#define scan(v)     \
  for (auto &i : v) \
  cin >> i
#define srt(v) sort(v.begin(), v.end())
#define ma(v) *max_element(v.begin(), v.end())
#define mi(v) *min_element(v.begin(), v.end())
#define srtg(v) sort(v.begin(), v.end(), greater<>())
#define vi(i, n) for (ll i = 0; i < n; i++)
#define vii(i, n) for (ll i = 1; i < n; i++)
#define viii(i, n) for (ll i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define suma(a) accumulate(all(a), 0LL)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define lcm(a, b) (a / __gcd(a, b) * b)
#define print(v)                    \
  for (ll i = 0; i < v.size(); i++) \
    cout << v[i] << ' ';            \
  cout << endl;
#define ff first
#define ss second
#define int long long
#define sz(x) (int)(x.size())
#define endl '\n'
using ll = long long;
#define PI 3.141592653589793238462643383279502884
#define inf 0x3f3f3f3f
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

void Solve()
{ 
  int n,k;cin>>n>>k;
   vector<int>a[n];
   vector<int>rem;
   for(int i=0;i<n;i++){
       int c;cin>>c;
       rem.pb(c);
       for(int j=0;j<c;j++){
        int x;cin>>x;
        a[i].pb(x);
       }
   }
   vector<int>c;
   for(int i=0;i<n;i++){
    int y;cin>>y;
    c.pb(y);
   }
   int id=0;
   int tp=0;
   int kk=k;
   while(true){
      tp+=c[id]*rem[id];
      
      if(tp>=k)break;
      kk-=c[id]*rem[id];
      id++;
   }
   
   cout<<a[id][(kk-1)%rem[id]];
    
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll _ = 1;
  cin >> _;
  while (_--)
  {
    Solve();
  }

  return 0;
}
