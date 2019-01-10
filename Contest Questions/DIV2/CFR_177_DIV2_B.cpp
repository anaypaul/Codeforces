#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int gcd(int a, int b){
    if(a==0 || b==a){
        return b;
    }else{
        return gcd(a%b,a);
    }
}
int main(){
    int n, m , d;
    cin>>n>>m>>d;
    vector<int> arr;
    vector<int> diff;
    for(int i = 0;i<n*m;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i = 1; i<n*m; i++){
        if((arr[i]-arr[i-1])%d!=0){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int median = -1;
    if(arr.size()%2==1){
        median = arr[arr.size()/2];
    }else{
        median = arr[arr.size()/2 - 1] > arr[arr.size()/2] ? arr[arr.size()/2] : arr[arr.size()/2 -1];
    }
    int answer = 0;
    for(int i = 0;i<n*m;i++){
        // cout<<arr[i]<<" ";
        // diff.push_back(arr[i]-arr[i-1]);
        // cout<<(int)abs(arr[i]-median)/d<<endl;
        answer += (int)abs(arr[i]-median)/d;
    }
    cout<<answer<<endl;

    return 0;
}