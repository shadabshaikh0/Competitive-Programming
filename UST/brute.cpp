#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans=0;
/* Driver program to test above functions */
int main() 
{ 
	int t;
	cin>>t;
while(t--){
		ll n;
		cin>>n;
		//n=100000;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			//a[i]=n-i+1;
		}
		//cout<<mergeSort(a, n);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i]) 
					ans+=(i+1)*(n-j);
				cout<<ans<<"\n";}
			}
		}
		cout<<ans<<"\n";
	}
   /* int arr[] = { 1, 20, 6, 4, 5 }; 
    printf(" Number of inversions are %d \n", mergeSort(arr, 5)); 
    getchar(); */
    return 0; 
}