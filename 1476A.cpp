#include<iostream>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,res;
        cin >> n >> k ;
        if(n%k==0) res=1;
        else if(k%n==0) res=k/n;
        else if(k<n) res=2;
        else res=(k/n)+1;
        cout << res << endl;
    }
    return 0;
}
