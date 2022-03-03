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
    cout<<"Target element"<<endl;
    int target;
    cin>>target;
    int low = 0;
    int high = n-1;
     int mid=0;
     int comp=0;
     int flag=0;
    while(low<=high){
        comp++;
        mid = low + (high-low)/2;
        if(arr[mid]==target){
            flag=1;
            break;
        }
        if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag){
        cout<<"element found at : "<<mid<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
    cout<<"No of comparison "<<comp<<endl;
    return 0;
}