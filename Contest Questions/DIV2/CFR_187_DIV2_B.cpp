#include<map>
#include<set>
#include<queue>
#include<vector>
#include <iostream>
#define ll long long
using namespace std;
const int N = 111111;

ll n, m;
ll pre[N]; //for storing the position where the value has been updated in the array. 
ll sum[N]; //store the running sum values after n type-2 operations performed on the sum array.
ll a[N]; // the main array.

int main()
{
    cin>>n>>m;
    sum[0] = 0;
    for(int i = 1; i<= n;++i){
        pre[i] = 0;
        cin>>a[i];
    }
    for(int i = 0;i<n+1;i++){
        cout<<sum[i]<<" ";
    }
    ll operation, value, position;
    for(int i = 1;i<=m;i++){
        cin>>operation;
        if(operation ==1){
            cin>>position>>value;
            a[position] = value;
            pre[position] = i;
            sum[i] = sum[i-1];
        }else if(operation==2){
            cin>>value;
            sum[i] = sum[i-1] + value;
        }else{
            cin>>position;
            sum[i] = sum[i-1];
            cout<<sum[i] - sum[ pre[position] ] + a[position]<<endl;
        }
    }
    return 0;
}


