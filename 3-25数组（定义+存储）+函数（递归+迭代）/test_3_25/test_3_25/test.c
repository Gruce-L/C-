#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//一、递归函数:自己调用自己
		//递归常见的错误：栈溢出
		//（栈区放置局部变量，形式参数，函数调用）（堆区是动态内存分配区）
		//静态区放置全局变量，静态变量

		//1.练习：打印每一位
		
			//void Print(unsigned int n){
			//	if (n > 9){
			//		Print(n / 10);
			//	}
			//	printf("%d ", n % 10);
			//}
			//
			//int main(){
			//	unsigned int num = 0;
			//	scanf("%d", &num);
			//
			//	Print(num);
			//	//Print(123)：Print(123/10) + Print(123%10)
			//	//Print(12/10) + 2 + 3
			//	//1 2 3
			//
			//	return 0;
			//}
		//2.练习：

		//2.创建临时变量求字符串长度（未递归）

			//int my_strlen(char* str){
			//	int count = 0;
			//
			//	while (*str != 0){
			//		count++;
			//		str++;
			//	}
			//
			//	return count++;
			//}
			//	
			//int main(){
			//	char arr[] = "study";		//数组名是首元素地址-char地址
			//	int len = my_strlen(arr);
			//
			//	printf("%d\n", len);
			//
			//	return 0;
			//}
		//3，

		//3.未创建临时变量求字符串长度（递归）

			//int my_strlen(char* str){
			//	if (*str != '\0'){
			//		return 1 + my_strlen(str + 1);
			//		//不能换成str++：是先把str的值赋给返回值，然后str自增，值不一样
			//		//但也不推荐使用++str
			//	}
			//	else
			//	{
			//		return 0;
			//	}
			//}
			//
			//int main(){
			//	char arr[] = "study";		//数组名是首元素地址-char地址
			//	int len = my_strlen(arr);
			//
			//	/*1 + my_strlen("tudy");
			//	1 + 1 + my_strlen("udy");
			//	……
			//	1 + 1 + 1 + 1 + 1 + my_strlen("");
			//	1 + 1 + 1 + 1 + 1 + 0;
			//	5*/
			//
			//	printf("%d\n", len);
			//
			//	return 0;
			//}

//二、递归与迭代（迭代 >= 循环）

		//1.阶乘

			//int Fac(int n){
			//	if (n <= 1)
			//		return 1;
			//	else
			//	{
			//		return n * Fac(n - 1);
			//	}
			//}
			//
			//int main(){
			//	int n = 0;
			//	scanf("%d", &n);
			//	
			//	int ret = Fac(n);
			//	printf("ret=%d\n", ret);
			//
			//	return 0;
			//}

		//2.求第n个斐波那契数（递归版本）

			//int Fib(int n){
			//	if (n <= 2)
			//	{
			//		return 1;
			//	}
			//	else
			//	{
			//		return Fib(n - 1) + Fib(n - 2);
			//	}
			//}
			//
			//int main(){
			//	int n = 0;
			//	scanf("%d", &n);
			//
			//	int ret = Fib(n);
			//	printf("ret = %d\n", ret);
			//
			//	return 0;
			//}

		//3.求第n个斐波那契数（非递归版本）

			//int Fib(int n){
			//	int a = 1;
			//	int b = 1;
			//	int c = 1;
			//
			//	while (n > 2)
			//	{
			//		c = a + b;
			//		a = b;
			//		b = c;
			//		
			//		n--;
			//	}
			//
			//	return c;
			//}
			//
			//int main(){
			//	int n = 0;
			//	scanf("%d", &n);
			//	
			//	int ret = Fib(n);
			//	printf("ret = %d\n", ret);
			//
			//	return 0;
			//}

//三、数组

	//1.sizeof() 和 strlen()复习

		//	int main(){
			//	char arr1[] = { 'a', 'b', 'c' };
			//	char arr2[] = { 'a', 98, 'c' };
			//	char arr3[] = "abc";	//后面隐藏'\0'
			//
			//	printf("%d\n", sizeof(arr1));		//3
			//	printf("%d\n", sizeof(arr3));		//4
			//
			//	printf("%d\n", strlen(arr3));		//一直找到'\0'为止
			//	printf("%d\n", strlen(arr3));		//3
			//	return 0;
			//}
	
	//2.数组如何存储
		//p++ 和 *p++ 是同一个意思，*p++多走了一步无用功

		//int main(){
		//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		//	int* p = arr;
		//
		//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		//		//打印地址
		//		//printf("&arr[%d] =  %p\n", i, &arr[i]);
		//
		//		//顺序打印数组中元素
		//		//printf("%d ", *p);
		//		//p++;
		//	}
		//
		//	return 0;
		//}

	//3.二维数组：行可以省略，列不能省略

int main(){
	int arr[3][4] = { 1, 2, 3, 4, 5 };		//三行四列的二维数组
	int arr1[3][4] = { {1, 2}, {3, 4}, {5} };	//大括号的内部每个大括号都代表着每行中的数
	//char ch[3][5];		//三行五列的二维数组，每个元素的类型是char

	return 0;
}
	