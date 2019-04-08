void swap(int x,int y)
{
    int t = x;
    x = y;
    y = t;
}
void maxHeapify(int a[],int start,int end)
{
    int dad = start;
    int son = dad * 2 + 1;
    while(son <= end)
    {
        if(son + 1 <= end && a[son] < a[son + 1])
        {
            son ++;
        }
        if(a[dad] > a[son])
        {
            return;
        }
        else
        {
            swap(a[dad],a[son])
            dad = son;
            son = dad * 2 + 1;
        }
    }
}
void heapSort(string nums,int len)
{
    for(int i = len / 2 - 1; i > 0; i --)
    {
        maxHeapify(nums,i,len - 1);
    }
    for(int  i = len - 1; i > 0;i --)
    {
        swap(nums[0],nums[i]);
        maxHeapify(nums,0,i - 1);
    }
}