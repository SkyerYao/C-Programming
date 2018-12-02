/*   经典的二分查找实现   */
int BinarySearch(int a[], int size, int p)
{
	int L = 0;
	int R = size - 1;
	// 如果查找空间不为空就继续查找
	while(L <= R){
		// 不使用mid=(L+R)/2是因为担心(L+R)过大溢出
		int mid = L+(R-L)/2;
		if(p == a[mid])
			return mid;
		else if(p > a[mid])
			L = mid + 1;
		else
			R = mid - 1;
	}
	// 未找到元素p，则返回-1
	return -1;
}



/*                  一种二分查找的拓展题目              */
/*  在包含size个元素的，从小到大排序的int数组a里查找比    */
/* 给定整数p小的，下标最大的元素。找到其下标，找不到返回-1 */
int LowerBound(int a[], int size, int p)
{
	int L = 0;
	int R = size - 1;
	int lastPos = -1;
	// 如果查找空间不为空就继续查找
	while(L <= R){
		// 不使用mid=(L+R)/2是因为担心(L+R)过大溢出
		int mid = L+(R-L)/2;
		if(a[mid] >= p)
			R = mid - 1;
		else{
			lastPos = mid;
			L = mid + 1;	
		}
	}
	return lastPos;
}
