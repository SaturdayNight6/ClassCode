#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch（判断对象）case ：值 ，break
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)  //判断day变量
	{
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesdat");
		break;
	}
return 0;
}
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