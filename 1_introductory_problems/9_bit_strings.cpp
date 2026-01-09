//* Problem Link :- https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll pow(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod;
        b = b >> 1;
        a = (a * a) % mod;
    }
    return res;
}

int main() {
    ll n;
    cin>>n;
    ll mod = 1e9+7;

    cout<<pow(2, n, mod)<<endl;

    return 0;
}