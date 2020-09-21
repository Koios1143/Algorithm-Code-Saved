#include<cstdio>
#include<cstring>
using namespace std;
 
bool chess[10][10], visited[10];
int n, k;
long long ans;
void Dfs(int cur, int x, int y)
{
    if(cur == k){
        ans++;
        return;
    }
    for(int i = x+1; i <= n; i++)
        for(int j = 0; j <= n; j++){
            if(chess[i][j] && !visited[j]){
                visited[j] = true;
                Dfs(cur+1, i, j);
                visited[j] = false;
            }
        }
}
int main()
{
    scanf("%d%d",&n,&k);
    while(n!=-1 || k!=-1){
        char input; ans = 0;
        memset(chess, 0, sizeof(chess)), memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            getchar();
            for(int j = 1; j <= n; j++){
                scanf("%c",&input);
                if(input == '.') chess[i][j] = false;
                else if(input == '#') chess[i][j] = true;
            }
        }
        Dfs(0, 0, 0);
        printf("%lld\n",ans);
        scanf("%d%d",&n,&k);
    }
    return 0;
}
