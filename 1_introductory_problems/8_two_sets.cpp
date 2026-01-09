//* Problem Link :- https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    // 2 condition for the sets 
    // y = 3 + 4x, so x = (y-3)/4
    // y = 4x
    if((n-3)%4 && n%4){
        cout<<"NO"<<endl;
        return 0;
    }

    vector<int> set1, set2;
    set1.push_back(1);
    int i;
    if(n%2){
        set1.push_back(2);
        set2.push_back(3);
        i = 4;
    }
    else {
        set1.push_back(4);
        set2.push_back(2);
        set2.push_back(3);
        i = 5;
    }

    for(; i<=n; i+=4){
        set1.push_back(i);
        set1.push_back(i+3);
        set2.push_back(i+1);
        set2.push_back(i+2);
    }

    cout<<"YES"<<endl;

    cout<<set1.size()<<endl;
    for(auto& x:set1)cout<<x<<" ";
    cout<<endl;

    cout<<set2.size()<<endl;
    for(auto& x:set2)cout<<x<<" ";
    cout<<endl;

    return 0;
}