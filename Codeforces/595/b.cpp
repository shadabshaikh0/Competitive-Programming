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
		vector<ll> v(n);
		RD(v,n);	
		vector<ll> ans(n,0);        
        for( ll i=0;i<n;i++ ){
            ll j= i;
            ll count = 0;
            while( v[j] != (i+1) ){ 
                count++;            
                j = v[j]-1;
            }
            ans[i] = count+1;
        }
        for( auto it:ans  )
            cout<<it<<" ";
        cout<<"\n";
	}
	return 0;
}