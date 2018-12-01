/*  选择排序   */
Void SelectionSort(int a[], int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        // 每次循环后将第i小的元素放好
        int tmpMin = i;
        // 用来记录从第i个到第size-1个元素中，最小的那个元素的小标
        for(int j = i + 1; j < size; ++j)
        {
            if (a[j] < a[tmpMin])
                tmpMin = j;
        }
        // 将第i小的元素放在第i个位置上，并将原来占着第i个位子的元素挪到后面
        int tmp = a[i];
        a[i] = a[tmpMin];
        a[tmpMin] = tmp;
    }
}

/*   插入排序    */
void InsertionSort(int a[], int size)
{
    for (int i = 1; i < size; ++i)
    {   
        // a[i]是最左的无序元素，每次循环将a[i]放到合适位置
        for (int j = 0; j < i; ++j)
        {
            if (a[j] > a[i])
            {
                // 要把a[i]放到位置j，原下标j到i-1的元素都往后移一位
                int tmp = a[i];
                for (int k = i; k > j; --k)
                    a[k] = a[k-1];
                a[j] = tmp;
                break;
            }
        }
    }
}
