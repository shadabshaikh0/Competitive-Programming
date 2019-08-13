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
        ll a,b;
        cin>>a>>b;
        cout<< min( 1000000LL, max(a,b)+1 )<<" ";
        cout<< max( 1LL, min(a,b)-1 )<<"\n";
	}
	return 0;
}