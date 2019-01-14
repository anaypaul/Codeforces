#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<long long int> arr;
    for(long long int i = 0; i<m; i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    long long int answer = 0;
    long long int x = arr[0];
    answer = x-1;
    for(long long int i = 1; i<m; i++){
        if(arr[i] >= x){
            answer += arr[i]-x;
            x = arr[i];
        }else{
            answer += n-x+1;
            x = 1;
            answer += arr[i]-x;
            x = arr[i];
        }
    }
    cout<<answer<<endl;
    return 0;
}