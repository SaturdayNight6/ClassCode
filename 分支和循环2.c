#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>   //休息一秒Sleep(1000)引用的头文件
#include<stdlib.h>     //清空屏幕system（"cls"）
//int main()
//{
	//int ch=0;
	////EOF - end of file文件结束标志
	////ctrl+z
	//while((ch=getchar()!=EOF))
	//{
	//    putchar(ch);
	//}


//
////输入123 ABCD
//	int ch =0;
//	int ret=0;
//	char password[20]={0};
//	printf("please input the key:\n");
//	scanf("%s",password);  //当输入123 ABCD时把123当做密码读走，也就是空格之前的
//
//	//缓冲区还剩余一个‘\n’
//	//读取一下‘\n’
//	getchar();//把'\n'读走，缓冲区变空，必须要有这句 
//	          //如果输入密码为123 ABCD则这句的意思是把空格读走
//	while((ch=getchar()!='\n'))
//	{
//	   ;
//	}//把缓冲区里的字符全读完
//
//	printf("please affirm(Y/N):> ");
//	
//	ret = getchar();
//	if(ret=='Y')
//	{
//	  printf("confirm success");
//	}
//	else 
//	{
//	   printf("give up confirming");
//	}
//   return 0;
//}



//
////只打印字符0-9的数字
//	int main()
//	{
//		int ch=0;
//		while((ch=getchar())!=EOF)
//		{
//		    if(ch<'0'||ch>'9')
//				continue;
//			putchar(ch);
//		}
//	   return 0;
//	}
//


//
////for(初始化部分；条件判断部分；调整部分)
//	int main()
//	{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d",i);
//	}
//	return 0;
//	}



//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	   if(i==5)
//		  continue;
//	   printf("%d",i);
//	}
//   return 0;
//}


//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	   if(i==5)
//		  break;
//	   printf("%d",i);
//	}
//   return 0;
//}




////
//int main()
//{
//	int i=0;
//	while(i<=10)
//	{
//	   if(i==5)
//		  continue;
//	   printf("%d",i);
//       i++;
//	}
//   return 0;
//}//死循环

//
//int main()
//{
//   int i=0;
//   int j=0;
//   for(;i<10;i++)
//   {
//      for(;j<10;j++)
//	  {
//	      printf("hehe\n");
//	  }
//   }
//   return 0;
//}//出现10次而不是100次，因为第一次i=0；里循环执行10次后j=10；外面第二次循环时i=1；但里循环j还是10；不会执行


//请问循环要执行多少次
//int main()
//{
//	int i=0;
//	int k=0;
//   for(i=0,k=0;k=0;i++,k++)
//   {
//      printf("hehe\n");
//   }//循环执行0次，以内判断语句那里，k赋值了0；最后表达式的值为0,0为假，所以就不执行
//   return 0;




//1.计算n的阶乘
//int main()
//
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	scanf("%d",&n);
//		for(i=1;i<=n;i++)
//		{
//		    ret=ret*i;
//		}
//	printf("ret=%d\n",ret);
//  return 0;
//}





//2.计算1！+2！+...10！
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{   
//		ret=1;//必须每次从1开始
//		for(i=1;i<=n;i++)
//		{
//		    ret=ret*i;
//		}//n的阶乘
//		sum=sum+ret;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}




//优化后的计算1！+2！+...10！
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{   
//		 ret=ret*n;
//		//n的阶乘
//		sum=sum+ret;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}


////3.在一个有序数组中查找某个具体的数字n。编写int search(int x,int v[],intn n);功能：在v[0]<v[1]...<=v[n-1]的数组中查找x
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	int k=5;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>k)
//		{
//		   right=mid-1;
//	
//		}
//		else if(arr[mid]<k)
//			left=mid+1;
//		else
//		{
//			printf(" find it xiabiao=%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//	   printf("not find\n");
//	}
//   return 0;
//}



//4.编写代码，演示多个字符从两端移动，向中间汇聚。
//w#################!
//we###############!!
//wel#############!!!
//welc###########!!!!
//welco#########!!!!!
//welcom#######!!!!!!
//welcom #####t!!!!!!
//welcom t###it!!!!!!
//welcom to#bit!!!!!!
//welcom to bit!!!!!!
//int main()
//{
//// char arr[]="abc";
////[a b c \0]
//// 0 1 2 3
//char arr1[]="welcom to bit!!!!!!";
//char arr2[]="###################";
//int left=0;
////int right=sizeof(arr1)/sizeof(arr1[0])-2;
//int right=strlen(arr1)-1;
//while(left<=right)
//{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
////休息一秒
//	Sleep(1000);
//	system("cls");//执行系统命令的一个函数-cls-清空屏幕
//	left++;
//	right--;
//}
//   printf("%s\n",arr2);
//   return 0;
//}



//5.模拟用户登录情景，并且只能登陆3次（只允许输入三次代码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序）
int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		
	   printf("please enter the key:>");
	   scanf("%s",password);
	   if(strcmp(password,"123456")==0)//等号不能用来判断两个字符串是否相等，应该使用一个库函数strcmp
	   {
	      printf("success\n");
		  break;
	   }
	   else
	   {
	      printf("error\n");
	    }
	}
	if(i==3)
		printf("exit");
  return 0;
}

 


