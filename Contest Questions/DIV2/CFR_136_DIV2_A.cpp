#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
void fun(vector<int> &arr, int x){
    if(x==1){
        return ;
    }else{
        int t = arr[x-1];
        arr[x-1] = arr[x-2];
        arr[x-2] = t;
        fun(arr, x-1);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        arr.push_back(i+1);
    }
    fun(arr, arr.size());
    for(int i = 0 ; i< n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
