//#define _CRT_SECURE_NO_WARNINGS 1
//指针 电脑有32位或64位，32位即有32根地址线，当电脑通电时便会产生正负电流，正为1负为0，可以产生2^32个地址(空间/房间)，每个房间放一个byte(位)，共可产生4GB的内存空间。
// &a-->查看变量a所在的地址。& --> 取地址操作符。 指针变量存放的都是地址 形式为int* p ，*-->解引用操作符，*p -->直接找到p所指向的的对象，*p=20 -->对p所指向的对象进行重新赋值20。
// 指针在32位平台上占4个字节，在64平台上占8个字节。32位系统二进制表达为32位，所以一个地址有32bit即4个字节，64位同理。
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int *p=&a; // 有一种变量是用来存放地址的-->指针变量。
//	printf("%p\n",&a); // %p-->以地址的形式输出。
//	printf("%p\n",p);
//	//a存放在具体的一个房间中，int* p中存放这a的地址，而我们不是为了存放而存放的，我们要通过p中存放的地址来找到a的房间。
////    //这时 * --> 解引用操作符(*p即对p进行解引用操作，找到p所指向的对象a)
////    // *p=20 -->对p进行解引用操作找到p所指向的对象a，并把变量a赋予新的值20
////    *p=20;
////	printf("a=%d\n",a);
//}

//照猫画虎
//#include <stdio.h>
//int main()
//{
//	char ch='a'; //定义字符型ch变量并赋予'a'。
//	char* p=&ch; //定义字符型指针变量p来存放ch的地址。
//	*p='A';  //直接找到p所指向的对象并进行重新赋值'A'。
//	printf("%d\n",ch); //最后以整形的形式输出字符型变量ch,结果为65。
//}


//#include <stdio.h> //由此可知指针变量所占用的字节只和电脑的操作位数有关 32位4字节 64位8字节
//int main()
//{
//	printf("%d\n",sizeof(int*)); //4
//	printf("%d\n",sizeof(char*)); //4
//	printf("%d\n",sizeof(float*)); //4
//	printf("%d\n",sizeof(double*)); //4
//}


//#include <stdio.h>
//int main()
//{
//	double a=3.1415;
//	printf("%4.2f\n",a); //4.2f 4代表打印的字符长度，2为保留的小数位。
//}


//描述人、书等等的时候需要考虑多个参数，这些统称为复杂体，这时就要用到结构体来描述。
/*#include <stdio.h>
#include <string.h>
struct book
{
	char name[14];
    short price;
};
int main()
{
	struct book b2={"C语言程序设计",50};
	printf("书名：%s\n",b2.name);*///这里的.可以让电脑找到b2中的具体参数。
   /* printf("价格：%d\n",b2.price);*/
  //更改参数b2.price=45是可行的因为price是个短整型变量，b2.name="C++"是不可行的，因为name定义是一个数组。
  //要想更改数组只能先copy再更改，即strcpy --> string copy 使用方法如下
   /* strcpy_s(b2.name,"C++");*///要用到头文件<string,h>
	//struct book* p=&b2;
	//printf("书名：%s",(*p).name); //*p代表直接指向b2,可以通俗的理解为*p和b2一样。
	//printf("价格：%d",(*p).price);
//	printf("书名：%s",p->name); //  这里->符号可以让指针变量直接找到参数。
//	printf("价格：%d",p->price);
//}
////putchar getchar 
//#include <stdio.h>
//int main()
//{
//	char a=0,c=0;//getchar即以字符型型式输入。
//	printf("Input two characters>:\n");
//	a=getchar();
//	c=(a>'a'&&a<'z'?a-32:a); //三目运算符
//	putchar(c);
//	putchar('\n');
//	
//}


//// a&b --> a和b进行按位与操作; a|b --> a和b进行按位或操作; a^b --> a和b进行按位异或操作; a=~b --> 取反操作即对b进行取反后将值赋给变量a。
//#include <stdio.h>
//int main()
//{
//	int a=2,b=3,c=0;
//	//c=a&b; //计算方式: 010(a的2进制表达数)
//	                // 011(同理b的)上下对应 口诀：全一则一（否则为0）
//	                // 010 所以结果为2 
//	//c=a|b;//计算方式: 010(a的2进制表达数)
//	//                //011(同理b的)上下对应 口诀：有一则一
//	//                //011 结果为3
//	//c=a^b;//计算方式: 010(a的2进制表达数)
//	                //011(同理b的)上下对应 口诀：有一则一,全一为0
//                    //  001 结果为1
//	printf("%d\n",c);// 取反操作下面提到了。
//} 

//a&&b --> a和b进行逻辑与操作;a||b --> a和b进行逻辑或操作
//#include <stdio.h>
//int main()
//{
//	int a=2,b=0,c=0;
///*	c=a&&b; */ //计算方法: C语言中0即为“假 ”，非0即为“真”。按位与：&& 两边要都为真才能为真并输出1。此处 a=2 b=0 故输出0.
//	c=a||b;  //方法：|| 两边只要有一个为真则输出1，只有全假才输出0，故结果为1.
//	printf("%d\n",c);
//}


