#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	for( ll i=1;i<=100;i++ ){
		cout<<"A";
	}
	cout<<"\n";
	return 0;
	cin>>t;
	while(t--){
		ll s;
		cin>>s;
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum = a + b + c;
		if( sum <= s ){
			cout<<1;
		}
		else{
			if( sum == 3 ){
				if( s == 1 )
					cout<<3;
				else
					cout<<2;
			}
			else if( sum == 4 ){
				if( b == 2 && s== 2 )
					cout<<3;
				else
					cout<<2;
			}
			else if( sum == 5 ){
				if( s == 2 ){
					cout<<3;
				}
				else{
					cout<<2;
				}
			}
			else{
				if( s == 2 || s == 3 )
					cout<<3;
				else
					cout<<2;
			}
		}
		cout<<"\n";
	}
	return 0;
}