#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//��λ������ <<  >>
//��λ������ & | ^
//���ϸ�ֵ�� += -+ *= %= ^= |=
//��Ŀ-��sizeof  ˫Ŀ������- + -
int main()
{
	int sz=0;
	int arr[5] = { 1,2,3,4,5 };
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[1]);
	printf("%d\n", sz);
	/*int a = 1;
	int b = a << 1;
	int c = a >>1;
	printf("%d\n%d\n", b,c);
	return 0;*/
}

//����-ͨ�������±����ʽ��������
//int main()
//{
//	int arr[5] = { 3,6,7,9,2};
//	//�±�Ϊ0-4
//	int i = 0;
//
//	scanf("%d" ,&i);
//	printf("%d\n", arr[i]);

	//while (i<5)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}
	//printf("%d\n",arr[3] );
//}

//�Զ��庯�����������ֱ������
//int Add(int x,int y)
//{
//	int z;
//	z = x + y;
//	return(z);
//}
//int main()
//{
//	int x = 3, y = 7;
//	int num1 = 5, num2 = 6;
//	int sum = 0;
//	sum = Add(x, y);
//	printf("%d\n", sum);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	while (line<20000)
//	{
//		printf("��һ�д��� %d\n", line);
//		line++;
//	}
//	if (line>=20000)
//	{
//		printf("�����Լ���Ӯ��δ��\n");
//	}
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("��������\n");
//	printf("��Ҫÿ��ú�ѧϰ��(1/0)>:\n");
//	scanf("%d", &input);
//	if (input==1)//������Ϊ�������ں�
//	{
//		printf("Ӯ��δ��\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//
//}

//ת���ַ�--'\'
//int main()
//{
//	//����ת���ַ��ĳ���
//	// \?-��д����ʺ�ʱʹ�ã��������Ǳ�����������ĸ��
//	// \'  \"  \\  \b-�˸��   \r-�س�  \t-ˮƽ�Ʊ��  \v-��ֱ�Ʊ��  \ddd-��ʾ1-3���˽�������  \xdd-ʮ����������
//	//\32-32Ϊ�����˽������֣���ΪASCII��ֵ��Ӧ���ַ���ʮ����Ϊ26
//	printf("%d\n",strlen("\test\32\test.c"));
//	printf("%d\n", strlen("\132"));
//	printf("%d\n", strlen("\x61"));
//	return 0;
//
//	////\t-ˮƽָ���
//	//printf("c:\test\\32\\test.c");
//	//printf("%c\n", '\'');//��ӡ������
//	//printf("%s\n", "\"");//��ӡ˫����
//}


//�ַ���
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', '\0'};
//	printf("%d\n", strlen(arr1));//string length:�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
// ASCII ����
//	 //��\0'-0
//     //'a'-97
//     //'A'-65
//	char arr1[] = "abc";
//	//"abc"--'a''b''c''\0'---'\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c', '\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//
//}
//4��ö�ٳ���	

// ��ԭɫ������������ڣ�1��2��3��4��5��6��7
// ö�ٹؼ�--enum
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE,
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	printf("%d\n", color);
//	//BLUR = 6;//err
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
////MALE��FEMALE��SECRETΪö�ٳ���
//int main()
//{
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", MALE);
//	return 0;
//}
//3��#define ����ı�ʶ������
//#define MAX 10
//
//	int main()
//	{
//		int arr[MAX] = { 0 };
//		printf("%d\n", MAX);
//		return 0;
//	}

	////2��const-������
	//const int n = 10;
	//	int arr[n] = { 0 };//n�Ǳ������������г����ԣ�����δ������
	//n = 20;

	////const���εĳ�����
	//const int num1 = 4;
	//printf("%d\n", num1);
	////num1 = 8;
	//printf("%d\n", num1);

	/*1�����泣��
		3
		100
		3.14*/
//}

//�����������ȫ�ֱ�������
//int main()
//{
//	extern int num1;//ȫ�ֱ��� 
//	printf("%d\n",num1);
//	return 0;	
//}

//�Զ��庯���ľֲ�����
//int globle = 2000;
//
//void test()
//{
//	printf("test()--%d\n", globle);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", globle);
//	return 0;
//}
