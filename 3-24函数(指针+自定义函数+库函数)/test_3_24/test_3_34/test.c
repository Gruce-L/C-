#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//һ��strcpy���������ַ�����������

	//char * strcpy(char * destination, char * source);
	//������������'/0'
//int main(){
//	char arr1[20] = "################";
//	char arr2[] = "study";
//	
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//		//study\0###########,\0���治���ٴ�ӡ
//
//	return 0;
//}

//����memset����

	//mem��memoery�ڴ�  memset���ڴ�����
	//void * memset ( void * ptr, int value, size_t num );
	//�ӿ�ʼ�滻ָ���ַ�λ��
//int main(){
//	char arr[] = "hello world";
//	
//	memset(arr,'*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//�����Զ��庯��
	//������дһ�����������������ͱ���������

	//����д����ʹ�ô�ֵ���ã���

	//void������ʾ�޷��أ�int��ʾ�з���
//void swap(int a, int b){
	//���δ����ԭ�����������Զ��庯���еĵ�ַ�ǲ�ͬ��
	//�ո������a��b��ʵ�Σ������a��b���βΣ���������ǰ�ʵ�δ����β�
	//��ʱ���β���ʵ�ε�һ����ʱ���������βεĸı䲻��Ӱ�쵽ʵ�ε�
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

	//��ȷд����ʹ�ô�ַ���ã���
	//��ַ���ã������ڲ�����ֱ�Ӳ��������ⲿ����

	//void swap1(int *pa, int *pb){
//	int temp = 0;
//	temp = *pa;		//�ȼ���temp = a;
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

//�ġ���ϰ��

	//�Ƿ���Ҫ�ı�����е�ֵ����ʹ��ָ��ı�׼
	//1.�ж�һ�����Ƿ�Ϊ����

	//int is_Prime(int n){
//	int j = 0;
//	//�ж�n�Ƿ�Ϊ����
//	for (j = 2; j <= sqrt(n); j++){
//		if (n%j == 0){
//			return 0;
//		}
//	}
//	//������
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

	//2.����ʵ�ֶ��ֲ���

	//int binary_Search(int arr[], int k, int right){	//ʵ������int *arr[]
//	int left = 0;
//	//����right���ֵ��9������Ϊ0
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
//	//�Ҳ���
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int right = (sizeof(arr) / sizeof(int)) - 1;
//	scanf("%d", &k);
//	//�����鴫�ε�ʱ�򣬴���ȥһ��������-�����ϴ������������Ԫ�ص�ַ  &arr[0]
//	//�����βν���������ͬ��ʵ�εĿռ䣬�����˷�
//	int ret = binary_Search(arr, k, right);
//	//���鴫�λᷢ������������ȥ����ʵ����Ԫ�ص�ַ
//	if (ret == -1){
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}

	//3.ÿ����һ�����������numֵ��һ

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

//�塢��ʽ����

	//int main(){
	//	//4321
	//	printf("%d", printf("%d", printf("%d", 43)));
	//	return 0;
	//}

//���������������Ͷ���

	//#include "calc.h"	//�����Լ�������ļ�
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