#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cout<<"enter key : ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}