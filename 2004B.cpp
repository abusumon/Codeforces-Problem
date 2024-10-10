#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int al,ar;
        cin >> al >> ar;
        int bl,br;
        cin >> bl >> br;
        vector<int> alice;
        vector<int> bob;
        while(al<=ar){
            alice.push_back(al);
            al++;
        }
        while(bl<=br){
            bob.push_back(bl);
            bl++;
        }
        int count=0;
        int gate;
        int n=max(alice.size(),bob.size());
        for(int i=0;i<alice.size();i++){
            for(int j=0;j<bob.size();j++){
                if(alice[i]==bob[j]) count++;
            }
        }
        if(count==0) gate=1;
        else if(count==alice.size() && count==bob.size()) gate=count-1;
        else if(alice[0]==bob[0] || alice.back()==bob.back()) gate=count;
        else gate=count+1;
        cout << gate << endl;
    }
    return 0;
}
