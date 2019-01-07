#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    double answer=0.0;
    for(int i =0;i<n;i++){
        double x;
        cin>>x;
        answer += (x/100); 
    }
    cout<<((answer)/(double)n)*100.0<<endl;
    return 0;
}