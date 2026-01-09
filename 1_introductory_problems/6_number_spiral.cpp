//* Problem Link :- https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void _main_(){
    ll y, x;
    cin>>y>>x;

    if(y>x){
        if(y%2 == 0){
            cout<<(y*y) - (x-1)<<endl;
        }
        else{
            cout<<((y-1)*(y-1)) + x<<endl;
        }
    }
    else{
        if(x%2 == 1){
            cout<<(x*x) - (y-1)<<endl;
        }
        else{
            cout<<((x-1)*(x-1)) + y<<endl;
        }
    }
}

int main() {
    int t;
    cin>>t;

    while(t--){
        _main_();
    }

    return 0;
}