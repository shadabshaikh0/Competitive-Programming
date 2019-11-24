#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	string s;
	cin>>s;
	string dp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ll n = s.length();
	for( ll i=0;i<n;i++ ){
		cout<< dp[  (((s[i]-'A')+t)%26) ] ;
	}
	cout<<"\n";
	return 0;
}