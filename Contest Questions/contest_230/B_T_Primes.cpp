#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    long long int n=1000000;
    vector<bool> isPrime(n+1, true);

    isPrime[0] = false;
    isPrime[1] = false;
    
    long long int i = 2;
    while(i<n+1){
        if(isPrime[i] == true && i*i <n+1){
            long long int j = 2;
            while(j*i < n+1 ){
                isPrime[i*j] = false;
                j++;
            }
        }
        i++;
    }

    int t;
    cin>>t;
    while(t--){
        long long int x;
        cin>>x;
        long long int root = sqrt(x);
        if(isPrime[root]== true && root*root == x ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}