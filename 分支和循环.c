#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch（判断对象）case ：值 ，break

int main()
{   int ch=0;
     //ctrl+z
     //EOF - end of file ->-1
	while ((ch=getchar())!=EOF)
	{
	     putchar(ch);
	}
   return 0;
}

//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	    if(i==5)
//			continue;//如果i等于5，所以跳过continue后面的代码，直接跳到循环的判断部分，进行下一次循环的入口判断
//循环
//		printf("%d",i);
//       i++;
//	}
//   return 0;
//}



//int main()
//{
//	int i=1;
//	while(i<10)
//	{
//	   i++;
//	   if(i==5)
//		   continue;
//	   printf("%d",i);
//	}
//   return 0;
//}



//int main()
//{
//   //if(1)//若把if改成while则变成死循环
//	  // printf("hehe");
//
//	int i=0;
//	while(i<=10)
//	{
//	   printf("%d\n",i);
//	   i++;
//	}
//   return 0;
//}


//int main()
//{
//  int n=1;
//  int m=2;
//   switch (n)
//  {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//	  switch(n)
//	  {
//	     //switch允许嵌套使用
//	  case 1:
//		  n++;
//	  case 2:
//		  m++;
//		  n++;
//		  break;
//      }
//    case 4:
//	    m++;
//	    break;
//    default:
//	  break;
//}
//  printf("m=%d,n=%d",m,n);
//  return 0;
//}//如果没有写break的话会连续运行下来，只有break才会跳出



//int main()
//{
//  int day=0; //这里定义的变量只能是整型
//  scanf("%d",&day);
//  switch(day)  //判断day变量
//  {
//	case 1:
//    case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("work day");
//		break;
//	case 6:
//	case 7:
//		printf("day off");
//		break;
//	default:
//		printf("input error");
//	}
//return 0;
//}



//int main()
//{
//	int day=0; //这里定义的变量只能是整型
//	scanf("%d",&day);
//	switch(day)  //判断day变量
//	{
//	case 1:
//		printf("monday");
//		break;
//	case 2:
//		printf("tuesdat");
//		break;
//	}
//return 0;
//}



//1.判断一个数是否为奇数
//2.输出1-100之间的奇数
//int main()
//{
//	int i=1;
//	/*while(i<100)
//		{
//	     if (i%2==1)
//		   printf("%d",i);
//	     i++;
//	  }
//	return 0;*/
//	while(i<=100)
//	{
//		printf("%d",i);
//	    i+=2;
//	}
//}



//else和最近的一个if匹配，除非前面有括号隔开
//int main()
//{
//	int a=5;
//	int b=6;
//	if(a==6)
//		if(b==8)
//			printf("hha");
//	else     
//		printf("hehe\n");
//    
//  return 0;
//}