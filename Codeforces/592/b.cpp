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
		string s;
		cin>>s;
		ll first = -1;
		ll second = -1;
		ll i;
		ll noofones = 0;
		FOR( i,0,n-1 ){
			if( s[i] == '1' )
				noofones++;
		}
		FOR( i,0,n-1 ){
			if( s[i] == '1' ){
				first = i+1;
				break;
			}
		}
		FORR( i,n-1,0 ){
			if( s[i] == '1' ){
				second = i+1;
				break;
			}
		}

		ll ans = n + noofones;
		if(first != -1)
			 ans=max(ans,(n-first+1)*2);
		if(second !=-1) 
			ans=max(ans,second*2);

		ans=min(ans,2*n);		
		cout<<ans<<"\n";
	}
	return 0;
}