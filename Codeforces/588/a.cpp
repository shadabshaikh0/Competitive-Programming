#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    vector<ll> v(4);
    RD(v,4);
    sort(v.begin(),v.end());
    if( (v[0]+v[1]+v[2] == v[3]) || ( v[0] + v[3] == v[1] + v[2])  )
        cout<<"YES\n";
    else
        cout<<"NO\n";

	return 0;
}