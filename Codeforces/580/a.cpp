#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n;
    cin>>n;
    vector<ll> v(n);
    RD(v,n);
    ll ans = 0;
    ll cn=0,cz=0,cp=0;	
    for( ll i=0;i<n;i++ ){
        if( v[i] < 0 ){
            cn++;
            ans += abs(v[i]) -1;                 
        }
        else if( v[i] == 0 ){
            cz++;
        }
        else{
            ans += v[i]-1;
        }
    }

    if( cn & 1 ){
        if( cz > 0 ){
            ans++;
            ans += (cz-1);
        }
        else{
            ans+=2;
        }
    }
    else{
        ans += cz;
    }
    cout<<ans<<"\n";
	return 0;
}