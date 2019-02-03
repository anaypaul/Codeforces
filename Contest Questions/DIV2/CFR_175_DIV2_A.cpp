#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i =0; i<n; i++){
        arr.push_back(i+1);
    }
    if(k== n-1){
        for(int i = n;i>=1;i--){
            cout<<i<<" ";
        }
        return 0;
    }
    else if(k==0){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
    }else{
        if(k<=n/2){
            for(int i=n-1;k>0 && i>=0;i=i-2){
                
                int t = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = t;
                k--;
            }
            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }else{
            int x;
            for(int i = n;k>0;i--,k--){
                cout<<i<<" ";
                x = i;
            }
            
            // cout<<"x = "<<x<<endl;
            for(int i = 1;i<=x-1;i++){
                cout<<i<<" ";
            }
        }
    }

    

    return 0;
}