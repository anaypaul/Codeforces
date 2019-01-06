#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int k2, k3, k5, k6;
    cin>>k2>>k3>>k5>>k6;
    long long int min_256 = k2 < k5 ? k2<k6 ? k2: k6 : k5<k6 ? k5:k6;
    long long int sum = min_256 * 256;
    k2 = k2-min_256;
    k5 = k5-min_256;
    k6 = k6-min_256;
    long long int min_32 = k2<k3 ? k2 : k3;
    sum = sum + min_32 *32;
    cout<<sum<<endl;
    return 0;
}
