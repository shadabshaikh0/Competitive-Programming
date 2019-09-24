#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    if( n == 1 ){
        if( k == 1 )
            cout<<0<<"\n";
        else
            cout<<s<<"\n";
    }
    else{
        if( k == 0  )
            cout<<s<<"\n";
        else{

            if( s[0] != '1'  ){
                k--;
                s[0] = '1';
            }
            for( ll i=1;i<n;i++ ){
            if( k == 0 )
                break;
            if( s[i] != '0' ){
                k--;
                s[i] = '0';
            }
            }
            cout<<s<<"\n";
           
        }
    }
	return 0;
}