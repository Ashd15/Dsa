#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>ar={1,0,1,1,0,1,1,0};
    int ones=0,zero=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==1)
        {
            ones++;
        }
        else
        {
            zero++;
        }
    }
    cout<<ones<<" "<<zero;
    return 0;
}