//#include <stdio.h>  //自己写的两数比较大小的代码
//int main()
//{
//	int a=0,b=0,max=0;
//	printf("Input two numbers>:");
//	scanf("%d%d",&a,&b);
//	max=(a>b?a:b);
//	printf("max=%d\n",max);
//}


////define不仅可以定义常量，还可以定义宏即  宏定义  !!!!!!本质上还是用到了三目操作符。
//#include <stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a=20,b=30;
//	int max=0;
//	max = MAX(a,b);
//	printf("max=%d\n",max);
//}


//#include <stdio.h>
//int Max(int x , int y) //自定义函数后面不要加;!!!!!!!!!!!
//{
//	/*if(x>y)  //此处使用了 if/else语句
//		return x;
//	else
//		return y;*/
//	int z=(x>y?x:y); //此处使用了(exp1?exp:exp)三目操作符。
//	return z;
//}
//
//int main()
//{
//	int a=20,b=30;
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//}


//#include <stdio.h>
//
//extern int Add(int x , int y); //声明函数,static修饰函数改变了函数的链接属性，由外部链接属性-->内部链接属性。
//int main()
//{
//	int a=20,b=30;
//	int sum=Add(a,b);
//	printf("sum=%d\n",sum);
//}


//#include <stdio.h>
//
//int main()
//{
//	extern int g_val; //extern-->声明外部符号
//	printf("%d\n",g_val); //如果对外部全局变量(extern.c)进行static操作呢？
	//可得当对全局变量进行static操作后，test.c中无法解析，改变了全局变量的作用域。下面证明了static改变了局部变量的生命周期。	                                                                                                                        
//}   //总结：static(静止)改变了（延长）局部变量的生命周期，改变了（限制）局部变量的作用域。 


//#include <stdio.h>
//
//void test() //此为定义了一个新函数test()，下面的while函数每次调用test函数后test函数便完成了以此生命周期，即每次循环后都会重置，不会有记忆，故打印出来的每次都是a=2。
//{             //这里a是一个动态的局部变量，过了生命周期便会销毁重置，若在int前加上static(静态)可以让a变成一个静态的局部变量，每次运算后会保留数据，下次运算时便会使用保留下来的数据形成累加。
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while(i<5) //这里的while循环只是用来循环加载test函数的。
//	{
//		test();
//		i++;
//		 printf("%d\n",i);
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	typedef unsigned un; //typedef-->类型定义（类型重定义）即将关键字替换成自定义的名称进行运算文中便是将unsigned无符号整形替换成了un。
//	un num=-20;
//	printf("%d\n",num);//sizeof(un));
//


//#include <stdio.h>
//int main()
//{
//	unsigned a=-10; //这里-10不可能是无符号常量，只是unsigned将-10强行转化成无符号变量（越界）。
//	printf("%d\n",a); //这里打印出来的是-10，原因就是%d，%d-->按整形形式输出即int形（有符号）理所当然就能将-10打印出来。
//	printf("%u\n",a); //%u-->将a以无符号整形形式输出故打印出来的就是正数（越界数值逼近max）。
//}


//#include <stdio.h> //exp1? exp2: exp3(exp为表达式，具体看下列表达式)。
//
//int main()
//{
//	int a=20,b=30;
//	int max=0;
//	max=(a>b?a:b); //max=(a>b?a:b) max=(a>b?a:b)
//	printf("max=%d\n",max);
//	//上文也可以这样表达（用if/else语句）。
//	if(a>b)
//	max=a;
//	else
//	max=b;
//	printf("max=%d\n",max);
//
//}


//#include <stdio.h>
//int main()
//{
//	int arr[6]={1,2,3,4,5,6};
//	printf("%d\n",arr[2]);//[]-->下标引用符，打印出arr数组中下标为2的数组即为3（数组下标从零开始到n-1）。
//}


//#include <stdio.h> //printf("")括号不能跳行，会产生错误。
//int main()
//{
//	printf("6
//		6
//		6
//		6");
//}


//#include <stdio.h>
//
//int main()
//{
//	int a=10;
//	a=-2;
//	printf("%d\n",b); //运行结果为-2，可得int a=10(意思为定义一个名为a的整形变量且赋给其10的初值，若下面再对a进行赋值则打印出的为后面的赋值，若下面不再赋值则打印出的就是初值)。
//}


//#include <stdio.h>
//int main()
//{
//	const int a = 20;
//	printf("%d\n",a);
//	a = 30;//const 使变量a具有了常属性，故下面不能再对a进行赋值。
//	printf("%d\n",a);
//	
//}


//#include <stdio.h>//enum 为枚举常量函数，后面为要枚举的东西，下面大括号里面要加逗号，结尾大括号后面要加分号结尾。
//
//enum Distinguish
//{
//	TURE,
//	FALSE,
//	CANT
//};
//int main()//在main函数里再次定义一个变量进行随机赋值。
//{
//	enum Distinguish s=TURE;
//	printf("%d\n",TURE);
//	printf("%d\n",FALSE);
//	printf("%d\n",CANT);
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n",'a');//字符都带有单引号，没单引号的字母只是个常量，所以想用%c形式输出一个字母变量是不可行的，除非给这个变量赋一个字符（如a='a'）。
//}


