#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//2022_0728_
// 
//switch
//getchar putchar
//for

//323起为练习
//20.在一个有序数组中查找具体的某个数字n

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


//2.switch date test
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


//3.switch test
// what is "m" and "n"?
/*
int main(void) {
	int n = 1;
	int m = 2;
	switch (n) {
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) {
			//swtich in the switch
		case 1:
			n++;
		case 2:
			m++; 
			n++;
			break;
		}
	case 4:
			m++;
			break;
	default:
			break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}
*/

//4.while loop
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


//5.getchar
//int main(void) {
//
//	int ch = getchar();
//	//printf("%c", ch);
//	putchar(ch);
//	return 0;
//}


//getchar putchar
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

//12.int main() {
//	//判断部分的省略 - 判断部分恒为真
//	for (;;) {
//		printf("hehe\n");
//	}
//
//	return 0;
//}

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

//17.while for do while

//18. 一个数字的阶乘
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

//19. 1 - 10 的阶乘
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
//	//最优解
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


//20.在一个有序数组中查找具体的某个数字n
//二分查找
int main(void) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,24  };
	int k = 0;//初始化
	printf("what you want?\n");
	scanf("%d", &k);  
			  //输入要搜索的数字
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数

	int left = 0;
	int right = sz - 1;
	//循环二分查找
	while(left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < k) {//数字在中间数右边
			left = mid + 1;
		}
		else if (arr[mid] > k) {//数字在中间数左边
			right = mid - 1;
		}
		else {
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right) {//没有这个数字
		printf("找不到你想要的数字\n");
	}
	return 0;
}


