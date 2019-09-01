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
		vector<ll> v(n);
		RD(v,n);	
        
        ll mine = v[n-1];
        ll count= 0;
        for(ll i=n-2;i>=0;i--){
            if( mine < v[i] )
                count++;
            else
                mine = v[i];
        }
        cout<<count<<"\n";
	}
	return 0;
}