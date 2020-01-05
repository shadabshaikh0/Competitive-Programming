#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll getSum(vector<ll> &BITree, ll index) 
{ 
	ll sum = 0;
	index = index + 1; 
	while (index>0){ 
		sum += BITree[index]; 
		index -= index & (-index); 
	} 
	return sum; 
} 
void updateBIT(vector<ll> &BITree,ll n, ll index,ll val) 
{ 
	index = index + 1; 
	while (index <= n){ 
        BITree[index] += val; 
        index += index & (-index); 
	} 
} 

vector<ll> constructBITree(int arr[], int n) 
{ 
} 

int main()
{
    ll n,q;
    cin>>n>>q;    

    vector<ll> v(n);
    vector<ll> BITree(n+1,0);

    for( ll i=0;i<n;i++ ){
        cin>>v[i];
        updateBIT(BITree, n, i, v[i]); 
    }
    while(q--){
        ll type;
        cin>>type;
        if( type == 1 ){
            ll index,value;
            cin>>index>>value;
            updateBIT(BITree, n, index-1, value);                     
        }
        else{
            ll l,r,a,b;
            cin>>l>>r>>a>>b;
            ll gcdans = __gcd(a,b); 
        }
    }

	return 0;
}