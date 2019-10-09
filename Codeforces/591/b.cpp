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
		string s,t;
		cin>>s>>t;
		vector<ll> count(26,0);
		ll i;
		FOR(i,0,s.length()-1){
			count[s[i]-'a']++;
		}
		bool flag = false;
		FOR(i,0,t.length()-1){
			if( count[t[i]-'a'] > 0 )
			{
				flag = true;
				break;
			}
		}
		if( flag  )
			cout<<"YES\n";
		else
			cout<<"NO\n";
			
	}
	return 0;
}