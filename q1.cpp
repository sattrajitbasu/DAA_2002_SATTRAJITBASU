#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int comp=0;
    cout<<"Target element"<<endl;
    int target;
    cin>>target;
    int i;
    int flag=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"target found at:"<<i<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    cout<<"No of comparision:"<<i+1<<endl;
}