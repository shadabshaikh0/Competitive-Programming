#include<bits/stdc++.h>
#define ll long long int 
#define FOR(i,a,b) for( int i=(a) ; i<=(b) ; ++i)
#define ford(i,a,b) for( int i=(a) ; i>=(b) ; --i)
#define RD(v,n) for(ll i =0;i<n;i++ ) cin>>v[i]
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
  
#define MAX 1000001
struct Query 
{ 
    ll l, r, idx; 
}; 
  
bool cmp(Query x, Query y) 
{ 
    return x.r < y.r; 
} 
  
void update(ll idx, ll val, string bit, ll n) 
{ 
    for (; idx <= n; idx += idx&-idx) 
        bit[idx] += val; 
} 
  
ll query(ll idx, string bit, ll n) 
{ 
    ll sum = 0; 
    for (; idx>0; idx-=idx&-idx) 
        sum += bit[idx]; 
    return sum; 
} 
  
void answeringQueries(int arr[], int n, Query queries[], int q) 
{ 
    int bit[n+1]; 
    memset(bit, 0, sizeof(bit)); 
  
    int last_visit[MAX]; 
    memset(last_visit, -1, sizeof(last_visit)); 
  
    int ans[q]; 
    int query_counter = 0; 
    for (int i=0; i<n; i++) 
    { 
        if (last_visit[arr[i]] !=-1) 
            update (last_visit[arr[i]] + 1, -1, bit, n); 
  
        last_visit[arr[i]] = i; 
        update(i + 1, 1, bit, n); 
  
        while (query_counter < q && queries[query_counter].r == i) 
        { 
            ans[queries[query_counter].idx] = 
                     query(queries[query_counter].r + 1, bit, n)- 
                     query(queries[query_counter].l, bit, n); 
            query_counter++; 
        } 
    } 
  
    // print answer for each query 
    for (int i=0; i<q; i++) 
        cout << ans[i] << endl; 
} 
  
// driver code 
int main() 
{ 
    int a[] = {1, 1, 2, 1, 3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    Query queries[3]; 
    queries[0].l = 0; 
    queries[0].r = 4; 
    queries[0].idx = 0; 
    queries[1].l = 1; 
    queries[1].r = 3; 
    queries[1].idx = 1; 
    queries[2].l = 2; 
    queries[2].r = 4; 
    queries[2].idx = 2; 
    int q = sizeof(queries)/sizeof(queries[0]); 
    sort(queries, queries+q, cmp); 
    answeringQueries(a, n, queries, q); 
    return 0; 
} 
int main() 
{ 
    string arr;
    cin>>arr;
    ll n = arr.length();
    ll q;
    cin>>q;
    Query queries[q]; 
    while(q--){
        ll type;
        cin>>type;
        if( type == 1 ){
            ll pos;
            char s;
            cin>>pos>>s;

        }   
        else{
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            set<ll> ans = query(1, 0, n - 1, l, r);   
            cout << ans.size() <<"\n"; 
        }     
    }
  
    return 0; 
} 