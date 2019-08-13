#include<bits/stdc++.h>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
	ll n;
	cin>>n;
	ll limit = 9;

	ll jlimit = 0;
	for(ll i=1;i<=n;i++ ){
		cout<<"O";
		for(ll j=1;j<=jlimit;j++){
			cout<<".";
		}
		for( ll k=1;k<=8;k++ ){
			cout<<"O";
		}
		for( ll m=1;m<= n-jlimit+9;m++ ){
			cout<<".";
		}
		cout<<"\n";
		jlimit = 9*i-1;	
		if(jlimit <  )	
	}

	return 0;
}