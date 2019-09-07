#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,k;
    cin>>n>>k;

    ll low = 1;
    ll high = n;
    ll mid;
    while( low < high ){
        mid = ( low+high )/2;        
        ll sum = 0,temp=mid;
        for( ;temp; temp /= k )
            sum += temp;

        if( sum >= n )
            high = mid;
        else
            low = mid +1;
    }
    cout<<low<<"\n";
	return 0;
}