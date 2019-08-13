#include<bits/stdc++.h>
#define ll long long int 
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        long long sum=0;
        cin >> n;
        
        vector<int> v1(n), v2(n);
        
        for(int i=0; i<2*n; ++i){
            if(i<n)
                cin>>v1[i];
            else
                cin>>v2[i-n];
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        for(int i=0; i<n; ++i)
            sum+=v1[i]*v2[i];
        cout<<sum<<"\n";
    }
	return 0;
}