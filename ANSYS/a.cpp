#include<bits/stdc++.h>
#define ll unsigned long long int 
#define FOR(i,a,b) for( ll i=(a) ; i<=(b) ; ++i)
#define FORR(i,a,b) for( ll i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define max 1000000000000000000
using namespace std;

int main()
{
	bolt;
	ll t;
	cin>>t;
	while(t--){
		ll n,f;
		cin>>n>>f;
		vector<ll> v(n);
        ll a[100];ll b[100];
        a[0]=f;b[0]=0;
        a[1]=3*f;b[1]=1;
        // cout<<"x\n";
        // cout<<"3x+1\n";
        a[2]=9*f;
        b[2]=2;
        // cout<<a[2]<<"x"<<"+"<<b[2]<<"\n";
        a[3]=27*f;
        b[3]=7;
        // cout<<a[3]<<"x"<<"+"<<b[3]<<"\n";
        for(int i=0;i<=3;i++)
            cout<<a[i]+b[i]<<"\n";            
        for(int i=4;i<n;i++)
        {
            if(i%2==0)
            {
                a[i]=2*a[i-1]*f+3*a[i-2];
                b[i]=2*b[i-1]+3*b[i-2];
            }
            else{
                a[i]=3*a[i-1]*f;
                b[i]=3*b[i-1]+1;
            }
            // cout<<i<<"  "<<a[i]<<"x"<<"+"<<b[i]<<" "<<b[i]%3<<"\n";
            if(a[i]+b[i]>max) {cout<<"thik hai"<<i;break;}
            cout<<a[i]+b[i]<<"\n";
        }
		//RD(v,n);	
	}
	return 0;
}