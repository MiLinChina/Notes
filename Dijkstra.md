//最短路径问题 戴克斯特拉算法
//
#define MaxSize 10
#define MAXCOST 10000
template<class T>
struct Graph
{
    T vertex[MaxSize];
    int arc[MaxSize][MaxSize];
    int vertexNum,arcNum;
};

void Dijkstra(Graph<string> G,int v)
{
    int dist[MaxSize];
    string path[MaxSize];
    int a[MaxSize];
    bool Final[MaxSize];
    for(int i = 0;i < G.vertexNum;i ++)
    {
        Final[i] = false;
        dist[i] = G.arc[v][i];
        if(dist[i] != MAXCOST)
        {
            path[i] = G.vertex[v] + G.vertex[i];
        }
        else
        {
            path[i] = " ";
        }
        s[0] = v;
        Final[v] = true;
        int num = 1;
        while(num < G.vertexNum)
        {
            int k = 0,min = MAXCOST;
            for(int i = 0;i < G.vertexNum;i ++)
            {
                 if (i == v)continue;
             if (!Final[i] && dist[i] < min)
             {
                 k = i;
                 min = dist[i];
             }                
         }
         cout<<dist[k]<<path[k]<<endl;
         s[num++] = k;
         Final[k] = true;
         for (int i = 0; i < G.vertexNum; i++)
         {
             if (!Final[i]&&dist[i] > dist[k] + G.arc[k][i])
             {
                 dist[i] = dist[k] + G.arc[k][i];
                 path[i] = path[k] + G.vertex[i];
             }
         }
     }
}