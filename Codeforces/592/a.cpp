#include<bits/stdc++.h>
#define ll long long int 
#define ld long double
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
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        ll n1 = ceil(  (ld)a/(ld)c);
        ll n2 = ceil(  (ld)b/(ld)d);
        if( n1 + n2 <= k ){
            cout<<n1<<" "<<n2<<"\n";
        }
        else{
            cout<<"-1\n";
        }

	}
	return 0;
}