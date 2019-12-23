#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll a,b;
    cin>>a>>b;
    ll lcm = a*b / __gcd(a,b);
    cout<<lcm<<"\n";
	return 0;
}