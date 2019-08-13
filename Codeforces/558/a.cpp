#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,m;
    cin>>n>>m;
    if(m == 0){
        cout<<"1\n";
    }
    else if( m > (n/2) ){
        cout<<n-m<<"\n";
    }        
    else if( n == m ){
        cout<<0<<"\n";
    }
    else{
        cout<<m<<"\n";
    }
	return 0;
}