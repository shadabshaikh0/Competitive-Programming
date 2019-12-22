#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    string s;
    cin>>s;
    ll n = s.length();
    ll count = 0;
    for(ll i=0;i<n/2;i++ ){
        if( s[i] != s[n-1-i]  ){
            count++;
        }
    }
    cout<<count<<"\n";
	return 0;
}