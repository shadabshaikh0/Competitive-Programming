#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++)
        cin >> array[i];
    
    int maxi = *max_element(array, array + n);
    //cout<<maxi;
    int result[maxi + 1];
    memset(result, 0, (maxi + 1) * sizeof(int));

    int count[maxi + 1];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; ++i)
        count[array[i]]++;

    for (int i = 1; i <= maxi; ++i){
        for (int j = i; j <= maxi; j += i){
            result[i] += count[j];
            //cout<<result[i];
        }
    }

    int sum = 0;
    for(int i = 1; i <= n ; i++){
        sum += result[i];
        //cout<<sum;
    }
    cout << sum;

    return 0;
}
