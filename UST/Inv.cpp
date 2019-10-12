#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
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
	ll t;
	cin>>t;
	while(t--){
		ll n;
        ull MOD;
		cin>>n>>MOD;
		vector<ll> v(n);
		RD(v,n);	
        //convert
        vector<ll> temp( v.begin(),v.end() );
        sort(temp.begin(),temp.end());
        for (int i=0; i<n; i++) 
        { 
            v[i] = lower_bound(temp.begin(), temp.end(), v[i]) - temp.begin() + 1; 
        }
        // BIT
        vector<ll> BIT(n+1,0);
        ll ans = 0;
        for(ll i=0;i<n;i++){
            ans += (n-i) * ( getSum(BIT,n) - getSum(BIT,v[i]) ) ; 
            updateBIT(BIT,n,v[i],i+1);
        }
        cout<<ans<<"\n";
	}
	return 0;
}
