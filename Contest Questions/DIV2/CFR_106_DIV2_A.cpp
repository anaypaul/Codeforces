#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    vector<int> arr;
    for(int i = 0;i<12;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(), arr.end());
    if(k==0){
        cout<<"0"<<endl;
    }else{
        int i = 0;
        while(k>0 && i < 12){
            k =k - arr[i] ;
            i++;
        }
        if(k<=0){
            cout<<i<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
