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
	vector<ll> price(n);
	RD(price,n);
	ll temp = price[0];
	ll fs,fe,ss,se;
	ll i;
	for( i=1;i<n;i++){
		if( temp < price[i] ){
			fs = i;
			break;
		}
		else{
			temp = price[i];
		}
	}
	if( i == n )
	{
		cout<<0<<"\n";
		return 0;
	}
	ll  j;	
	ll firstmaxe = INT_MIN;
	ll firstmaxp;
	for( j=i;j<n;j++){				
		if( price[j] < price[j-1] ){
			fe = j;
			break;
		}
		else{
			firstmaxe = max(price[j],firstmaxe);
			firstmaxp = j;
		}
	}

	


	return 0;
}