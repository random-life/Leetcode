int LIS(int a[], int length)
{
    int *LIS = new int[length];
    for(int i = 0; i < length; ++i)
    {
        LIS[i] = 1; //初始化默认长度
        for(int j = 0; j < i; ++j) //前面最长的序列
            if(a[i] > a[j] && LIS[j]+1 > LIS[i])
                LIS[i] = LIS[j]+1;  
    }
    int max_lis = LIS[0];
    for(int i = 1; i < length; ++i)
        if(LIS[i] > max_lis)
            max_lis = LIS[i];
    return max_lis;  //取LIS的最大值
}