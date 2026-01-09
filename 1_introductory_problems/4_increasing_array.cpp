//* Problem Link :- https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll ans = 0, prev_max = a[0];
    for(int i=1;i<n;i++){
        ans += max(0*1ll, prev_max - a[i]);
        prev_max = max(prev_max, a[i]);
    }
    cout<<ans<<endl;

    return 0;
}