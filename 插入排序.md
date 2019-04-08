//将新进入的元素插入到已存在的有序数组中，使得新数组依然有序
void insertSort(int a[])
{
    int len;
    len = a[].length;
    int tmp;
    for(int i = 1;i < len;i ++)
    {
        tmp = a[i];
        for(j = i - 1;j >= 0 && tmp < a[j];j --)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = tmp;
    }
}