#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<long long int> vec;
    int n;
    cin>>n;
    long long int num1, num2;
    long long int temp=0;
    for(int i=0;i<3;i++){
        long long int item ;
        cin>>item;
        for(int j = 0;j<n-i-1;j++){
            temp = temp^item;
            cin>>item;
        }
        cout<<"i = "<<i<<" temp = "<<temp<<endl;
    }
    return 0;
}
