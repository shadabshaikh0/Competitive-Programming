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
    ll a = 0,b=0,count=0;
    ll i;
    for(i=2;i<s.length();i+=2 ){ 
        if( s[i-1] == s[i-2] ){
            count++;
            if( s[i-1] == 'a' )
                s[i-1] = 'b';
            else
                s[i-1] = 'a';
        }
    }
    if( !(i&1) ){
        if( s[i-1] == s[i-2] ){
            count++;
            if( s[i-1] == 'a' )
                s[i-1] = 'b';
            else
                s[i-1] = 'a';
        }        
    }
    cout<<count<<"\n";
    cout<<s<<"\n";
	return 0;
}