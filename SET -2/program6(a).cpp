#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vec[i] +vec[j]==sum){
                    flag=1;
                    break;
                }
            }
    }
    if(flag==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
return 0;
    }