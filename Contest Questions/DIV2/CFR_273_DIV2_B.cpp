#include<iostream>
#include<vector>
using namespace std;
long long int Pairs(long long int n){
    return n*(n-1)/2;
}
int main(int argc, char const *argv[])
{
    long long int n,m,max,min;
    cin>>n>>m;
    if(m == 1){
        max = Pairs(n);
        min = max;
    }else{
        // cout<<"m>1"<<endl;
        max = Pairs(n-m+1);
        if(n%m==0){
            // cout<<"case 1"<<endl;
            long long int eq = (long long int)n/m;

            // cout<<n/m<<endl;
            min = m * Pairs(n/m);
        }else{
            // cout<<"case 2"<<endl;
            long long int eq = (long long int)n/m;
            long long int r = n%m;
            // cout<<"eq = "<<eq<<" r = "<<r<<" m-r ="<<m-r<<endl;
            // cout<<"*"<<r*Pairs(eq+1) <<endl;
            // cout<<"**"<<(m-r)*Pairs(eq)<<endl;
            min= r*Pairs(eq+1) + (m-r)*Pairs(eq);
        }
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
