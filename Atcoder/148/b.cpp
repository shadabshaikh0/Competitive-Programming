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
    string s,t;
    cin>>s>>t;
    string ans = "";
    for( ll i=0;i<n;i++ ){
        ans += s[i];
        ans += t[i];
    }
    cout<<ans<<"\n";
	return 0;
}