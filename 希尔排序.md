//也称递减增量排序法，是非稳定排序算法
//将整个数组分为若干个子数组，分别进行插入排序
void swap(int x,int y)
{
    int t = x;
    x = y;
    y = t;
}
void shellSort(int a[],int len)
{
    int tmp;
    int h = 1;
    while(h < len / 3)
    {
        h = 3 * h + 1;
    }
    while(h >= 1)
    {
        for(int i = h;i < len;i ++)
        {
            for(int j = i;j >=h && a[j] < a[j-h];j -= h)
            {
                swap(a[j],a[j-h]);
            }
        }
    }
    h = h / 3;
}