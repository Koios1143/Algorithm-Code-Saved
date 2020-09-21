#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
#include<stack>
using namespace std;
int n,m,s;//nodes miles start
struct dot{
//package a dot with its px,high,connected roads
//keep all ans in a dot
int px;
int val;
vector<int> next;
int w_ans=0;
int c_ans=0;
};
dot d[10010];
inline int walk_bfs(int end,dot s){
    queue<dot> q;
    bool inq[10010];
    memset(inq,0,sizeof(inq));
    inq[s.px]=true;
    q.push(s);
    while(!q.empty()){
        auto now=q.front();
        if(now.val==end){
            return now.w_ans*6;
        }
        for(auto i : now.next){
            if(!inq[i]){
                d[i].w_ans=now.w_ans+1;
                if(d[i].val==end){
                    return d[i].w_ans*6;
                }
                q.push(d[i]);
                inq[i]=true;
            }
        }
        q.pop();
    }
    return -1;
}

inline int car_dfs(int end,dot s){
    queue<dot> q;
    bool inq[10010];
    memset(inq,0,sizeof(inq));
    inq[s.px]=true;
    q.push(s);
    while(!q.empty()){
        auto now=q.front();
        if(now.val==end){
            return now.c_ans;
        }
        dot Min;
        Min.px=-1;
        Min.val=2147483647;
        for(auto i : now.next){
        	//remind that next high must lower or eq than now
            if(d[i].val<=Min.val&&d[i].val<=now.val){
                Min.val=d[i].val;
                Min.px=d[i].px;
            }
        }
        for(auto i: now.next){
            if(d[i].val==Min.val&&!inq[i]){
                d[i].c_ans=now.c_ans+1;
                inq[i]=true;
                q.push(d[i]);
            }
        }
        q.pop();
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    dot zero;//init the dots
    zero.px=-1;
    zero.val=-1;
    zero.c_ans=0;
    zero.w_ans=0;
    zero.next.clear();
    for(int times=1 ; times<=t ; times++){
        for(int i=0 ; i<10010 ; i++){
            d[i]=zero;
            d[i].next.clear(); 
        }
        cin>>n>>m>>s;
        int end=2147483647;//find the end high
        for(int i=0,tmp ; i<n ; i++){
            cin>>d[i].val;
            d[i].px=i;
            if(end>d[i].val){
                end=d[i].val;
            }
        }
        for(int i=0,a,b ; i<m ; i++){
            cin>>a>>b;
            d[a].next.push_back(b);
            d[b].next.push_back(a);
        }
        int walk=walk_bfs(end,d[s]),car=car_dfs(end,d[s]);
        if(walk==-1&&car==-1){
            cout<<"Case #"<<times<<": Call 119!\n";
        }
        else if(car==-1){
            cout<<"Case #"<<times<<": "<<walk<<"\n";
        }
        else{
            cout<<"Case #"<<times<<": "<<abs(car-walk)<<"\n";
        }
    }
    return 0;
}

