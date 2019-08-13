#include<bits/stdc++.h>
#include<cmath>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MOD 1000000007

vector<ll> v(1000001,0);
int main()
{
	bolt;
    v[1] = 1;
    v[2] = 5;
    for( ll i=3;i<1000001;i++ ){
        v[i] = (v[i-1]+i+v[i-1]*i) %MOD ;
    }
	ll t;
	cin>>t;
	while(t--){
		ll n;   
		cin>>n;
        cout<<v[n]<<"\n";
	}
	return 0;
}