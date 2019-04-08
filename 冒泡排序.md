//左右不断交换相邻的元素
void bubbleSort(string nums)
{
    int n = nums.length;
    int tmp;
    for(int i = 0;i < n;i ++)
    {
        for(int j = i + 1;j < n;j ++)
        {
            if(nums[j] < nums[i])
            {
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
}