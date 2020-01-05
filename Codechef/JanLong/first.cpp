#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;    

    vector<ll> v(n);
    for( ll i=0;i<n;i++ ){
        cin>>v[i];
    }
    while(q--){
        ll type;
        cin>>type;
        if( type == 1 ){
            ll index,value;
            cin>>index>>value;
            v[index-1] = value;
        }
        else{
            ll l,r,a,b;
            cin>>l>>r>>a>>b;
            l--,r--;
            ll ans = 0;
            for( ll i=l;i<=r;i++ ){
                ll diff = abs( a-b );
                ans += min(  v[i]%a, min( v[i]%b, v[i]%diff  ) );
            }
            cout<<ans<<"\n";
        }
    }

	return 0;
}