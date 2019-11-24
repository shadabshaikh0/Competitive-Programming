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
		ll n,x,a,b;
        cin>>n>>x>>a>>b;
        if( a > b )
            swap(a,b);

        ll temp  = max(a-x,1LL);
        x -= a-temp;
        a = temp;
    
        b = min( n,b+x );
        cout<<b-a<<"\n";
	}
	return 0;
}