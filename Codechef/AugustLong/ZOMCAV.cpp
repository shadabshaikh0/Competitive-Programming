#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

template <typename Map>
bool check (Map const &l, Map const &r) {
    return l.size() == r.size() && equal(l.begin(), l.end(), r.begin());
}

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> c(n),d(n+1,0),ans(n);
		RD(c,n);	
        map<ll,ll> h,f;
        for( ll i=0;i<n;i++ ){
            ll x;
            cin>>x;
            h[x]++;
        }

        for( ll i=0;i<n;i++ ){
            ll left  = max(0LL, i-c[i] );
            ll right  = min(n, i+c[i]+1 );
            d[left] += 1;
            d[right] -= 1;
        }

        ans[0] = d[0];
        for( ll i=1;i<n;i++ ){
            ans[i] = d[i] + ans[i-1];
        }

        for( ll i=0;i<n;i++ ){
            f[ans[i]]++;
        }

        if( check(h,f) )
            cout<<"YES\n";
        else
            cout<<"NO\n";

	}
	return 0;
}