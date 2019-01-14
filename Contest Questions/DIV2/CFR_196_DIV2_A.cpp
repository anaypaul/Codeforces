#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    for(int i = 0;i<m;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
    for(int i = 0;i<m-n+1;i++){
        // cout<<i<<" "<<i+n-1<<endl;
        if(arr[i+n-1]-arr[i] < min){
            min = arr[i+n-1] - arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}
