#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool checkTemp(const vector<ll>& num,const string& str){
    if(num.size()!=str.size()) return false;
    unordered_map<char,ll> charTOnum;
    unordered_map<ll,char> numTOchar;
    for(size_t i=0;i<str.size();i++){
        char c=str[i];
        ll n=num[i];
        if(charTOnum.find(c) != charTOnum.end()){
            if(charTOnum[c]!=n){
                return false;
            }
        }else{
            charTOnum[c]=n;
        }
        if(numTOchar.find(n)!=numTOchar.end()){
            if(numTOchar[n]!=c){
                return false;
            }
        }else{
            numTOchar[n]=c;
        }
    }
    return true;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> num(n);
        for(size_t i=0;i<n;i++){
            cin >> num[i];
        }
        ll m;
        cin >> m;
        vector<string> str(m);
        for(size_t i=0;i<m;i++){
            cin >> str[i];
        }
        for(size_t i=0;i<m;i++){
            bool result=checkTemp(num,str[i]);
            if(result) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
