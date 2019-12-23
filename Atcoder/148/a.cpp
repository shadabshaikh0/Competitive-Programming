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
    if( ( a == 1 && b == 2 ) || ( a == 2 && b == 1 ) )
        cout<<3<<"\n";
    else if( ( a == 2 && b == 3 ) || ( a == 3 && b == 2 ) )
        cout<<1<<"\n";
    else if( ( a == 1 && b ==3 ) || ( a == 3 && b == 1 ) )
        cout<<2<<"\n";

	return 0;
}