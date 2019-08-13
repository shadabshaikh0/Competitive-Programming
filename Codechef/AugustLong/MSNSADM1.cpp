#include<bits/stdc++.h>
#define ll long long int 
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
		vector<ll> a(n),b(n);
		RD(a,n);	
		RD(b,n);
        
		vector<ll> ans(n);
        for(ll i=0;i<n;i++){
            ans[i] = a[i]*20 - b[i]*10;
        }
        ll maxe = *max_element(ans.begin(),ans.end());
        maxe = max(0LL,maxe);
        cout<<maxe<<"\n";
	}
	return 0;
}