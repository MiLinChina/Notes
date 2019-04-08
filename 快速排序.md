//先取一个数作为基准
//将大于基准数的放在基准数之后，小于基准数的放到基准数之前
//再将大数部分与小数部分进行分别排序

//递归法
void swap(int x,int y)
{
    int t = x;
    x = y;
    y = t;
}
void quickSortRecursive(string nums,int start,int end)
{
    if(start == end)
    {
        return;
    }
    int m = nums[end];
    int l = start;
    int r = end - 1;
    while(l < r)
    {
        while(nums[l] < m && l < r)
        {
            l ++;
        }
        while(nums[r] >= m && l < r)
        {
            r --;
        }
        swap(nums[l],nums[r]);
    }
    if(nums[l] >= nums[end])
    {
        swap(nums[l],nums[end]);
    }
    else
    {
        l ++;
    }
    if(l)
    {
        quickSortRecursive(nums,start,left - 1);
    }
    quickSortRecursive(nums,left + 1;end);
}
void quickSort(int nums,int len)
{
    quickSortRecursive(nums,0,len - 1);
}

//迭代法
void swap(int x,int y)
{
    int t = x;
    int x = y;
    int y = t;
}
typedef struct _Range
{
    int start,end;
} Range;
Range new_Range(int s,int e)
{
    Range r;
    r.start = s;
    r.end = e;
    return r;
}
void quickSort(int nums,const int len)
{
    if(len <= 0)
    {
        return;
    }
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0,len - 1);
    while(p)
    {
        Range range = r[--p];
        if(range.start >= range.end)
        {
            continue;
        }
        int m = nums[(range.start + range.end) / 2]
        int l = range.start;
        int r = range.end;
        while(l <= r)
        {
            while(nums[l] < m)
            {
                ++ l;
            }
            while(nums[r] > m)
            {
                -- r;
            }
            if(l <= r)
            {
                swap(nums[l],nums[r]);
                l ++;
                r --;
            }
        }
        if(range.start < r)
        {
            r[p++] = new_Range(range.start,r);
        }
        if(range.end > l)
        {
            r[p++] = new_Range(range.end,l);
        }
    }
}