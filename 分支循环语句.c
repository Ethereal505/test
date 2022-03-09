#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int age=0;
//	printf("Input your age>:\n");
//	scanf("%d",&age);  //scanf里面不要用\n
//	if(age<18)  //if后面不要加 ;   
//	printf("未成年\n");
//	else if(18<=age<28)
//	/*else if(18<=age&&age<28)*/ //逻辑与 正确写法
//	printf("青年\n");  //结果仍为青年,因为18<=age<28计算过程18<=age为假输出为0就变成了0<28判断为真，故输出"青年"。
//	else if(age>=28&&age<50)
//	printf("壮年\n");
//	else if(age>=50&&age<90)  //if else只能有一个，而else if可以有无数个。***
//	printf("老年\n");
//	else 
//    printf("老不死的\n");            
//}


//#include <stdio.h>
//int main()
//{
//	int age=0;
//	printf("Input your age>:\n");
//	scanf("%d",&age); 
//	if(age<18)          //如果if条件成立并且要执行多个语句，正确的表达方式是利用代码块。
//	{printf("未成年\n");
//	printf("不可刑\n");
//	}
//}


//#include <stdio.h>  //***悬空else问题***，只要第一个if判定为假则不会再进行下去，结果就是不会打印任何东西。
//int main()          //实际上else是和距离它最近的if语句进行联系，即就近原则，例如a==0为真而判断b==0为假，则else进行输出。
//{
//	int a=0,b=1;
//	if(a==1)
//	{
//		if(b==1)
//
//	printf("hehe\n");   //当用代码块将if(b==0)括起来后，else便不能再与其匹配所以便会输出haha。这时和第一个if匹配。
//
//	}
//
//	else
//	printf("haha\n");
//}


//#include <stdio.h>
//
//int main()
//{
//	int a=4;
//	if(a!=5)  //此处出现符号错误，结果打印出hehe，原因是因为=和==不同，=是赋值，==是判断相等，a=5是将5赋值给a非0为真if成立。
//		printf("hehe\n");  //若使用==则if不成立，!=符号是判断两边是否不相等，不相等为真，相等为假。
//}


//#include <stdio.h>
//int main()
//{
//	int a=1;
//	while(a<100)
//	
//	{
//		//a++;
//		//if(a%2!=0) //if(a%2==1)效果一样。
//			printf("%d ",a);
//				a+=2;	
//	}	
//}


//switch case break 语句，switch适用于多分支结构。
//#include <stdio.h>
//int main()
//{
//	int day=0;
//	printf("Input a number\n");
//	scanf("%d",&day);  //switch(必须是整形)
//	switch(day)  //day输入为几就从case几进入break作用是跳出。
//	{
//	case 1:printf("星期一\n");  //case决定入口，break决定出口。
//		break;
//		case 2:printf("星期二\n");  //case后面也必须是整形1和1.0是截然不同的。
//		break;
//		case 3:printf("星期三\n");
//		break;
//		case 4:printf("星期四\n");
//		break;
//		case 5:printf("星期五\n");
//		break;
//		case 6:printf("星期六\n");
//		break;
//		case 7:printf("星期七\n");
//        break;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int day=0;
//	printf("Input a day\n");
//	scanf("%d",&day); 
//	switch(day) 
//	{
//	    case 1:   //根据不同的需求break看情况使用。
//		case 2:  
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//		break;
//		case 6:		
//		case 7:
//			printf("休息日\n");
//			break;
//		default:printf("已普遍理性而言，应该没有星期八\n");
//			break;
//	}    //default的作用是当用户输入的数字超出case情况时所执行的语句。
//}


//#include <stdio.h>
//int main()
//{
//	int n=1;
//	int m=2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)  //switch语句允许嵌套使用。
//		{
//		case 1:n++;
//		case 2:m++,n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d\n",m,n);
//}


//while  break跳出
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			break; //i为4时i<=10为真进入循环，遇到if(i==5)为假，break跳出，就不会执行下面的printf函数，故打印不出来5。
//		printf("%d\n",i);  //把if(i==5)break;放到printf下面即可打印出5。
//		i++;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int i=0;
//	while(i<=10)
//	{
//		i++;
//		if(i==5)
//			continue;  //continue作用是重新开始循环，continue一旦执行则其下面的函数不再执行。由此可知当i=5时进入循环if为真，执行continue，便进入死循环程序不中止。
//		printf("%d\n",i);  //当把i++放到if前面时，当i++为5时，continue重新执行while,i++变为6，if为假，所以可以打印出1~11没有5。		
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//   char ch;
//  while((ch=getchar())!=EOF) //输入EOF并不能终止循环，Ctrl+z终止循环。(EOF-->End of file文件结束标志)
//  {
//	   printf("%c",ch);
//	   putchar(ch); //两者效果相同。
//  }
// 
//}


