#include<iostream>
using namespace std;
int n;
int arr[505][2];
int map[505];
int main() {
    //init
    cin>>n;
    for(int i=1,a,b ; i<=n ; i++){
        cin>>a>>b;
        map[i]=a;
        arr[a][0]=i;
        arr[b][1]=i;
    }
    
    int mode=1;
    int res=0;
    for(int i=1,a,b ; i<=n ; i++){
        a=arr[map[i]][0];
        b=arr[map[i]][1];
        //cout<<a<<" "<<b<<"\n";
        if(mode==1){
            if(a>b){
                mode=2;
                res++;
            }
        }
        else if(mode==2){
            if(a<b){
                mode=1;
                res++;
            }
        }
    }
    cout<<res<<'\n';
    return 0;
}
