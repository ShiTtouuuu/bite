#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//2022_0728_
// 
//-------------------------------------------------------------------------------------
// 
// 以下记录了我从@比特科技 学习到的C语言入门
//		以及 github 的学习记录  
//		虽然起初的setting非常的不好 
// 
//-------------------------------------------------------------------------------------
// 
//
// 
// 
//-------------------------------------------------------------------------------------

//1.奇数判定0 - 100
/*
int main(void) {
	int i;
	for (i = 0; i < 101; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//-------------------------------------------------------------------------------------

//					switch语句 以及实现星期几的程序

/*
int main() {

	int day = 0;
	scanf("%d", &day);
		switch (day) {
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("thursday\n");
			break;
		case 3:
			printf("whednsday\n");
			break;
		case 4:
			printf("thursday\n");
			break;
		case 5:
			printf("friday\n");
			break;
		case 6:
			printf("saturday\n");
			break;
		case 7:
			printf("sunday\n");
			break;
		default:
			printf("eor");
			break;
	}

	return 0;
}
*/

//-------------------------------------------------------------------------------------
//							逻辑test


//3.switch test
// what is "m" and "n"?
//int main(void) {
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n) {
//			//swtich in the switch
//		case 1:
//			n++;
//		case 2:
//			m++; 
//			n++;
//			break;
//		}
//	case 4:
//			m++;
//			break;
//	default:
//			break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//4.							while loop
/*
int main(void) {

	int i = 0;
	
	//while (i < 11){
	//printf("%d ",i);
	//i++;
	//}

	
	//while (i < 11) {
	//	if (i == 5){
	//		break;
	//	}
	//	printf("%d ",i);
	//	i++;
	//}

	//while (i < 11) {
	//	if (i == 5) {
	//		continue;
	//	}
	//	printf("%d ", i);
	//	i++;
	//}
	//return 0;
 //}
 */

 //-------------------------------------------------------------------------------------
//							5.getchar

//int main(void) {
//
//	int ch = getchar();
//	//printf("%c", ch);
//	putchar(ch);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						getchar putchar

//int main() {
//	// ctrl + z  end system
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//
//		putchar(ch);
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						getchar的例子 实现登录程序

//6.password system
//int main(void) {
//
//	//	int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//	putchar(ch);
//
//	//
//	char password[20] = { 0 };//创建数组
//	printf("password:");//让user写密码
//	scanf("%s", password);//读取这个密码
//	printf("on more time(Y/N):");//让user确认
//	//
//	//getchar();// 拿走n
//	
//
//	// clear 缓冲区的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n') {
//	}
//	//
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("turn\n");
//	}
//	else {
//		printf("false\n");
//	}
//
//	return 0;
//}
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------

//							getchar语句

//7.int main(void) {
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//
//
//	return 0;
//}

//-------------------------------------------------------------------------------------
//								while语句

//8.int main(void) {
//
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d", i);
//		i++;//调整部分
//
//	}
//
//	return 0;
//
//}
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//								逻辑test

//9.int main(void) {
//
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
////		if (i == 5)
////			break;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//
//	return 0;
//}
//
//								逻辑test
//10.int main() {
//
//	int i = 0;
//	for (i = 1; i < 11; i++) {
//
//		printf("%d ", i);
//		//i = 5;
//		//i++;
//
//		int j = 0;
//		for (j = 0; j < 10; i++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//
//								逻辑test
//11.int main(void) {
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
//
//								逻辑test
//12.int main() {
//	//判断部分的省略 - 判断部分恒为真
//	for (;;) {
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------
//								逻辑test

//13.int main() {
//	// 9 times
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
//
//								逻辑test
//14.int main() {
//	// 3 times
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++) {
//		for (; j < 3; j++) {
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
//
//								逻辑test
//15.int main(void) {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	printf("%d %d", i, k);
//
//
//	return 0;
//}
//
//16.int main(void) {
//
//	int i = 1;
//	do {
// 
//		//if (i == 5)
//		//	break;
//		//if (i == 5)
//		//	continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}



//-------------------------------------------------------------------
//17.while for do while
//							18. 一个数字的阶乘

//int main(void) {
//	int i,n;
//	int fact = 1;
//
//	printf("number:");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		fact *= i;
//	}
//	printf("is: %d ", fact);
//
//	return 0;
//}

 
//-------------------------------------------------------------------------------------

//						19. 1 - 10 的阶乘

//int main(void) {
//	int i,n;
//	int fact = 1;
//	int sum = 0;
//
//	/*
//	for (i = 1; i <= 10; i++) {
//		fact = 1;
//		for (n = 1; n <= i; n++) {
//			fact *= n;
//		}
//		sum += fact;
//	}
//	*/
//
//								//最优解
//	for (i = 1; i <= 10; i++) {
//		fact *= i;
//		/*
//		算出1个数字的阶乘 并且储存 下一个数字直接在乘上去 然后加到sum中
//		10次循环后 sum里会储存1到10 的阶乘
//		*/
//		sum += fact;
//	}
//	printf("is: %d ", sum);
//
//	return 0;
//}



//-------------------------------------------------------------------

//					20.在一个有序数组中查找具体的某个数字n


//二分查找
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,24  };
//	int k = 0;//初始化
//	printf("what you want?\n");
//	scanf("%d", &k);  
//			  //输入要搜索的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	//循环二分查找
//	while(left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {//数字在中间数右边
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {//数字在中间数左边
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {//没有这个数字
//		printf("找不到你想要的数字\n");
//	}
//	return 0;
//}
 
//-------------------------------------------------------------------------------------
//								动态字符效果


//21. welcome to bit!!!!!
//#include <windows.h>
//
//int main(void) {
//
//	char arr1[] = "welcome to bite!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//时间控制
//		system("cls");//屏幕清空
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//-------------------------------------------------------------------
//									登录程序

//#include <string.h>
//int main(void) {
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++) {
//
//		printf("password:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("sucsessful\n");
//			break;
//		}
//		else
//		{
//			printf("password false\n");
//		}
//	}
//	if (i == 3) {
//		printf("false,quit.\n");
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------
//								猜数字游戏


//#include <stdlib.h>
//#include <time.h>
////猜数字游戏
////自动产生一个随机数
//
//void menu() {
//	printf("******************************\n");
//	printf("******		1. play		******\n");
//	printf("******		2. exit		******\n");
//	printf("******************************\n");
//}
//
//void game() {
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int guess = 0;
//
//	// rand function 0~32767
//
//	while (1) {
//		printf("cai shu zi:");
//		scanf_s("%d", &guess);
//		if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else {
//			printf("bingo\n");
//			break;
//		}
//	}
//}
//
//int mian() {
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do {
//		menu();
//		printf("cai shu zi\n");
//		scanf_s("%d", &input);
//
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("err , choise again\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//-------------------------------------------------------------------
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------


//								逻辑test

//int main(void) {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5)
//			printf("%d", i);
//	}
//
//	return 0;
//}
//
//								逻辑test
//int func(int a) {
//
//	int b;
//	switch (a) {
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//
//	return b;
//}
//int main() {
//
//	printf("%d", func(1));
// 
//}

//-------------------------------------------------------------------
//								输入3个数 自动排序

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a, &b, &c);
//
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//-------------------------------------------------------------------
//									最大公约数1.0

//int main() {
//	int m = 0;
//	int n = 0;
//
//	scanf("%d %d", &m, &n);
//
//	int max = 0;
//
//	if (m > n) {
//		max = n;
//	}
//	else {
//		max = m;
//
//	}
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("is:%d\n", max);
//			break;
//		}
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------
//									最大公约数2.0

//int mian(void) {
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (t = m % n) {
//		m = n;
//		n = t;
//	}
//	printf("is;%d\n", n);
//
//	return 0;
//}

//-------------------------------------------------------------------------------------
//								闰年

//										闰年
// 
//int main() {
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (y % 4 == 0) {
//
//			if (y % 100 != 0) {
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0) {
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ntotal:%d", count);
//	return 0;
//}

//-------------------------------------------------------------------------------------

//int main() {
//	int y = 0;
//	int count = 0;
//
//	for (y = 1000; y <= 2000; y++) {
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y% 400 == 0)) {
//			// && - and , || - or
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("total:%d", count);
//
//	return 0;
//}




//-------------------------------------------------------------------------------------
//								素数

// su shu
//										素数1.0
// 
//int main() {
//	define
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//
//		int j = 0;
//		for (j = 2; j < i; j++) {
//
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//										素数2.0
//
// 
//int main() {
// //define
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++) {
//		int j = 0;
//		int flag = 1;
//
//		for (j = 2; j < i; j++) {
//
//			if (i % j == 0) {
//
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ntotal:%d", count);
//	return 0;
//}


//										素数3.0
//sqrt  ルート
//#include <math.h>
//int main() {
//	//define
//	int i = 0;
//	int count = 0;
//
//	for (i = 101; i <= 200; i += 2) {
//		int j = 0;
//		int flag = 1;
//
//		for (j = 2; j <= sqrt(i); j++) {
//
//			if (i % j == 0) {
//
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ntotal:%d", count);
//
//	return 0;
//}
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------

//								goto 语句

//-------------------------------------------------------------------------------------
//
//											goto 
//int main() {
//
//	flag:
//	printf("2\n");
//	printf("3\n");
//
//	goto flag;
//
//	return 0;
//}
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------

//							关机程序

//#include <stdlib.h>
//#include <string.h>
//int main() {
//										//シャットダウン　システム1.0
//	//shutdown -s -t 60
//	
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 60");
//
//again:
//	printf("warming, shutdown before 1min, enter 123\n");
//	scanf("%s", input);
//	if (strcmp(input,"123")) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//int main() {
//	//									シャットダウン　システム2.0
//	//shutdown -s -t 60
//
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1) {
//		printf("warming, shutdown before 1min, enter 123\n");
//		scanf("%s", input);
//		if (strcmp(input, "123")) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------

//						************
//						*		   *
//						*   函数   *
//						*		   *
//						************

//-------------------------------------------------------------------------------------

//							strcpy

//#include <string.h>
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = " hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//-----------------------------------------------------------------------------------
//							memset

//#include <string.h>
//int mian() {
//
//	char arr[ ] = "hello bit";
//	memset(arr,'x', 5);
//
//	printf("%s\n", arr);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						function - strcpy

//#include <string.h>
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						自定义函数 找到2个数字的最大值

//int get_max(int x, int y) {
//	if (x > y) {//return maximum
//		return x;
//	}else {
//		return y;
//	}
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	
//	printf("%d", get_max(a, b));//可以传实数如 ：2，3   ；2+4，7；etc
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						自定义函数 交换2个值

//void is no return			
//				no good  需要取地址
// 
//void Swap(int x, int y) {//传值调用
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	printf("before: a=%d , b=%d \n", a, b);
//	Swap(a, b);		//函数调用 实际参数 
//	printf("after: a=%d , b=%d \n", a, b);
//	return 0;
//}
// 
//					需要靠地址和指针的知识
// 
//void Swap(int *pa, int *pb) {//传值调用
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	printf("before: a=%d , b=%d \n", a, b);
//	Swap(&a, &b);	 //形式参数
//	printf("after: a=%d , b=%d \n", a, b);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						用函数判断100 - 200 中的一个数是不是素数

//int is_prime(int n) {
//	//2 - n-1 
//	int j = 0;
//	for (j = 2; j < n; j++) {
//		if(n % j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main() {
//	// 100到200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1) {
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ntotal:%d", count);
//	return 0;
//}

//优化 开平方
//#include <math.h>
//int is_prime(int n) {
//	//2 - n-1 
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++) {
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main() {
//	// 100到200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1) {
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ntotal:%d", count);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						用函数实现闰年判断

//int is_leep_year(int a) {
//	return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//	
//}
//
//int main() {
//	int y = 0;
//	for (y = 1000; y <= 2000; y++) {
//		if (is_leep_year(y) == 1) {
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//-------------------------------------------------------------------------------------
//					用函数实现 二分查找

//int binary_search(int a[], int k, int s) {
//	int left = 0;
//	int right = s - 1;
//
//	while(left<=right) {
//		int mid = (left + right) / 2;
//		if (a[mid] > k) {
//			right = mid - 1;
//		}
//		else if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回位置的下表
//	//找不到就返回 -1
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret) {
//		printf("no\n");
//	}
//	else {
//		printf("is:%d\n", ret);
//	}
//	return 0;
//}

//-------------------------------------------------------------------------------------
//					函数调用前要先申明

//int main() {
//	int a = 10;
//	int b = 20;
//		//Add(a, b);函数申明
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
////函数定义
//int Add(int x, int y) {
//
//	return x + y;
//}

//-------------------------------------------------------------------------------------
//						头文件的创建 引用 

//#include "add.h"
//// or  int Add(int x, int y);
////两种都可以
// 
//#include "Sub.h"
//// or  int Sub(int x, int y);
//
//int main() {
//	//int a = 10;
//	//int b = 20;
//	//int c = Add(a, b);
//
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	
//	printf("%d\n", c);
//	return 0;
//}

//-------------------------------------------------------------------------------------
//						函数递归 recursion

////死递归 
////栈溢出
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

//------------------------------------------------------------------------------------- 
//			同递归实现‘输入一个数字 然后按照顺序排列

//void print(unsigned int n) {
//	if (n > 9) {//重要
//		print(n / 10);//重要
//	}
//	printf("%d ", n % 10);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//------------------------------------------------------------------------------------- 
//		Stack overfollow  栈溢出的例子

//int test(int n) {
//	if (n <= 10000) { //并不是加到了10000 而是空间不够了
//		test(n + 1);
//	}
//}
//
//int main() {
//
//	test(1);
//	return 0;
//}

//------------------------------------------------------------------------------------- 
//
//	栈区放的是		 局部变量 ， 函数形参
//
//	堆区放的是	 	 动态内存分配的 malloc/free ， calloc ， realloc
//
//	静态区放的是	 全局变量 ， 静态变量
// 
//	每一次 调用函数的时候 要占用栈区的内存空间 
// 
// 比如使用main函数的时候 开辟了一个栈帧空间  
// 又使用了test函数 开辟了栈帧空间
// 每一次使用test （调用函数）都开辟了一个栈帧空间
// 
// 于是栈区空间都满了
// 就会发生一个叫做 栈溢出 的东西！！！
// 
//------------------------------------------------------------------------------------- 
// 
// 写代码的时候
// 1.不能写死递归，都有跳出条件， 每次递归 笔触跳出条件
// 2.递归参差不能太深
// 
//------------------------------------------------------------------------------------- 
//					自定义一个strlen函数

////#include <string.h>
////int my_strlen(char* str) {
////	int count = 0;
////	while (*str != '\0') {
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int my_strlen(char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else {
//		return 0;
//	}
//}
//
//
//int main() {
//	char arr[] = "bit";
//	// ['b']['i']['t']{'\0']
//	//
//	//模拟一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//------------------------------------------------------------------------------------- 
//						用递归实现计算一个数的阶乘

//int Fac(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * Fac(n - 1);
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d", ret);
//	return 0;
//}

//------------------------------------------------------------------------------------- 
//					递归实现 斐波那契数列

//	大量计算 太慢了 算到40多就慢下来了  

//递归
//int count = 0;
//int Fib(int n) {
//	//统计第3个斐波那契数列的计算机次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2) {
//		return 1;
//	}
//	else{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//
//}
//
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count:%d", count);
//	return 0;
//}

//非递归
//int Fib(int n) {//用循环迭代
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	return 0;
//}

//	有些时候不用函数递归效率回更快
// 如果一个代码用递归写起来很简单 可读性高 用递归
// 如果一个代码用递归的方法后效率太慢 有缺陷，
// 那么 就用非递归的方法
//------------------------------------------------------------------------------------- 
//						逻辑test

//int main() {
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++) {
//		if (b >= 20)break;
//		if (b % 3 == 1) {
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d", a);
//	return 0;
//}

//1 - 100   how many'9'
//int main() {
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {//这一部分计算90以前的数字
//			count++;
//		}
//		if (i / 10 == 9) {//这一部分计算90以后的数字
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//计算1/1+1/2-1/3+1/4...+1/100的值

//int main() {
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//计算1/1+1/2-1/3+1/4...+1/100的值 优化版

//int main() {
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//数组比大小 打印最大值

//int main() {
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++) {
//		if (arr[10] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//	打印99乘法表

//int main() {
//	int a = 1;
//	int b = 1;
//	printf("------------------------------------------------------------------------------------------------------------------------\n");
//	for (a = 1; a < 10; a++) {
//		for (b = 1; b <= a; b++) {
//			printf(" %d * %d = %2d |",b, a, a * b);
//		}
//		printf("\n");
//	}
//	printf("------------------------------------------------------------------------------------------------------------------------");
//		return 0;
//}

int main() {

	return 0;
}
//------------------------------------------------------------------------------------- 
//