//#include <stdio.h>
//int main()
//{
//	char password[19]={0};    //输入密码后直接跳到放弃确认，原因：scanf和getchar都属于输入函数，输入函数执行时都会到输入缓冲区搜索自己需要的东西。
//	char ch=0; //当我们输完密码后会按一个回车，这个回车也会被存放在输入缓冲区，假设输入了123456则实际输入缓冲区内存放的是123456\n,scanf拿走了123456(scanf结束输入的标志是遇到空格、回车、制表符)留下\n，当getchar执行时就会在缓冲区取走\n，导致if直接为假。
//	char ret=0;
//	char c=0;
//	printf("请输入密码:>");  //想再加一个getchar()来吃掉\n也是不可行的，如果密码中间有空格则scanf会取走空格之前的字符串，第一个getchar()吃掉空格第二个getchar会吃掉密码中的一个字符，导致直接结束。
//	scanf("%s",&password);//所以这里可以用while循环来解决while((ch=getchar())!='\n')让while一直吃直到把最后那个\n给吃掉。
//	while((ch=getchar())!='\n');
//	{
//		;  //这里是一个空函数，目的只是让while循环。 
//	}
//	printf("请确认密码(Y/N):>");
//	ret=getchar();
//	if(ret=='Y')
//	{	printf("确认成功\n");
//	printf("password=%s\n",password);
//	}
//	else
//	printf("放弃确认\n");
//}


//#include <stdio.h> //成功的大小写转化，考虑到了输入缓冲区。
//int main()
//{
//	char ch1=0;
//	char ch2=0;
//	printf("大小写转化:");
//	while((ch1=getchar())!=EOF)
//	{
//		ch2=getchar(); //这里再次使用getchar的原因是吃掉第一次输入后留下的回车，防止第一个getchar把回车吃掉。
//		if(ch1>='A'&&ch1<='Z')
//		printf("%c--%d\n请重新输入:",ch1+32,ch1+32);
//		else
//			printf("%c--%d\n请重新输入:",ch1-32,ch1-32);
//	}
//}


//for循环 for(exp1;exp2;exp3) for(赋值;循环条件;调整)
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;  //while和for循环有区别，while会造成死循环而for不会。while中如果i++在if前面则可避免死循环，for循环的最后一步时调整部分i++，在循环之外，所以可以随时对i进行加减调整动作，避开死循环。
//		break;
//		printf("%d ",i);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	char arr[]={'a','b','c','d','\0'};  //没有大括号中加小括号的说法。这种写法系统是不会自动补\0的所以打印字符串时程序会打出乱码。
//	printf("%d\n",sizeof(arr));
//	printf("%s\n",arr);
//}


//#include <stdio.h>
//int main()
//{	int a=0,b=0;
//for(;a<10;a++)
//{
//	for(;b<10;b++)  //第一个for一共进行10次循环，每一次循环第二个for都会进行10次循环所以一共会打印出10*10=100个haha。
//	{
//		printf("haha\n"); //如果将两个for的exp1都删掉的话第一个for执行时第二个for会执行10次，但第二个for的exp1被删除没有被赋初值，所以当第二个for执行10次后b=10,当第一个for进行第二次循环后第二个for中10<10为假，所以共打印出10个haha。
//	}
//}
//}


//#include <stdio.h>
//int main()
//{
//	int i=0,k=0;
//	for(i=0,k=0;k=0;i++,k++) //结果是循环0次，exp1是赋值，exp2是条件，但不要想当然的认为这个条件是当k=0时才循环，这时大错特错的，这个表达式的意思是将0赋值给k，=是赋值符号，for语句直接判定为假，根本不会循环。
//	{
//		k++;
//	}
//}


