#include<algorithm>
#include<vector>
#include<iostream>
#include<utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = n*n;
    int s = (x/2)/n;
    int k = 1;
    int total = x + 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j < s;j++){
            cout<<k<<" "<<total-k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}