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
    vector<int>result;
    for(auto num:mpp){
        if(num.second == 1){
            result.push_back(num.first);
        }

    }
    for(auto x:result){
        cout<<x<<" ";
    }

}