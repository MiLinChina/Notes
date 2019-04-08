//把数据分成两部
//从两部分中逐个选取最小的元素移动到新数组的末尾
//可以从上而下或从下而上进行
void mergeSortRecursive(string nums,int reg[],int start,int end)
{
    if(start >= end)
    {
        return;
    }
    int len = end - start;
    int mid = (len >> 1) + start;
    int start1 = start,end1 = mid;
    int start2 = mid + 1,end2 = end;
    mergeSortRecursive(nums,reg,start1,end1);
    mergeSortRecursive(nums,reg,strat2,end2);
    int k = start;
    while(start1 <= end1 && start2 <= end2)
    {
        reg[k++] = nums[start1] < nums[start2] ? nums[start1++] : nums[start2++];
    }
    while(start1 <= end1)
    {
        reg[k++] = nums[start1];
    }
    while(start2 <= end2)
    {
        reg[k++] = nums[start2++];
    }
    for(k = start;k <= end;k ++)
    {
        nums[k] = reg[k];
    }
}
void mergeSort(string nums,const int len)
{
    int reg[len];
    mergeSortRecursive(nums,reg,0,len - 1);
}