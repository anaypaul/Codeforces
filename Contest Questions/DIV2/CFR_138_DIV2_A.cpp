#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<4*(sqrt(a*b/c)+sqrt(b*c/a)+sqrt(a*c/b))<<endl;
    
    return 0;
}
