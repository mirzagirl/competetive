#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            v[i][j]=a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(i+j==1||i+j==-1){
                int in = 1+i;
                int ij = 1+j;
                cout<<v[in][ij]<<" ";
            }
        }
    }
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if((i+j==2||i+j==-2||i+j==0)&&!(i==0&&j==0)){
                int in = 1+i;
                int ij = 1+j;
                cout<<v[in][ij]<<" ";
            }
        }
    }
    return 0;
}
