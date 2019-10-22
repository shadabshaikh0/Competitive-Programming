#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans = 0;
        ll ctemp = c/2;
        if( b < c ){
            ll minus = min(ctemp,b);
            ans += (minus*3);
            b -= minus;
        }
        else{
            ans += ctemp*3;
            b -= ctemp;
        }
        ll btemp = b/2;
        if( a< b ){
            ll minus = min(btemp,a);
            ans += (minus*3);
        }
        else{
            ans += btemp*3;
        }

        cout<<ans<<"\n";
	}
	return 0;
}