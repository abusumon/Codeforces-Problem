#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    unordered_map<string,string> myMap;
    for(int i=0;i<m;i++){
        string key;
        cin >> key;
        string val;
        cin >> val;
        myMap[key]=val;
    }
    vector<string> lecture(n);
    vector<string> res;
    for(int i=0;i<n;i++){
        cin >> lecture[i];
    }
    for(int i=0;i<n;i++){
        auto it=myMap.find(lecture[i]);
        if(it!=myMap.end()){
            string val = it->second;
            if(val.size()<lecture[i].size()){
                res.push_back(val);
            }else{
                res.push_back(lecture[i]);
            }
        }
    }
    for(string str:res){
        cout << str << " ";
    }
    return 0;
}
