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
    ll len = s.length();

    ll i=1,j=2;
    ll cnt =0;
    string ans="";
    while( i<=len && j <=len ){
        if( s[i-1] != s[j-1]  ){
            ans += s[i-1];
            ans += s[j-1];
            i =j+1;
            j+=2;
        }
        else{
            cnt++;
            j++;
        }
    }

    if( i > len )
        cout<<cnt<<"\n";
    else
        cout<<cnt+1<<"\n";
    
    cout<<ans;
	return 0;
}