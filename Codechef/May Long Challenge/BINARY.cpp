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
		ll n,z;
		cin>>n>>z;
		vector<ll> v(n);
		RD(v,n);
		vector<ll> ans(n,1);
        ll pos = n-1;
        for(ll i=n-1;i>=0;i--){
            if(v[i] == 0 ){
                if(i+z > pos){
                    ans[pos] = 0;
                    pos--;
                }
                else{
                    ans[i+z] = 0;
                    pos = i+z-1;
                }
            }
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
	}
	return 0;
}