//* Problem Link :- https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;

    for(ll k=1;k<=n;k++){
        ll res = 0;
        ll total_positions = (k*k*(k*k - 1))/2;
        ll attacking_positions = 4*(k - 1)*(k - 2);
        res = total_positions - attacking_positions;
        cout<<res<<endl;
    }

    return 0;
}