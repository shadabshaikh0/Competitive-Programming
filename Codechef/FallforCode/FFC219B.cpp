#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 100001
#define MOD 1000000007

ll fast_pow(ll base, ll n,ll M) 
{
    if(n==0LL)   return 1;
    if(n==1LL)   return base;
    ll halfn = fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2,M);
}

int main()
{
	bolt;
	ll t;
	cin>>t;
    vector<ll> v(MAX,0);
    v[1] = 24;
    ll i;
    ll curr = 5;
    FOR(i,2,MAX){
        ll temp = (  (v[i-1]%MOD) * (curr%MOD) ) % MOD;
        ll abc  = findMMI_fermat(i-1,MOD);
        temp = (temp * abc)%MOD;
        v[i] =  temp;
        curr++;
    }

    vector<ll> prefix(MAX,0);
    FOR(i,1,MAX){
        prefix[i] = (prefix[i-1]%MOD + v[i]%MOD)%MOD; 
    }

	while(t--){
        ll l,r;
        cin>>l>>r;
        cout<< prefix[r]-prefix[l-1]<<"\n";
	}
	return 0;
}