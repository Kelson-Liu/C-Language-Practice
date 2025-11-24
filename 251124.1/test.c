#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

// 猜数字
// 电脑产生一个随机数（1 - 100）
// 如果猜的数字比随机数大，反馈猜大了
// 如果猜的数字比随机数小，反馈猜小了
// 直到猜对，猜对结束

void menu()
{
	printf("******************\n");
	printf("***** 1.Play *****\n");
	printf("***** 0.Exit *****\n");
	printf("******************\n");
}

void game()
{
	int guess = 0;
	int i = 0;

	// 生成随机数
	// %100 范围:0-99,加一 1-100
	int num = rand() % 100 + 1;

	//printf("%d\n", num);

	// 猜数字
	while (1)
	{
		printf("\n猜数字:>");
		scanf("%d", &guess);
		if (guess < num)
		{
			printf("猜小了\n\n");
			i++;
		}
		else if (guess > num)
		{
			printf("猜大了\n\n");
			i++;
		}
		else
		{
			i++;
			printf("\n恭喜你猜对了\n你一共用了%d次猜对\n\n",i);
			break;
		}
	}
}

int main()
{
	int input = 0;
	// 设置随机数 强制类型转换 使用 time 返回的时间戳作为随机数生成的起点的值
	// 只需要设置一次
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();// 猜数字本体
			break;

		case 0:
			printf("\n退出游戏\n");
			break;

		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}