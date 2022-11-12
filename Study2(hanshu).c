#include<stdio.h>
// int main()

                                                                     /*1.函数的基本组成*/
/*定义函数的一般语法如下：
函数返回值类型名 函数名（类型名 形参1，类型名 形参2，类型名 形参3，……）
  {
    说明部分
    语句部分
  }
*/




         /*-------------------------写一个函数，求出两个值中的最大值-------------------------*/
// int get_max(int x,int y)//int就是函数返回值类型 get_max是函数名 int是类型名 x是形参
// {
//     if(x>y)
//       return x;
//     else
//       return y;
// }

// int main()
// {
//     printf("请输入两个数：");
//     int a;
//     int b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int res = get_max(a,b);
//     printf("res= %d\n",res);

//     return 0;
// }                         






          /*写一个函数，交换两个数字的值----------------------------方法一*/ 
// int  get_change(int x,int y)
// {
//   int temp;
//   temp=x;
//   x=y;
//   y=temp;
//   printf("%d  %d\n",x,y);

// }

// int main()
// { int res;
//   printf("请输入想要交换的两个值：");
//   int a,b;
//   scanf("%d",&a);
//   scanf("%d",&b);
//   res=get_change(a,b);
//   return 0;

// }




          /*写一个函数，交换两个数字的值----------------------------方法二*/ 
          //利用地址指针，int*表示整型类型的指针变量，*x，*y表示解指针操作
//  Swap(int*x,int*y)
//  {
//   int tmp;
//   tmp=*x;
//   *x=*y;
//   *y=tmp;
//  }

//  int main()
//  {
//   int a,b;
//   printf("输入要交换的两数字：");
//   scanf("%d%d",&a,&b);
//   Swap(&a,&b);
//   printf("%d %d",a,b);
//   return 0;
//  }





                                                                      /*1.函数的形参和实参*/
//1.实际参数（实参）：真实传给函数的参数叫做实参。实参可以是：变量、常量、表达式、函数等。无论实参是何种类型的量，再进行函数调用时，—————>
//都必须有确定的值，以便把值传给形参


//2.形式参数（形参）：是指函数名后括号中的变量，因为形式参数只有再函数被调用的过程中才会被实例化。当函数调用完后就自动销毁了


//3.函数的调用：
/*(1):传值调用
 （2）:传址调用*/

 




                 /*-------------------------编写一个函数可以判断一个数是否是素数-------------------------*/
// int Judge_Prime(int x)
// {
//   int i;
// 	for(i=2;i<x;i++)
// 		if(x%i==0)
// 			break;
// 	if(i<x)
//   {
// 		printf("%d不是素数\n",x);
//     return 0;
//   }
// 	else
//   {
// 		printf("%d是素数\n",x);
//     return 1;
//   }
// }

// int main()
// {
//   int n;
//   printf("请输入数字：");
//   scanf("%d",&n);
//   Judge_Prime(n);
//   return 0;
// }





                 /*-------------------------编写一个函数可以判断一个数是否是素数-------------------------*/
// int Judge_Prime(int x)
// {
//   int i;
// 	for(i=2;i<x;i++)
// 		if(x%i==0)
// 			break;
// 	if(i<x)
//   {
// 		//printf("%d不是素数\n",x);
//     return 0;
//   }
// 	else
//   {
// 		//printf("%d是素数\n",x);
//     return 1;
//   }
// }

// int main()
// {
//   printf("100-200的素数是:\n");
//   int n;
//   for(n=100;n<=200;n++)
//   {
//     if(Judge_Prime(n)==1)
//       printf("%d\n",n); 
//   }
//   return 0;
// }





 /*-------------------------编写一个函数，判断一个年份是否是闰年-------------------------*/
// int Judge_Year(int x)
// {
//   if(x%400==0||(x%100!=0&&x%4==0))
//      //printf("是闰年");
//     return 1;
//    else
//     //printf("不是闰年");       注意：不在函数体内部写任何输出语句！！功能只用来判断是否为闰年，将函数独立出来，方便其他代码调用！！
//     return 0;
// }

// int main()
// {
//   int year;
//   printf("请输入一个年份：");
//   scanf("%d",&year);

//   if(Judge_Year(year)==1)
//    {
//     printf("%d是闰年",year);
//    }
//    else
//    {
//     printf("%d不是闰年",year);
//    }
//   return 0;
// }






 /*--------------------------------------------------编写一个函数，实现一个数组的二分查找-------------------------*/
