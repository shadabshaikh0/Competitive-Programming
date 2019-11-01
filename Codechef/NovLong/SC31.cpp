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
		ll n;
		cin>>n;
		vector<string> v(n);
		RD(v,n);
		ll i,j,ans = 0;
		FOR(i,0,9){
			ll count = 0;
			FOR(j,0,n-1 ){
				if( v[j][i] == '1' )
					count++;
			}
			if( count & 1 )
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}