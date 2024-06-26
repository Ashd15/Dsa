#include<iostream>
#include<vector>
#include<map>
using namespace std;
int unique(vector<int>&ar)
{
    map<int,int>hash;
    for(int i=0;i<ar.size();i++)
    {
        hash[ar[i]]++;
    }
    for(int i=0;i<ar.size();i++)
    {
        if(hash[ar[i]]<=1)
        {
            return ar[i];
        }
    }
    return -1;
}
int main()
{
    vector<int>ar={1,1,2,2,3,4,4,3,5};
    int ans=unique(ar);
    cout<<ans;
    return 0;

}