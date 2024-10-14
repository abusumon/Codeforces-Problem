#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int res=n-a;
    int count=0;
    while(res>b+1){
        res--;
    }
    cout << res << endl;
    return 0;
}
