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
		ll b,p,f;
		cin>>b>>p>>f;
		ll h,c;
		cin>>h>>c;
		b = b /2;
		ll profit = 0;
		if( h >= c ){
			ll  mine = min( b,p);
			profit += mine * h;
			b = max(b - p,0LL);
			mine = min(f,b);
			profit += mine * c;						
		}
		else{
			ll  mine = min( b,f);
			profit += mine * c;
			b = max(b - f,0LL);
			mine = min(p,b);
			profit += mine * h;						
		}
		cout<<profit<<"\n";
	}
	return 0;
}