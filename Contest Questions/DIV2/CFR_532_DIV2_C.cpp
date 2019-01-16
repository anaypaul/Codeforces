#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<iomanip>
#define PI 3.14159265
using namespace std;
int main(int argc, char const *argv[])
{
    double n,r;
    cin>>n>>r;
    double angle = PI/2 - PI/n;
    double R = (r *cos(angle))/(1-cos(angle));
    cout<<fixed<<std::setprecision(10)<<R<<endl;
    return 0;
}
