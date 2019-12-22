#include<bits/stdc++.h>
#define ll long long int 
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
		vector<ll> v(11,0);
        for( ll i=0;i<n;i++ ){
            ll p,s;
            cin>>p>>s;
            if( p < 9 )
                v[p-1] = max(v[p-1],s);        
        }
        cout<<accumulate(v.begin(),v.end(),0)<<"\n";
	}
	return 0;
}