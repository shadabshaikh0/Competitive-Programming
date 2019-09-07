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
		ll s,i,e;
		cin>>s>>i>>e;
		if( s>i ){
			ll add = s - i;
			if( e < add )
				cout<< e + 1<<"\n";
			else if( e == add )
				cout<<add<<"\n";
			else
				cout<<add+1<<"\n";
		}
		else if( s == i ){
			ll ans = 0;
			if( e & 1 )
				ans = e/2 +1;
			else
				ans = e /2;
			cout<<ans<<"\n";			
		}
		else{
			ll add = i - s;
			if( e <= add )
				cout<<0<<"\n";
			else{
				e = e -add;
				if( e <=0 )
					cout<<0<<"\n";
				else{
					ll ans = 0;
					if( e & 1 )
						ans = e/2 +1;
					else
						ans = e /2;
					cout<<ans<<"\n";			
				}
			}

		}
	}
	return 0;
}