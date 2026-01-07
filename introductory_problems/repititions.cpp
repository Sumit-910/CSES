//* Problem Link :- https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s;
    cin>>s;

    int l = 1, ans = 0;
    for(int i=1;i<s.size();i++){
        if(s[i] != s[i-1]){
            ans = max(ans, l);
            l = 0;
        }
        l++;
    }
    ans = max(ans, l);

    cout<<ans<<endl;

    return 0;
}