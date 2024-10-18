#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
        }else if(n==2){
            cout << -1 << endl;
        }else{
            vector<vector<int>> mat(n,vector<int>(n));
            int count=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j+2)%2==0){
                        mat[i][j]=count++;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j+2)%2!=0){
                        mat[i][j]=count++;
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
