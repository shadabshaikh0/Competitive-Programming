#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    ll n,h;
    cin>>n>>h;
    vector<ll> v(n);
    RD(v,n);	

    ll ans = 0;
    for( ll i=0;i<n;i++ ){
        if( v[i] > h )
            ans++;
        ans++;
    }
    cout<<ans<<"\n";
	return 0;
}