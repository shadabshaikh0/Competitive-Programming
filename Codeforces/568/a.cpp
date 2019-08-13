#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;   
    vector<ll> v(3);
    RD(v,3);
    ll d;
    cin>>d;

    sort(v.begin(),v.end());

    cout<<max( 0LL, ( d - (v[1]- v[0]) ) )   + max(0LL, ( d - (v[2] - v[1]  )) );
    cout<<"\n";

	return 0;
}