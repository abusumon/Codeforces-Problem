#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> alice(n);
        for(int i=0;i<n;i++){
            cin >> alice[i];
        }
        bool fs=true, fr=true;
        for(int i=0;i<n;i++){
            int bob;
            cin >> bob;
            if(bob != alice[i]){
                fs=false;
            }
            if(bob!=alice[n-1-i]){
                fr=false;
            }
        }
        cout << (fs||fr ? "Bob":"Alice") << endl;
    }
    return 0;
}
