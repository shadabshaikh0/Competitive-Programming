#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll b,g,n;
	cin>>b>>g>>n;

	 b = min( n,b );
	 g = min( n,g );

	ll gn = n - g;

	cout<<b-gn+1<<"\n";
	return 0;
}