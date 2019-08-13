#include<bits/stdc++.h>
#define ll long double 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll h,l;
    cin>>h>>l;

    cout<<fixed<<setprecision(13)<< ((l*l)-(h*h) ) /(2*h)<<"\n";  
	return 0;
}