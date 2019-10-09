#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
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
        ll ans = 0;
        for(ll i=0;i<n;i++){
            bool flag = true;
            for(ll j=i-1;j>=max(0LL,i-5);j--){
                if( v[i] >= v[j] ){
                    flag = false;
                    break;
                }   
            }
            if(flag)
                ans++;
        }
        cout<<ans<<"\n";
	}
	return 0;
}