//do while 循环 不管三七二十一先来一次循环，然后再根据while()条件判断是否继续循环，do while语句至少执行一次循环。
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	do
//	{
//		if(i==5)
//			//break;
//			continue;
//		printf("%d ",i);
//		i++;
//	}
//	while(i<=10); //do while循环语句最后的while()后要加 ;
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=1;
//	printf("求n的阶乘:");
//	scanf("%d",&n);
//	for(;n>=1;n--)
//	{
//		i=i*n; //原理:这里i=1,第一次循环n=4,则i=4且保留下来，第二次循环i=4*3，依次循环便得到n的阶乘。
//	}
//	printf("结果=%d\n",i);
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++) //1~3的阶乘之和。
//	{
//		ret=1;
//		for(i=1;i<=n;i++)
//		{
//			ret=ret*i; //原理:这里i=1,第一次循环n=4,则i=4且保留下来，第二次循环i=4*3，依次循环便得到n的阶乘。
//		}
//		sum=sum+ret;
//		printf("%d\n",sum);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{
//		ret*=n;    //ret1=1*1 ret2=1*1*2 ret3=1*1*2*3
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++)
//	{
//		ret=ret*n; //n1=1 ret1=1*1;n2=2 ret2=1*1*2;n3=3 ret3=1*1*2*3
//		sum=sum+ret;
//	}
//	printf("%d\n",sum);
//}


//#include <stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	int k=9;	
//	while(left<=right)
//	{
//		int mid=(left+right)/2;		
//		if(k>arr[mid])
//			{left=mid+1;
//		}
//		else if(k<arr[mid])
//			{right=mid-1;
//		}
//		else
//			{printf("位于%d\n",mid);
//		break;
//		}
//
//	}
//	if(left>right)
//		printf("未找到\n");
//}


//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[]="Welcome to bit!!!!";
//	char arr2[]="                  ";
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//    Sleep(1000); //打印间隔为1000ms=1s.
//	system("cls"); //clean screen 
//	left++;
//	right--;
//	}
//	printf("Welcome to bit!!!!\n");
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3;i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",&password);
//		if(strcmp(password,"123456")==0)
//		{
//			printf("登陆成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重试\n");
//		}
//	}
//	if(i==3)
//	{
//		printf("已错误3次，请10分钟后再尝试\n");
//	}
//
//
//}


//#include <stdio.h>
//int MAX(int  x,int y,int z)
//{
//	if(x>y?x:y)
//		return x;
//	else if(y>z?y:z)
//		return y;
//	return z;
//}


//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int max=0;
//	printf("输入三个数字求max:>\n"); 
//	scanf("%d %d %d",&a,&b,&c);//目的就是让a变成最大的。
//	if(a<b)
//	{
//		int tmp=a;//把较大值赋给a，较小值赋给b，但不能直接赋值，因为这样会使a原本的值丢失。
//		a=b;//想象a是一瓶雪碧，b是一瓶可乐，我想把b倒进a里，这时就得用一个空瓶子tmp来装a再把b倒进a瓶子，最后把a雪碧倒进b瓶子里。
//		b=tmp;
//	}
//	if(a<c)  //a=5 b=4 c=2
//	{
//		int tmp=a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)
//	{
//		int tmp=b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d--%d--%d\n",a,b,c);
//}


//#include <stdio.h> //1~100内3的倍数。
//	int main()
//	{
//		int i=0;
//		for(i=1;i<=100;i++)
//		{
//			if(i%3==0)
//				printf("%d  ",i);
//		}
//	}


//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int r=0;
//	printf("求两数的最大公约数:>"); //辗转相除法。假设啊a=24，b=18，则a%b=6！=0，所以将6赋给b，将b赋给a，则a%b=0，则b是ab的最大公约数。
//	scanf("%d %d",&a,&b);
//	while(a%b)
//	{
//		r=a%b;
//		a=b;
//		b=r;
//	}
//	printf("%d\n",b);
//}


//#include <stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	printf("求n的阶乘:>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//	}
//	printf("%d的阶乘为%d\n",n,ret);
//}


//#include <stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	printf("求出1~n的阶乘之和:>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//		sum=sum+ret;
//	}
////	printf("1~%d的阶乘之和为%d\n",n,sum);
////}
//
//
//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	printf("求两数的最大公约数:>");
//	scanf("%d %d",&a,&b);
//	while(a%b)
//	{
//		int ret=a%b;
//		a=b;
//		b=ret;
//	}
//	printf("最大公约数为%d\n",b);


