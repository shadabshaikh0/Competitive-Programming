#include<bits/stdc++.h>
#define ll unsigned long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1000001
#define MOD 1000000007

int main()
{
	bolt;
	vector<ll> fact(MAX);
	fact[0] =1;
	fact[1] =1;
	for( ll i=2;i<MAX;i++ ){
		fact[i] = ( (fact[i-1]%MOD)  * (i%MOD) ) % MOD;
	}
	vector<ll> v(MAX);
	v[0] = 1;
	v[1] = 1;	
	for( ll i=2;i<MAX;i++ ){
		v[i] = ( (v[i-1]%MOD) * (fact[i]%MOD)  )%MOD;
	}
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<v[n]%MOD<<"\n";
	}
	return 0;
}