#include<bits/stdc++.h>
#define ll long long int 
#define MOD 1000000007
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
        if( n & 1 ){
            cout<<n%MOD<<"\n";
        }
        else{
            cout<<(n-1)%MOD<<"\n";
        }
	}
	return 0;
}