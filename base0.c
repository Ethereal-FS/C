#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//移位操作符 <<  >>
//按位操作符 & | ^
//复合赋值符 += -+ *= %= ^= |=
//单目-！sizeof  双目操作符- + -
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

//数组-通过访问下标的形式访问数组
//int main()
//{
//	int arr[5] = { 3,6,7,9,2};
//	//下标为0-4
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

//自定义函数，方便后续直接引用
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


//循环语句
//int main()
//{
//	int line = 0;
//	while (line<20000)
//	{
//		printf("敲一行代码 %d\n", line);
//		line++;
//	}
//	if (line>=20000)
//	{
//		printf("提升自己，赢得未来\n");
//	}
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("自我提升\n");
//	printf("你要每天好好学习吗？(1/0)>:\n");
//	scanf("%d", &input);
//	if (input==1)//括号内为两个等于号
//	{
//		printf("赢得未来\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//
//}

//转义字符--'\'
//int main()
//{
//	//计算转义字符的长度
//	// \?-书写多个问好时使用，避免他们被解析成三子母词
//	// \'  \"  \\  \b-退格符   \r-回车  \t-水平制表符  \v-垂直制表符  \ddd-表示1-3个八进制数字  \xdd-十六进制数字
//	//\32-32为两个八进制数字，作为ASCII码值对应的字符，十进制为26
//	printf("%d\n",strlen("\test\32\test.c"));
//	printf("%d\n", strlen("\132"));
//	printf("%d\n", strlen("\x61"));
//	return 0;
//
//	////\t-水平指表符
//	//printf("c:\test\\32\\test.c");
//	//printf("%c\n", '\'');//打印单引号
//	//printf("%s\n", "\"");//打印双引号
//}


//字符串
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', '\0'};
//	printf("%d\n", strlen(arr1));//string length:计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//{
//	//数据在计算机上存储的时候，存储的是二进制
// ASCII 编码
//	 //‘\0'-0
//     //'a'-97
//     //'A'-65
//	char arr1[] = "abc";
//	//"abc"--'a''b''c''\0'---'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c', '\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//
//}
//4、枚举常量	

// 三原色：红黄蓝、星期：1、2、3、4、5、6、7
// 枚举关键--enum
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
////MALE、FEMALE、SECRET为枚举常量
//int main()
//{
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", MALE);
//	return 0;
//}
//3、#define 定义的标识符常量
//#define MAX 10
//
//	int main()
//	{
//		int arr[MAX] = { 0 };
//		printf("%d\n", MAX);
//		return 0;
//	}

	////2、const-常属性
	//const int n = 10;
	//	int arr[n] = { 0 };//n是变量，但是又有常属性，所以未常变量
	//n = 20;

	////const修饰的常变量
	//const int num1 = 4;
	//printf("%d\n", num1);
	////num1 = 8;
	//printf("%d\n", num1);

	/*1、字面常量
		3
		100
		3.14*/
//}

//多个主函数的全局变量引用
//int main()
//{
//	extern int num1;//全局变量 
//	printf("%d\n",num1);
//	return 0;	
//}

//自定义函数的局部变量
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
