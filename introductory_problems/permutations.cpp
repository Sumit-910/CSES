//* Problem Link :- https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin>>n;

    if(n != 1 &&n <= 3)cout<<"NO SOLUTION"<<endl;
    else{
        vector<int> perm;
        for(int i=2;i<=n;i+=2)perm.push_back(i);
        for(int i=1;i<=n;i+=2)perm.push_back(i);

        for(auto x: perm)cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}