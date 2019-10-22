#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1000000000000000000
int main()
{
	bolt;
	ll t;
	cin>>t;
    vector<ull> dp;
    ll i;
    ll last =37;
    for(i=0;i<=last;i++){
        ull temp = pow(3,i);        
        dp.push_back(temp);
        for( ll j=0;j<dp.size() ;j++ ){
            ull t2 = temp + dp[j];
            if( t2 > MAX )
                goto start;

            dp.push_back(t2);
        }
    }   
    start:
	while(t--){
		ll n;
		cin>>n;
        ull index = lower_bound( dp.begin(),dp.end(),n ) - dp.begin();       
        cout<<dp[index]<<"\n"; 
	}
	return 0;
}