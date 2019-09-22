#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll n;
	cin>>n;
	for( ll i=0;i<n;i++ ){
		for( ll j=0;j<n;j++ ){
			if( i&1 ){
				cout<<'B';
			}
			else{
				if( j & 1 )
					cout<<'B';
				else
					cout<<'W';
			}
		}
		cout<<"\n";
	}
	return 0;
}