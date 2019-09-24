#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MOD 1000000007
int main()
{
	bolt;
    ll n,m;
    cin>>n>>m;
    ll ans = 1;
    for( ll i=0;i<m;i++ ){
        ans *= ( m-i ) % MOD;
    }   
    cout<<ans<<"\n";
	return 0;
}