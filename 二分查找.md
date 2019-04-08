//递归实现
void binarySearch(int a[],int h,int l,int target)
{
    int m = (l + h) / 2;
    if(l > h)
    {
        return 0;
    }
    if(target == a[m])
    {
        return m;
    }
    if(target < m)
    {
        return binarySearch(a,l,m - 1,target);
    }
    if(target > a[m])
    {
        return binarySearch(a,m + 1,h,target);
    }
}

//循环实现
void binarySearch(int a[],int n,int target)
{
    int l = 0,h = n,m = 0;
    while(l < h)
    {
        m = (l + h) / 2;
        if(target == a[m])
        {
            return m;
        }
        else if(target < a[m])
        {
            h = m;
        }
        else if(target > a[m])
        {
            l = m + 1;
        }
    }
    return 0;
}