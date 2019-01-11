#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int x,y;
    cin>>x>>y;
    long long int n;
    cin>>n;
    if(x==0 && y==0){
        cout<<"0"<<endl;
    }else{
        long long int val;
        vector<long long int> arr;
        
        for(long long int i = 3; i<9;i++){
            val = y - x;
            x = y;
            y = val;
            // cout<<val<<" ";
            arr.push_back(val);
        }
       
        if(n==1){
            if(x<0){
                cout<<(1000000007 + (x%1000000007)) % 1000000007<<endl;
            }else{
                cout<<x%1000000007<<endl;
            }
        }else if(n==2){
            if(y<0){
                cout<<(1000000007 + (y%1000000007)) % 1000000007<<endl;
            }else{
                cout<<y%1000000007<<endl;
            }
        }else{
            if(arr[(n-3)%6]<0){
                cout<<(1000000007 + (arr[(n-3)%6]%1000000007)) % 1000000007<<endl;
            }else{
                cout<<arr[(n-3)%6]%1000000007<<endl;
            }
        }
    }
    return 0;
}

    