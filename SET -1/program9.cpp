#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    map<int,int>mpp;
    for(auto x:vec){
        mpp[x]++;
    }
    int cnt=0;
    for(auto x:mpp){
        if(x.second>1){
            cnt++;
        }
    }
    cout<<cnt<<" ";
}