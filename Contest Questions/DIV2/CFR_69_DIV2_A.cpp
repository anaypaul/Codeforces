#include<iostream>
#include<vector>
using namespace std;
vector<int> isPrime(100+1,1);
vector<int> primes;
void seive(){
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i<101; i++){
        if(isPrime[i] == 1){
            int j = 2;
            while(i*j < 101){
                isPrime[i*j] = 0;
                j++;
            }
        }
    }
    for(int i=0;i<101;i++){
        if(isPrime[i]==1){
            primes.push_back(i);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    seive();
    if(isPrime[n]==1 && isPrime[m]==1){
        int i;
        for(i = 0 ; i<primes.size();i++){
            if(n== primes[i]){
                break;
            }
        }
        if(primes[i] == n && primes[i+1]==m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}