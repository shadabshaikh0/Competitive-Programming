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
	while(t--){
        string s,r;
        cin>>s>>r;
        vector<bool> counts(26,false),countr(26,false);
        for( ll i=0;i<s.length();i++ ){
            counts[ s[i]-'a' ] = true;
        }
        for( ll i=0;i<r.length();i++ ){
            countr[ r[i]-'a' ] = true;
        }
        string ans = "";
        for( ll i=0;i<s.length();i++ ){
            if( !countr[ s[i]-'a' ]){
                ans.push_back( s[i] );                
            }
        }
        for( ll i=0;i<r.length();i++ ){
            if( !counts[ r[i]-'a' ]){
                ans.push_back( r[i] );                
            }
        }
        if( ans.length() == 0 )
            cout<<"-1\n";
        else
            cout<<ans<<"\n";
	}
	return 0;
}