#include <iostream>
using namespace std;
int arr[4294967296]={0};
int main(int argc, const char * argv[]) {
    unsigned int n;
    cin>>n;
    for(unsigned int i=0,flag ; i<n ; i++)
    {
        cin>>flag;
        arr[flag]++;
    }
    unsigned int m;
    cin>>m;
    for(unsigned int i=0,flag2 ; i<m ; i++)
    {
        cin>>flag2;
        cout<<arr[flag2]<<endl;
    }
    return 0;
}

