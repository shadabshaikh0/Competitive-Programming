#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		if( n % 3 == 0 ){
			cout<<a<<"\n";
		}
		else if( n % 3 == 1 ){
			cout<<b<<"\n";
		}
		else{
			ll temp = a ^ b;
			cout<<temp<<"\n";
		}
	}
	return 0;
}