// int Binary_Search(int arr[],int x, int num)//二分查找
// {
//   // int num;
//   // num=sizeof(arr)/sizeof(int);//求出元素个数
//   int left=0;
//   int right=num-1;
//   while(left<=right)
//   {
//     int mid=(left+right)/2;//求出中间元素的下标
//     if(arr[mid]>x)
//       {
//         right=mid-1;
//       }
//     else if(arr[mid]<x)
//       {
//         left=mid+1;
//       }
//     else
//     {
//       return mid;
//     }
//   }
//   if(left>right)
//   return -1;

// }


// int main()
// {
//   int arr[]={1,23,5,-6,89,8,9,24};
//   int num;
//   num=sizeof(arr)/sizeof(arr[0]);//求出元素个数   不能把求数字个数的操作放在定义的函数进行，因为在函数内求，调用的是指针，指针指向的是数组的第一个元素的地址，则sizeoof求出的大小是4字节
//   printf("请输入要找的数字：");
//   int k;//定义要找的数字
//   scanf("%d",&k);

//   int res=Binary_Search(arr,k,num);
//   if(res==-1)
//    printf("没有找到指定数字！");
//   else
//   {
//     printf("找到了，下标是:%d",res);
//   }
//   return 0;
// }




/*编写函数，每调用一次，就会将num的值增加1*/
// void Add(int *p)
// {
//   (*p)++;    //因为++优先级很高，所以不加括号时，作用的是p而不是*p，所以要加括号整体运算
// }

// int main()
// {
//   int num=0;
//   Add(&num);
//   printf("%d\n",num);
//   Add(&num);
//   printf("%d\n",num);
//   Add(&num);
//   printf("%d\n",num);
//   Add(&num);
//   printf("%d\n",num);
//   return 0;
// }




/*-------------------------函数的嵌套调用和链式访问-------------------------*/
/*1.函数的嵌套调用*/
// void times()
// {
//   printf("cbn study hard\n");
// }


// void three_times()
// {
//   for(int i=0;i<3;i++)
//    {
//     times();
//    }
// }


// int main()
// {
//   three_times();
//   return 0;
// }         


/*2.函数的链式访问————————————把一个函数的返回值作为另外一个函数的参数*/
// int main()
// {
//   printf("%d",printf("%d",printf("%d",43)));

//   return 0;
// }




/*-------------------------函数和递归----------------------*/
//输入一个数字，将数字一个个输出。 例如输入：1234 输出：1 2 3 4
// Recursion(int num)
// {
//   if(num>9)
//   {
//     Recursion(num/10);
//   }
//   printf("%d ",num%10);
// }

// int main()
// {
//   printf("请输入：");
//   unsigned int num=0;
//   scanf("%d",&num);
//   Recursion(num);
// }




//编写函数，求字符串长度——————————————————————————方法1
// int strlen(char* str)
// {
//   int count = 0;
//   while((*str)!='\0')  //str传入进来是代表首字母的地址，要获得第一个元素，只要*str解用即可获得第一个元素
//   {
//     count++;//计算字符串长度，循环一次就加一次
//     str++;//指针指向arr字符串中的下一个字符
//   }
//   return count;
   
// }

// int main()
// {
//   char arr[]="chenbannian";
//    int len = strlen(arr);
//   printf("%d\n",len);
// }


//编写递归函数，求字符串长度——————————————————————————方法2
// int strlen(char* str)
// {
//   if(*str != '\0') //如果第一个字符存在，则执行if语句
//    return 1+strlen(str+1); //存在元素，则计数+1，同时再递归调用strlen函数，并且str+1将指针指到第二个元素地址，再判断
//   else
//    return 0;  
// }  

// int main()
// {
//   char arr[]="chen";
//    int len = strlen(arr);
//   printf("%d\n",len);
// }


/*——————————————————————————————————————————编写函数，求出n的阶乘————————————————————*/
//--------------------递归写法—————————————方法一
// int Factorial(int x)
// {
//   if(x==1)
//    return 1;
//   else
//    return x*Factorial(x-1);
// }

// int main()
// {
//   printf("请输入想要求的数字：");
//   int n=0;
//   scanf("%d",&n);
//   // int res=Factorial(n);
//   printf("阶乘结果是： %d\n",Factorial(n));
//   return 0;
// }


//--------------------循环写法—————————————方法二
// int Factorial(int x)
// {
//   int res=1;
//   for(int i=1;i<=x;i++)
//    {
//     res=res*i;
//    }
//    return res;
// }

// int main()
// {
//   int res=0;
//   printf("请输入想要求的数字：");
//   int n=0;
//   scanf("%d",&n);
//   // int res=Factorial(n);
//   // res=Factorial(n);
//   printf("阶乘结果是： %d\n",Factorial(n));
//   return 0;
// }
