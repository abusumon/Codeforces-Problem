#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m;
    n=m;
    int sum=0;
    for(int i=1;i<=m;i++){
        int formula = 1+i*(n-1);
        n=n-1;
        sum += formula;
    }
    cout << sum << endl;
    return 0;
}
