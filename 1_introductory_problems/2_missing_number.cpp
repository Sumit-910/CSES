//* Problem Link :- https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;
    for(ll i=0;i<n-1;i++){
        ll curr;
        cin>>curr;
        sum -= curr;
    }
    cout<<sum<<endl;

    return 0;
}