#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//一、strcpy函数——字符串操作函数

	//char * strcpy(char * destination, char * source);
	//拷贝包含最后的'/0'
//int main(){
//	char arr1[20] = "################";
//	char arr2[] = "study";
//	
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//		//study\0###########,\0后面不会再打印
//
//	return 0;
//}

//二、memset函数

	//mem：memoery内存  memset：内存设置
	//void * memset ( void * ptr, int value, size_t num );
	//从开始替换指定字符位数
//int main(){
//	char arr[] = "hello world";
//	
//	memset(arr,'*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//三、自定义函数
	//举例：写一个函数交换两个整型变量的内容

	//错误写法（使用传值调用）：

	//void函数表示无返回，int表示有返回
//void swap(int a, int b){
	//结果未交换原因：主函数和自定义函数中的地址是不同的
	//刚刚下面的a和b是实参，上面的a和b是形参，这个函数是把实参传给形参
	//的时候，形参是实参的一份临时拷贝，对形参的改变不会影响到实参的
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d, n=%d\n", a, b);
//	swap(a,b);
//	printf("a=%d, n=%d\n", a, b);
//
//	return 0;
//}

	//正确写法（使用传址调用）：
	//传址调用：函数内部可以直接操作函数外部变量

	//void swap1(int *pa, int *pb){
//	int temp = 0;
//	temp = *pa;		//等价于temp = a;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d, n=%d\n", a, b);
//	swap1(&a, &b);
//	printf("a=%d, n=%d\n", a, b);
//
//	return 0;
//}

//四、练习：

	//是否需要改变变量中的值，是使用指针的标准
	//1.判断一个数是否为素数

	//int is_Prime(int n){
//	int j = 0;
//	//判断n是否为素数
//	for (j = 2; j <= sqrt(n); j++){
//		if (n%j == 0){
//			return 0;
//		}
//	}
//	//是素数
//	return 1;
//}
//	
//int main(){
//	int i = 0;
//	int num;
//	
//	for (int i = 101; i < 200; i+=2){
//		if (is_Prime(i) == 1){
//			printf("%d ", i);
//		}
//	}
//}

	//2.函数实现二分查找

	//int binary_Search(int arr[], int k, int right){	//实际上是int *arr[]
//	int left = 0;
//	//期望right结果值是9，但是为0
//	//
//
//	int middle = 0;
//
//	while (left <= right)
//	{
//		middle = (left + right) / 2;
//		if (arr[middle] > k){
//			right = middle - 1;
//		}
//		else if (arr[middle] < k)
//		{
//			left = middle + 1;
//		}
//		else
//			return middle;
//	}
//	//找不到
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int right = (sizeof(arr) / sizeof(int)) - 1;
//	scanf("%d", &k);
//	//当数组传参的时候，传过去一个数组名-本质上传的是数组的首元素地址  &arr[0]
//	//否则形参将会申请相同于实参的空间，导致浪费
//	int ret = binary_Search(arr, k, right);
//	//数组传参会发生降级—传过去的其实是首元素地址
//	if (ret == -1){
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

	//3.每调用一次这个函数，num值加一

	//void Add(int* p){
	//	(*p)++;
	//}
	//
	//int main(){
	//	int num = 0;
	//
	//	Add(&num);
	//	printf("%d\n", num);
	//	Add(&num);
	//	printf("%d\n", num);
	//
	//
	//	return 0;
	//}

//五、链式访问

	//int main(){
	//	//4321
	//	printf("%d", printf("%d", printf("%d", 43)));
	//	return 0;
	//}

//六、函数的声名和定义

	//#include "calc.h"	//引用自己定义的文件
	//
	//int main(){
	//	int a = 10;
	//	int b = 20;
	//	int c = Add(a, b);
	//
	//	printf("%d\n", c);
	//
	//	return 0;
	//}