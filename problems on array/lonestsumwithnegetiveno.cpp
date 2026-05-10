/**
 *    author:  Vermax
 *    created: 09.05.2026 14:26:20
 **/
#include <bits/stdc++.h>
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
  
    
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,k;cin>>n>>k;
  vector<pair<int,int>>a(n);
  vector<int>psum(n);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    psum[i]=x;
    a[i]={x,i};
  }
  int ans=0;
  srt(a);
  for(int i=1;i<n;i++){
     psum[i]+=psum[i-1];
  }
  for(int i=0;i<n;i++){
     int target=psum[i]-k;
     int left=0;
     int right=i;
     int idx=n+1;
     while(left<right){
          int mid=left+right>>1;
          if(a[mid].ff==target){
            idx=min(idx,mid);
            right=mid-1;
          }
          if(target>a[mid].ff)left=mid+1;
          else right=mid-1;
     }
     ans=max(ans,i-idx+1);
  }
  cout<<ans<<endl;
  return 0;
}
