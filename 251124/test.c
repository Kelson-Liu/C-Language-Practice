#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <Windows.h>

// 多个字符从两端移动，向中间汇聚
// ##################
// W################!
// We##############!!
// Wel############!!!
// ...
// Welcome to BJUT!!!

// 思路：将两组数据分别储存，把 arr1 对应数据按序覆盖到 arr2 中

int main()
{
	// 保存两组数据，原数据和井号数据

	char arr1[] = "Welcome to BJUT!!!";
	char arr2[] = "##################";

	// 定义左右下标
	int left = 0;
	int right = strlen(arr1) - 1; 
	// 储存下标需要减一，因为下标从零开始数
	// int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	// 因为sizeof算/0
	while (left < right)
	{
		// 将#数据替换成源数据
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		// 打印
		printf("%s\n", arr2);

		// 且慢！
		Sleep(100); // 单位ms

		// 修改左右下标
		left++;
		right--;
	}

	return 0;
}