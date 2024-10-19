#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int,int> myMap;
    for(int i=0;i<7;i++){
        cin >> myMap[i];
    }
    int sum=0;
    int limit=7;
    int i=0;
    int index;
    while(sum<n){
        index = i%limit;
        sum +=myMap[index];
        i++;
    }
    cout << index+1 << endl;
    return 0;
}
