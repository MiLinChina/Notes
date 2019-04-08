//01背包问题
//状态转换方程 f[i,j] = Max{f[i - 1,j - Wi] + Pi(j >= Wi),f[i - 1,j]}
void backPack(int m,vector<int> A)
{
    int n = A.size();
    int f[n][m + 1] = {0};
    for(int i = 0;i < n;i ++)
    {
        for(int j = 1;j <= m;j ++)
        {
            if(i == 0)
            {
                f[i][j] = (j >= A[j]) ? A[i] : 0;
                continue;
            }
            if(j >= A[i])
            {
                f[i][j] = max(f[i - 1][j],f[i - 1][j - A[i]] + A[i]);
            }
            else
            {
                f[i][j] = f[i - 1][j];
            }
        }
    }
}

//完全背包问题
//状态转换方程 f[i][v] = max(f[i - 1][v - k*c[i]] + k * w[i] | 0 <= k * c[i] <= v)
void backPack(int T, vector<int> W, vector<int> V)
{
    int f[T + 1] = {0};
    for (int i = 0; i < W.size(); i++)
    {
        for (int j = w[i]; j <= T;j++)
        {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
}

//多重背包问题
//状态转换方程 f[i][v] = max(f[i - 1][v - k*w[i]] + k*c[i]|0 <= k <= n[i])
void backPack(int T,vector<int> W,vector<int> cot,vector<int> V)
{
    int f[T + 1] = {0};
    for (int i = 0; i < W.size(); i++)
    {
        for (int k = 1; k <= cot[i]; k++)
        {
            for (int j = T; j >= w[i]; j--)
            {
                f[j] = max(f[j], f[j - w[i]] + v[i]);
            }
        }
    }
}