#include<bits/stdc++.h>
#define ll long long int 
#define ld long double 
#define forr(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define ford(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n);
		RD(v,n);	
        ll sum = 0;
        sum = accumulate(v.begin(),v.end(),sum);
        ll ans  = ceil( (ld)sum/ (ld)n );
        cout<<ans<<"\n";
	}
	return 0;
}