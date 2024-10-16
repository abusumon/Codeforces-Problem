#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool triangle(vector<ll>& a){
    sort(a.begin(),a.end());
    bool sol=false;
    for(size_t i=0;i<a.size()-2;i++){
        if(a[i]+a[i+1]>a[i+2]){
            return true;
        }
        else{
            continue;
        }
    }
    return false;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> sides(n);
    for(size_t i=0;i<n;i++){
        cin >> sides[i];
    }
    bool res=triangle(sides);
    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
