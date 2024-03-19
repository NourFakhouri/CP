#include<bits/stdc++.h>

using namespace std;
#define ll long long

const ll N = (ll) 2e5+9;
const ll oo = (ll) 1e18;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...)
#endif

void solve()
{
	ll n;
  cin >> n;
  vector <ll> a(n);
  for(ll i = 0 ; i < n ; i++)
    cin >> a[i];
  ll q;
  cin >> q;
  while(q--)
  {
    ll x;
    cin >> x;
    ll l = -1 , r = n;
    while(r - l > 1)
    {
      ll m = (l + r) / 2;
      if(a[m] <= x) l = m;
      else r = m;
    }
    cout << l << '\n'; // The index of the element (closest to right)
  }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll tt = 1;
    cin >> tt;
    while(tt--)
    {
    	//cout << "Case #" << tt << " : \n";
    	solve();
    }
    return 0;
}
