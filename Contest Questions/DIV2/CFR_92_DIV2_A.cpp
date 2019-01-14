#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b;
    cin>>n>>a>>b;
    int x_start = a+1;
    int x_end = n;
    int y_start = n-b;
    int y_end = n;
    int start = x_start > y_start ? x_start : y_start;
    int end = x_end < y_end ? x_end : y_end;
    cout<<end-start+1<<endl;
    return 0;
}
