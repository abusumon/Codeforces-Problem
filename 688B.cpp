#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    cin >> str1;
    string str2=str1;
    reverse(str1.begin(),str1.end());
    string str3=str1;
    cout << str2+str3 << endl;
    return 0;
}
