#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//struct结构体-复杂对象-自己创建出来的一种类型
struct Book
{
  char name[20];//C语言程序设计
  short price;//55
};
int main()
{
  //利用结构体类型创建一个该类型的结构体变量
	struct Book b1 ={"C语言程序设计",55};
	//printf("书名:%s\n", b1.name);

	//b1.price=35;
	//printf("price:%d\n", b1.price);
	//
	//strcpy(b1.name,"C++");//string copy 库函数
	//printf("price:%d\n", b1.price);

    struct Book* pb =&b1; 
	printf("price:%d\n",(*pb).price);
	/*.    结构体变量.成员
	->   结构体指针->成员*/
	printf("price:%d\n",pb->price);//pb是一个指针，输出pb指向对象的price
	return 0;
}
//int main()
//{
//  int a=4;
//  int* p=&a;//指针变量用来存放变量地址,将p定义为int*类型
//  //printf("%p\n",&a);
//  //printf("%d\n",p);
//  *p=20;//*-解引用操作符，或叫间接访问操作符，将p所知内存中的数值改为20
//  printf("%d\n",a);
//printf("%d\n",sizeof(p));
//  return 0;
//}
//
//int main()
//{
//   char ch='w';
//   char* pc=&ch;
//   *pc='b';
//   printf("%c\n",ch);
//printf("%d\n",sizeof(pc);
//   return 0;
//}
////int global=2018;
//宏的定义

//int MAX(int X,int Y)
//{
//if(X>Y)
//	return X;
//else
//	return Y;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a=10;
//	int b=10;
//	int max=MAX(a,b);
//	printf("max=%d\n",max);
//return 0;
//}

//int main()
//{    
//	/*extern int glo_bal;
//	printf("%d\n",glo_bal);*/
//
//	int sum=0;
//	int num1=0;
//	int num2=0;
//	scanf("%d%d",&num1,&num2);
//	
//	sum=num1+num2;
//	printf("%d\n",sum);
	//char ch='A';
	//int age=20;
	//long num=100;
	//float f=5.0;
	//double d=3.14;
	//printf("%lf\n",d);
	//printf("%f\n",f);
	//printf("%d\n",num);
	//printf("%d\n",age);
	//printf("%c\n",ch);
	//printf("hehe\n");
	//printf("%d\n",sizeof(char));
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(short));
	//printf("%d\n",sizeof(long));
	//printf("%d\n",sizeof(long long));
	//printf("%d\n",sizeof(float));
	//printf("%d\n",sizeof(double));
	/*int global=2019;
	printf("%d\n",global);*/
 /* return 0;
}*/
//#include<stdio.h>
//enum Color
//{
//   male,
//   female,
//   secret
//};
//int main()
//{
//	enum Color color=
//	printf("%d\n",male);
//  return 0;
//}


//int main()
//{
//	char ary1[]={"abc"};
//	char ary2[]={'a','b','c',0};
//	printf("%s\n",ary1);
//	printf("%s\n",ary2);
//   return 0; 
//
//}
//static修饰局部变量，变量生命周期变长。（变量值累积）
//Static修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件则不能使用
//static修饰函数也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性->内部链接属性
//void test()
//{
//   static int a=1;
//   a++;
//   printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//	   test();
//	   i++;
//	}
//   return 0;
//}
//extetn 修饰外部变量
//int main()
//{
//	extern int g_val;
//	printf("%d\n",g_val);
//  return 0;
//}
//extern修饰函数，使用外部函数之前先声明
//extern int add(int,int);
//int main()
//{
//   int a=10;
//   int b=20;
//  int sum= add(a,b);
//  printf("sum=%d\n",sum);
//  return 0;
//}

