#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//�⺯��

//1.�ַ������� strlen 
// ���ҵĽ�β��'\0'
//size_t strlen(const char* str)
// size_t���޷������� size_t==unsigned int
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { "abcdefgh"};//err �ҵ��������ֵ
//	int ret=strlen(arr1);
//	printf("%d\n", ret);
//	if (strlen(arr1) - strlen(arr2) > 0)//��Ϊstrlen���ص����޷�������
//		printf("hahha");
//	else
//		printf("hehhehe");
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//  assert(str);//����
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)
//{
//	char* start =str;
//	char* end = str;
//	while (*str!='\0')
//	{
//		str++;
//		end++;
//	}
//	return (int)(end - start);
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdefg";
//	int ret=my_strlen(arr1);
//	printf("%d\n", ret);
//	if (my_strlen(arr1) - my_strlen(arr2) > 0)//����������int
//		printf("hahahaha");
//	else
//		printf("hehhehehe");
//	return 0;
//}

//2.�ַ������� strcpy 
// Դ�ַ�������Ҫ��'\0'����
// char* strcpy(char* str1,const char* str2)
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	strcpy(arr1, arr2);//��arr2���Ƶ�arr1��
//	printf("%s", arr1);
//	return 0;

//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1!=NULL);
//	assert(str2);
//	while (*str2!='\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return str1;
//}

//�Ż�
char* my_strcpy(char* dest, const char* str)
{
	assert(dest != NULL);
	assert(str);
	char* ret = dest;
	while (*dest++==*str++)//�Ƚ����ã���++
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcd";
	char arr2[]="defg";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}

//3.�ַ���׷�� strcat
//Ҫ׷�ӵ��ַ�����β������'\0',�����Լ�׷���Լ�
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//׷�� 1.���ҵ�Ŀ���ַ�����'\0',
//     2.��׷��
//char* my_strcat(char* dest, const char* str)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	
//	while (*str!='\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	return dest;
//}
//�Ż�
//char* my_strcat(char* dest, const char* str)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//4.strcmp �ַ����Ƚϣ����ǱȽϳ���
//int main()
//{
//	char a1[] = { "abcd" };
//	char a2[] = { "bcde" };
//	int ret=strcmp(a1, a2);
//	printf("%d", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char a1[] = { "bcdefg" };
//	char a2[] = { "bcdef" };
//	int ret=my_strcmp(a1, a2);
//	printf("%d", ret);
//	return 0;
//}

//�ܳ������Ƶĺ���
//1.strncpy
//char* strncpy(char* str1,const char* str2,size_t num)
//int main()
//{
//	char arr1 [] = "abcd******";
//	char arr2[] = "def";
//	strncpy(arr1,arr2, 6);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//1.�ȸ���Ҫ���Ƶĸ���
//2.�����Ƿ����Ҫ���Ƶĸ���
//3.���ڼ�'\0'
//4.С�ھ�ֱ���˳�
//char* my_strncpy(char* dest, const char* str, int n)
//{
//	char* start = dest;
//	while (n&&(*dest++=*str++))
//	{
//		n--;
//	}
//	if (n > 0)
//	{
//		while (--n)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1 [] = "abcd******";
//	char arr2[] = "def";
//	my_strncpy(arr1,arr2, 3);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//2.strncat
//int main()
//{
//	char arr1 [30] = "abcd\0******";
//	char arr2[] = "def";
//	strncat(arr1,arr2, 6);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strncat(char* str1, const char* str2,int n)
//{
//	char* start = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//
//	while (n&&(*str1++ = *str2++))
//	{
//		n--;
//	}
//	if (n > 0)
//	{
//		*str1 = '0';
//	}
//	return start;
//}
//int main()
//{
//	char arr1 [30] = "abcd\0******";
//	char arr2[] = "def";
//	my_strncat(arr1,arr2, 2);//���Դ�ַ���Ҫ׷�ӵĸ�������������ʱ��ֱ��׷��'\0'
//	printf("%s", arr1);
//	return 0;
//}