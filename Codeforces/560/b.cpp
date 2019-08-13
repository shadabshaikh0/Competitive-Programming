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
	vector<ll> v(n);
	RD(v,n);
	ll count = 0;
	sort(v.begin(),v.end());
	ll j = 1;
	for(ll i=0;i<n;i++){
		if( j <= v[i] ){
			count++;
			j++;
		}			
	}
	cout<<count<<"\n";
	return 0;
}