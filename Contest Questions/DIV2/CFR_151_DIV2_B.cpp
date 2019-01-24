#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     vector<long long int> arr;
//     vector<long long int> hash(10001,0);
//     for(long long int i =0; i<n;i++){
//         long long int x;
//         cin>>x;
//         hash[x]++;
//         arr.push_back(x);
//     }
//     sort(arr.begin(), arr.end());
//     long long int median ;
//     if(n%2==1){
//         median = arr[n/2];
//     }else{
//         median = (arr[n/2] + arr[n/2-1])/2;
//         median = (long long int)median;
//     }
//     // cout<<"Median : "<<median<<endl;
//     for(long long int i = 0; i<(n/2); i++){
//         long long int j = n-1-i;
//         while(arr[i] < arr[j] && (arr[i]!=median || arr[j]!=median)){
//             // cout<<"operation at i = "<<i<<endl;
//             arr[i] +=1;
//             arr[j] -=1;
//             if(arr[i] == arr[j]){
//                 break;
//             }
//         }

//     }

//     // for(std::vector<int>::iterator itr = arr.begin(); itr != arr.end(); itr++){
//     //     cout<<*itr<<" ";
//     // }
//     // cout<<endl;
//     sort(arr.begin(), arr.end());
    
//     if(n%2==1){
//         median = arr[n/2];
//     }else{
//         median = (arr[n/2] + arr[n/2-1])/2;
//         median = (long long int)median;
//     }
//     // cout<<"Median : "<<median<<endl;
//     for(long long int i = 0; i<(n/2); i++){
//         long long int j = n-1-i;
//         while(arr[i] < arr[j] && (arr[i]!=median || arr[j]!=median)){
//             // cout<<"operation at i = "<<i<<endl;
//             arr[i] +=1;
//             arr[j] -=1;
//             if(arr[i] == arr[j]){
//                 break;
//             }
//         }

//     }

//     // for(std::vector<int>::iterator itr = arr.begin(); itr != arr.end(); itr++){
//     //     cout<<*itr<<" ";
//     // }
//     // cout<<endl;
//     sort(arr.begin(),arr.end());
//     long long int ans = -1;
//     long long int prev = arr[0];
//     long long int c = 1;
//     for(long long int i = 1;i<n;i++){
//         if(prev == arr[i]){
//             c++;
//         }else{
//             prev = arr[i];
//             c = 1;
//         }
//         if(ans < c){
//             ans = c;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }
int main(){
    long long int n;
    cin>>n;
    vector<long long int> arr;
    long long int sum = 0;
    for(int i = 0;i<n;i++){
        long long int x;
        cin>>x;
        sum += x;
        arr.push_back(x);
    }
    if(sum%n==0){
        cout<<n;
    }else{
        cout<<n-1;
    }
    return 0;
}