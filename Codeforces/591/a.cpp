#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( int i=(a) ; i>=(b) ; --i)
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
		if(n == 2)
			cout<<2<<"\n";
		else if(n & 1)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
			
	}
	return 0;
}