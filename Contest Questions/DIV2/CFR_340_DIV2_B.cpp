#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int count_1 = 0;
    int flips = 0;
    int nut;
    cin>>nut;
    if(nut==1){count_1++;}
    int prev_nut=nut;
    for(int i = 1;i<n;i++){
        cin>>nut;
        if(prev_nut == nut){
            if(prev_nut ==1){
                count_1++;
            }
        }else{
            if(nut==1){
                count_1++;
            }
            prev_nut = nut;
            flips++;
        }
    }
    cout<<"flips ="<<flips<<" count_1 ="<<count_1<<endl;
    if(n==count_1){
        cout<<"answer ="<<1<<endl;
    }else{
        if(flips <= count_1){
            cout<<flips<<endl;
        }else{
            cout<<count_1<<endl;
        }

    }
    return 0;
}
