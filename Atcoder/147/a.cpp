#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum = a+b+c;
    if( sum  >= 22 ){
        cout<<"bust\n";
    }
    else{
        cout<<"win\n";
    }
	return 0;
}