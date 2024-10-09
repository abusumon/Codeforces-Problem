#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll m,n,q;
        cin >> m >> n >> q;
        vector<ll> teach(2);
        for(size_t i=0;i<2;i++){
            cin >> teach[i];
        }
        sort(teach.begin(),teach.end());
        vector<ll> stud(1);
            cin >> stud[0];
        ll t_l=teach[0];
        ll t_r=teach[1];
        ll s=stud[0];
        ll count=0;
        if(s<t_l){
            count=t_l-1;
        }else if(s>t_r){
            count=m-t_r;
        }else{
            ll mid=(t_l+t_r)/2;
            count=min(abs(mid-t_l),abs(mid-t_r));
        }
        cout << count << endl;
    }
    return 0;
}
