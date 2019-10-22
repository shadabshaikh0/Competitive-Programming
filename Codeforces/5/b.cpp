#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll getSum(vector<ll> &BIT, ll index) 
{ 
    ll sum = 0; 
    while (index > 0) { 
        sum += BIT[index]; 
        index -= index & (-index); 
    } 
    return sum; 
}   
void updateBIT(vector<ll> &BIT,ll n,ll index, ll val) 
{ 
    while (index <= n){ 
       BIT[index] += val; 
       index += index & (-index); 
    }
} 

int main()
{
	bolt;
		ll n;
		cin>>n;
		vector<ll> a(n);
		unordered_map<ll,ll> mp;
		for( ll i=0;i<n;i++ ){
			cin>>a[i];			
			mp[ a[i] ] = i+1;
		}
		
		vector<ll> b(n);
		for( ll i=0;i<n;i++ ){
			cin>>b[i];
			b[i] = mp[b[i]];
		}

        // BIT
        vector<ll> BIT(n+1,0);
        ll ans = 0;
        for(ll i=0;i<n;i++){
            ans = max( ans,( getSum(BIT,n) - getSum(BIT, b[i] ) ) ); 
            updateBIT(BIT,n,b[i],1);
        }
        cout<<ans<<"\n";
	return 0;
}
