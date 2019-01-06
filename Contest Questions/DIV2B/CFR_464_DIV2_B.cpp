#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int min_index = -1;
    long long int min = INT64_MAX;
    long long int answer = -1;
    for(long long int i = 1 ; i <= k ;i++){
        long long int cap;
        cin>>cap;
        if( n%cap < min ){
            min = n%cap;
            min_index = i;
            answer = n/cap;
        }
    }
    cout<<min_index<<" "<<answer<<endl;
    return 0;
}