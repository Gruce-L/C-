#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//һ���ݹ麯��:�Լ������Լ�
		//�ݹ鳣���Ĵ���ջ���
		//��ջ�����þֲ���������ʽ�������������ã��������Ƕ�̬�ڴ��������
		//��̬������ȫ�ֱ�������̬����

		//1.��ϰ����ӡÿһλ
		
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
			//	//Print(123)��Print(123/10) + Print(123%10)
			//	//Print(12/10) + 2 + 3
			//	//1 2 3
			//
			//	return 0;
			//}
		//2.��ϰ��

		//2.������ʱ�������ַ������ȣ�δ�ݹ飩

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
			//	char arr[] = "study";		//����������Ԫ�ص�ַ-char��ַ
			//	int len = my_strlen(arr);
			//
			//	printf("%d\n", len);
			//
			//	return 0;
			//}
		//3��

		//3.δ������ʱ�������ַ������ȣ��ݹ飩

			//int my_strlen(char* str){
			//	if (*str != '\0'){
			//		return 1 + my_strlen(str + 1);
			//		//���ܻ���str++�����Ȱ�str��ֵ��������ֵ��Ȼ��str������ֵ��һ��
			//		//��Ҳ���Ƽ�ʹ��++str
			//	}
			//	else
			//	{
			//		return 0;
			//	}
			//}
			//
			//int main(){
			//	char arr[] = "study";		//����������Ԫ�ص�ַ-char��ַ
			//	int len = my_strlen(arr);
			//
			//	/*1 + my_strlen("tudy");
			//	1 + 1 + my_strlen("udy");
			//	����
			//	1 + 1 + 1 + 1 + 1 + my_strlen("");
			//	1 + 1 + 1 + 1 + 1 + 0;
			//	5*/
			//
			//	printf("%d\n", len);
			//
			//	return 0;
			//}

//�����ݹ������������ >= ѭ����

		//1.�׳�

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

		//2.���n��쳲����������ݹ�汾��

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

		//3.���n��쳲����������ǵݹ�汾��

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

//��������

	//1.sizeof() �� strlen()��ϰ

		//	int main(){
			//	char arr1[] = { 'a', 'b', 'c' };
			//	char arr2[] = { 'a', 98, 'c' };
			//	char arr3[] = "abc";	//��������'\0'
			//
			//	printf("%d\n", sizeof(arr1));		//3
			//	printf("%d\n", sizeof(arr3));		//4
			//
			//	printf("%d\n", strlen(arr3));		//һֱ�ҵ�'\0'Ϊֹ
			//	printf("%d\n", strlen(arr3));		//3
			//	return 0;
			//}
	
	//2.������δ洢
		//p++ �� *p++ ��ͬһ����˼��*p++������һ�����ù�

		//int main(){
		//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		//	int* p = arr;
		//
		//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		//		//��ӡ��ַ
		//		//printf("&arr[%d] =  %p\n", i, &arr[i]);
		//
		//		//˳���ӡ������Ԫ��
		//		//printf("%d ", *p);
		//		//p++;
		//	}
		//
		//	return 0;
		//}

	//3.��ά���飺�п���ʡ�ԣ��в���ʡ��

int main(){
	int arr[3][4] = { 1, 2, 3, 4, 5 };		//�������еĶ�ά����
	int arr1[3][4] = { {1, 2}, {3, 4}, {5} };	//�����ŵ��ڲ�ÿ�������Ŷ�������ÿ���е���
	//char ch[3][5];		//�������еĶ�ά���飬ÿ��Ԫ�ص�������char

	return 0;
}
	