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
		ll n,m,k;
        cin>>n>>m>>k;
        if( k != 1 ){
            if( n % k == 0 || m % k == 0 )
                cout<<"-1\n";
            else
                cout<<n*m<<"\n"; 
        }
        else{
            cout<<n*m<<"\n";     
        }
	}
	return 0;
}