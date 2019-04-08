//选出数组中最小的元素，将它与数组第一个元素交换
//选出剩下元素中最小的与数组第二位交换
//共进行 n²/2 次交换，n 次交换
void selectionSort()
{
    string nums;
    cin>>nums;
    int n = nums.length;
    int min = nums[1];
    for(int i = 0;i < n - 1;i ++)
    {
        nums[i] = min;
        for(int j = i + 1;j < n - 1;j ++)
        {
            if(nums[j] < nums[i + 1])
            {
                min = nums[j];
            }
        }
    }
}