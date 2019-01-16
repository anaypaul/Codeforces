#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    vector<long long int> arr;
    for(long long int i = 0;i<n;i++){
        long long int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    long long int i = 0;
    long long int j = n-1;
    long long int max_diff = arr[j] - arr[i];
    long long int ways = 0;
    long long int count1 = 0;
    long long int count2 = 0;
    if(arr[0]!=arr[n-1]){
        for(long long int i = 0;i<n;i++){
            if(arr[0]==arr[i]){
                count1++;
            }
        }
        for(long long int j=n-1;j>=0;j--){
            if(arr[n-1] == arr[j]){
                count2++;
            }
        }
        ways = count1 * count2;
        cout<<max_diff<<" "<<ways<<endl;
    }else{
        if(n==2){
            cout<<0<<" "<<1<<endl;
        }else{
            cout<<0<<" "<<(n*(n-1))/2<<endl;
        }
    }
    return 0;
}
