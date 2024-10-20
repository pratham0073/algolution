#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
           cout<<" "; 
        }
        for(int k=0;k<4;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}