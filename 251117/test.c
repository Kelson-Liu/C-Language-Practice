#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int k = 0;

	scanf("%d", &k);

	// 在一个有序数组中查找具体的某个数字 k

	//顺序查找 效率低

	/*for (i = 0;i < 10;i++)
	{
		if (k == arr[i])
		{
			printf("%d 在数组中的下标是 %d", k, i);
			break;
		}
	}

	if (i == 10)
	{
		printf("未找到");
	}*/

	//二分查找

	int left = 0;
	int right = 10 - 1;

	while (left <= right)//左右指针之间还有元素时
	{
		int mid = (left + right) / 2; //算当前 left 和 right 的 mid，否则 mid 不更新会死循环
		if (arr[mid] < k) //mid 比 k 小，说明 k 在 mid 右侧
		{
			left = mid + 1; //把左指针放到 mid 右侧，查找 mid 右侧的项
		}
		else if (arr[mid] > k)//mid 比 k 大，说明 k 在 mid 左侧
		{
			right = mid - 1;//把右指针放到 mid 左侧，查找 mid 左侧的项
		}
		else //mid = k
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)//左指针在右指针的
	{
		printf("未找到");
	}
	return 0;
}