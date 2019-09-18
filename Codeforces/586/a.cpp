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
	string s;
	cin>>s;
	ll a= 0,b =0;
	for( ll i=0;i<s.length();i++ ){
		if( s[i] == 'z' ){
			a++;
		}
		else if( s[i] == 'n'){
			b++;
		}
	}
	while(b--)
		cout<<1<<" ";
	while(a--)
		cout<<0<<" ";
	return 0;
}