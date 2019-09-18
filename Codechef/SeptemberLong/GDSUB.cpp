#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MOD 1000000007
int main()
{
	bolt;
    unordered_map<ll,ll> mp;
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i =0;i<n;i++ ) {
        cin>>v[i];
        mp[ v[i] ]++;
    }   
    vector<ll> prevdp( k+1,0);    
    vector<ll> dp( k+1,0);
    prevdp[0] = 1,dp[0] = 1;

    for( auto itr:mp ){
        for( ll i=1;i<=k;i++ ){
            dp[i] = ( dp[i] + (prevdp[i-1] * itr.second)%MOD ) %MOD;
        }
        for( ll j=1;j<=k;j++ ){
            prevdp[j] = dp[j];
        }        
    }
    ll sum =0;
    sum = accumulate( dp.begin(),dp.end(),sum );
    cout<<sum%MOD<<"\n";
    return 0;
}