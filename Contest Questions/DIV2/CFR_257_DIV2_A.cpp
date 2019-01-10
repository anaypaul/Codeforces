#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int count = 0;
    int last_index = -1;
    for(int i = 0;count!=n;i++){
        if(arr[i]>0){
            arr[i] = arr[i] - m;
            if( arr[i] <= 0 ){
                last_index = i;
                count++;
            }
        }
        if(count == n){
            cout<<last_index+1<<endl;
            return 0;
        }
        if(i==n){
            i = 0;
        }
    }
    return 0;
}