//#include <stdio.h>
//int main()
//{
//	int a=4;    //tips:正数的原码反码补码都相同，得到补码后要将其转化为计算机二进制补码即按位取反(符号位都要取反)因为最高位为0，所以直接得出答案。
//	int b=~a;  //~a的意思是对a即4进行二进制操作得到补码(正数的原码反码补码都一样)，(数字转换为二进制后，再按位取反，得到的就是给计算机使用的二进制补码)再对补码进行反操作（减一后符号位不变再取反，符号位为一则为负0则正）。
//	printf("%d %d\n",a,b);  //a为int型变量占4个字节即32个bit位，故a在二进制中为00000000000000000000000000000100则a的补码为11111111111111111111111111111011再对补码进行反操作减一变成11111111111111111111111111111010再符号位不变按位取反得到1000000000000000000000000000101所以b等于-5。
//}  //例子:~(-1)负数的原码反码补码各不相同 例:-1的原码为10000001(八进制)反码11111110(负数取反时符号位不变)加一11111111得到补码，再按位取反00000000得到计算机二进制补码这里可以看出最高位为0为正数，所以不用再进行反操作即~(-1)=0.


//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};//定义了一个名为arr的数组[],右边{}一个元素个数决定了[]里面为几，所以不必在[]里定义有几个元素。
//	printf("%d\n",sizeof(arr)/sizeof(arr[1]));//10
//}


//#include <stdio.h>
//int main()
//{
//	int arr[6]={'a','b','c','d','e','f'};//数组与while循环语句搭配打出arr里面的所有元素。
//	int i=0;
//	while(i<=5)
//{
//	printf("%c\n",arr[i]);
//	i++;
//}


//#include <stdio.h>
//
//int Add(int x,int y) //此为自定义函数，并不是库函数，Add为自定义函数名称（）里面的int a int b为自定义的两项参数，大括号里面定义的是Add函数的算法，return z 为将运算结果返回给算式。
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
//	int a=233;
//	int b=235;
//	int c=0;
//	c=Add(a,b); //(  )-->函数调用操作符，即调用Add函数。
//	printf("c=a+b=%d\n",c);
//}


//#include <stdio.h>  //失败，不明所以。
//int main()
//{
//	int a=0,b=0,c;
//	c=a+b;
//	while(c<200)
//	{
//		printf("c=a+b=%d\n",c);
//		a++;
//		b++;
//	}
//	if(c>=200);
//	printf("End!\n");
//}


//#include <stdio.h>  //while循环与if语句的使用。
//int main()
//{
//	int line=1;
//	while(line<=500)
//{
//	printf("敲一行代码：%d\n",line);
//    line++;
//}
//	if(line>=500)
//	printf("Good job\n");
//
//}


//#include <stdio.h> //if else语句 与判段相等==符号
//
//int main()
//
//{
//	int a=0;
//	printf("你要加入JOJA吗？(1加0不加）>:");
//	scanf("%d",&a);
//	if(a==1)
//	printf("Very good\n");
//	else
//	printf("Bad boy\n");


//#include <stdio.h>
//
//int main()
//{
//	char arr1[]="abc"; //字符数组
//	char arr2[]={'a','b','c',0};
//	char h;
//	printf("%d %d\n",strlen(arr1),strlen(arr2)); //strlen为计算数组长度的字符全称为 string length 同理sizeof为计算变量形式的字符如sizeof(int)等等。
//	printf("%c\n",'\32');
//}


//#include <stdio.h> //枚举常量
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s=FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//
//}


//	//printf("%d\n",(int)a);// /*     */  为C语言的注释符号但不好使用，现采用C++的注释方式，即在语句前加//即可。
//	/*int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d %d",&a,&b);
//	c=a+b;
//	printf("sum=%d\n",c);
//	return 0;*/


//#include <stdio.h> //define 标识符常量在main函数之前，定义PRICE为30，自此define后面的函数中的PRICE都为30，做到了一改全改的效果，省时省力。
//
//#define PRICE 30;
//
//void main()
//{
//	int num,total;
//	num=10;
//	total=num*PRICE;
//	printf("total=%d\n",total);
//}


//#include <stdio.h>  // '\ddd'(ddd为八进制数，虽然是写ddd但'   '里面的数不用写相同的数字，也不用写够3个数字，'\ddd'代表的是八进制转换成十进制后所对应的ASCII码 )
//int main()          // '\xdd'(xdd为十六进制数，x是固定符号不带入计算，'   '里面的dd也不用相同，也不用写够2个数字，'\xdd'代表的是十六进制转换成十进制后所对应的ASCII码)
//{
//	printf("%d\n",'\101'); // 65
//	printf("%c\n",'\101'); // A
//}


//#include <stdio.h> //Hello world!
//
//int main()
//{
//	printf("Hello world!\n");
//}