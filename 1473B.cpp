#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str1,str2,str3,str4;
        cin >> str1 >> str2;
        if(str1.length()<str2.length()) swap(str1,str2);
        while(true){
            str3+=str1;
            if(str3.length()%str2.length()==0) break;
        }
        while(true){
            str4+=str2;
            if(str4.length()%str1.length()==0) break;
        }
        if(str3==str4){
            cout << str3 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
