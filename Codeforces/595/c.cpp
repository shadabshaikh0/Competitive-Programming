#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 10000
int main()
{
	bolt;
	ll t;
	cin>>t;

    vector<ll> v;
    ll i;
    for(i=0;i<=9;i++){
        ll temp = pow(3,i);
        v.push_back(temp);
    }    

    
    ll ilen = pow(2,10);
    vector<ll> dp;
    for( ll i=0;i<ilen;i++ ){
        ll sum = 0;
        for( ll j=0;j<10;j++ ){
            if( i & ( 1 << j ) ){
                sum += v[j];
            }
        }
        if( sum != 0 )
            dp.push_back(sum);
    }


	while(t--){
		ll n;
		cin>>n;
        ull index = lower_bound( dp.begin(),dp.end(),n ) - dp.begin();
        cout<<dp[index]<<"\n";
	}
	return 0;
}