#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	bolt;
    ll n,d,e;
    cin>>n>>d>>e;

    ll n1 = n,n2=n;
    ll d1,d2,d3;
    d1 = d;

    ll e1;
    e1 = 5*e;

    ll ans1 = n % d1;
    ll ans2 = n % e1;

    ll ans3 = n % e1;
    ans3 = ans3 % d1;


    ll ans4 = n % d1;
    ans4 = ans4 % e1;

    cout<<  min( ans1,min(ans2,min( ans3,ans4  )) )<<"\n";

	return 0;
}