//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//	int main()
//	{
//		char arr1[]="Hello world!!!";
//			char arr2[]="              ";
//			int left = 0;
//		int right=strlen(arr1)-1;
//			while(left<=right)
//			{
//				arr2[left]=arr1[left];
//				arr2[right]=arr1[right];				
//				printf("%s",arr2);
//				Sleep(1000);
//				system("cls");
//				left++;
//				right--;	
//			}
//			printf("Hello world!!!\n");
//	}


//#include <stdio.h>
//int main()
//{
//	int year=0; //闰年判断规则：1.能被4整除但不能被100整除 2.能被400整除
//	int count=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(year%4==0 && year%100!=0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if(year%400==0)
//			{printf("%d ",year);
//		count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//}


//#include <stdio.h>
//int main() //素数:除了1和其本身再无任何因数的数，就是质数。
//{
//	int i=0; //试除法：产生2-->n-1的数，只要其中一个数能被整除，则该数不是素数。
//	int j=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j==i)
//	{
//		printf("%d ",i);
//		count++;
//	}
//
//	}
//	printf("\ncount=%d\n",count);
//
//}


//#include <stdio.h> //i=a*b a和b中至少有一个数<=开平方i则i为非素数。
//#include <math.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=101;i<=199;i+=2)//只要在开平方i之前找到一个数能整除i，则该数为非素数。
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++) //sqrt为开平方关键字，在math库函数中。
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//	}
//	if(j>sqrt(i))
//	{
//		count++;
//	printf("%d ",i);
//	}
//	}
//	printf("\ncount=%d\n",count);
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i=0;
//	for(i=101;i<=199;i+=2)
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//				break; //break是跳出自己所在的循环，并不会跳出整个循环！！！
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ",i);
//		}
//
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		 if(i/10==9)  //因为99两个条件都满足，所以都要用if，如果第二个用else if 则只会判断并执行第一个，都用if则电脑都会判断。
//		{
//			printf("%d ",i);
//				count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//}


//#include <stdio.h>
//
//int main()  //1/1-1/2+1/3-1/4......-1/100.
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("num=%lf\n",sum);
//}


//#include <stdio.h>
//
//int main()
//{
//	int i=0;
//	int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max=arr[0];            
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<=sz-1;i++)
//	{
//		if(arr[i]>max) //默认max=0，如果数组中都是负数，则max=0最大，循环结束打印出的max=0.
//		{
//			max=arr[i]; //解决方法是让max=arr[0].
//		}
//	}
//	printf("max=%d\n",max);
//	
//}


//#include <stdio.h>
//int main()
//{
//	int i=0;
//	int n=1;
//	for(i=1;i<=9;i++) //99乘法表
//	{
//		int j=1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		putchar('\n');
//	}
//
//}


//#include <stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	int k=7;
//                             //12345678910
//	while(left<=right)       //012345678 9  
//	{
//		int mid=(left+right)/2;
//		if(k>arr[mid])
//		{
//			left=mid+1;
//		}
//		else if(k<arr[mid])
//		{
//			right=mid-1;
//		}
//		else
//		{printf("下标为%d\n",mid);
//		break;
//		}
//	}
//	if(left>right)
//		printf("未找到\n");	
//}


//#include <stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	int k=9;	
//	while(left<=right)
//	{
//		int mid=(left+right)/2;		
//		if(k>arr[mid])
//			{left=mid+1;
//		}
//		else if(k<arr[mid])
//			{right=mid-1;
//		}
//		else
//			{printf("位于%d\n",mid);
//		break;
//		}
//
//	}
//	if(left>right)
//		printf("未找到\n");
//}


//void menu()
//{
//	printf("*********************\n");
//	printf("***1.Play   0.Exit***\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int ret=0;
//	int guess=0;
//	ret=rand()%100+1;
//	while(1)
//	{
//		printf("猜数字:>");
//		scanf("%d",&guess);
//			if(guess>ret)
//			{
//				printf("猜大了\n");
//			}
//			else if(guess<ret)
//			{
//				printf("猜小了\n");
//			}
//			else 
//			{
//				printf("恭喜你,猜对了!\n");
//				break;
//			}
//	}
//}
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int main()
//{
//		int input=0;
//	srand((unsigned)time(NULL));
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("已退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}	
//	}while(input);
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[20]={0};
//	again:
//	printf("此电脑将在1min后关机，输入 我是猪 即可停止关机\n请输入>:");
//	system("shutdown -s -t 60");
//	scanf("%s",&arr);
//	if(strcmp(arr,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{ printf("木大大!\n");
//	goto again;
//	}
//}
	


