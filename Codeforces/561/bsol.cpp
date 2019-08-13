#include<bits/stdc++.h>
#include<cmath>
#define ll long long int 
#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n; vector<int> a;

void Input() {
	cin >> n; a.resize(n);
	for (auto &z: a) {cin >> z; z = abs(z);}
}

void Solve() {
	long long ans = 0;
	sort(a.begin(), a.end());
    for(auto &i:a)
        cout<<i<<" ";
    cout<<"\n";
	for (int i=0; i<n; i++) {
		int j = upper_bound(a.begin(), a.end(), a[i] * 2) - a.begin();
        cout<<j<<"\n";
		ans += max(0, j - i - 1);
        cout<<ans<<"\n";
	}
	cout << ans << endl;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	Input(); Solve(); return 0;
}