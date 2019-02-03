#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(999999,0);
    
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x>=1){
            arr[x] = 1;
        }

    }
    for(int i = 1;i<999999;i++){
        if(arr[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}