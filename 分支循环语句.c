#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int age=0;
//	printf("Input your age>:\n");
//	scanf("%d",&age);  //scanf���治Ҫ��\n
//	if(age<18)  //if���治Ҫ�� ;   
//	printf("δ����\n");
//	else if(18<=age<28)
//	/*else if(18<=age&&age<28)*/ //�߼��� ��ȷд��
//	printf("����\n");  //�����Ϊ����,��Ϊ18<=age<28�������18<=ageΪ�����Ϊ0�ͱ����0<28�ж�Ϊ�棬�����"����"��
//	else if(age>=28&&age<50)
//	printf("׳��\n");
//	else if(age>=50&&age<90)  //if elseֻ����һ������else if��������������***
//	printf("����\n");
//	else 
//    printf("�ϲ�����\n");            
//}


//#include <stdio.h>
//int main()
//{
//	int age=0;
//	printf("Input your age>:\n");
//	scanf("%d",&age); 
//	if(age<18)          //���if������������Ҫִ�ж����䣬��ȷ�ı�﷽ʽ�����ô���顣
//	{printf("δ����\n");
//	printf("������\n");
//	}
//}


//#include <stdio.h>  //***����else����***��ֻҪ��һ��if�ж�Ϊ���򲻻��ٽ�����ȥ��������ǲ����ӡ�κζ�����
//int main()          //ʵ����else�Ǻ;����������if��������ϵ�����ͽ�ԭ������a==0Ϊ����ж�b==0Ϊ�٣���else���������
//{
//	int a=0,b=1;
//	if(a==1)
//	{
//		if(b==1)
//
//	printf("hehe\n");   //���ô���齫if(b==0)��������else�㲻��������ƥ�����Ա�����haha����ʱ�͵�һ��ifƥ�䡣
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
//	if(a!=5)  //�˴����ַ��Ŵ��󣬽����ӡ��hehe��ԭ������Ϊ=��==��ͬ��=�Ǹ�ֵ��==���ж���ȣ�a=5�ǽ�5��ֵ��a��0Ϊ��if������
//		printf("hehe\n");  //��ʹ��==��if��������!=�������ж������Ƿ���ȣ������Ϊ�棬���Ϊ�١�
//}


//#include <stdio.h>
//int main()
//{
//	int a=1;
//	while(a<100)
//	
//	{
//		//a++;
//		//if(a%2!=0) //if(a%2==1)Ч��һ����
//			printf("%d ",a);
//				a+=2;	
//	}	
//}


//switch case break ��䣬switch�����ڶ��֧�ṹ��
//#include <stdio.h>
//int main()
//{
//	int day=0;
//	printf("Input a number\n");
//	scanf("%d",&day);  //switch(����������)
//	switch(day)  //day����Ϊ���ʹ�case������break������������
//	{
//	case 1:printf("����һ\n");  //case������ڣ�break�������ڡ�
//		break;
//		case 2:printf("���ڶ�\n");  //case����Ҳ����������1��1.0�ǽ�Ȼ��ͬ�ġ�
//		break;
//		case 3:printf("������\n");
//		break;
//		case 4:printf("������\n");
//		break;
//		case 5:printf("������\n");
//		break;
//		case 6:printf("������\n");
//		break;
//		case 7:printf("������\n");
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
//	    case 1:   //���ݲ�ͬ������break�����ʹ�á�
//		case 2:  
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//		break;
//		case 6:		
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:printf("���ձ����Զ��ԣ�Ӧ��û�����ڰ�\n");
//			break;
//	}    //default�������ǵ��û���������ֳ���case���ʱ��ִ�е���䡣
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
//		switch(n)  //switch�������Ƕ��ʹ�á�
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


//while  break����
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			break; //iΪ4ʱi<=10Ϊ�����ѭ��������if(i==5)Ϊ�٣�break�������Ͳ���ִ�������printf�������ʴ�ӡ������5��
//		printf("%d\n",i);  //��if(i==5)break;�ŵ�printf���漴�ɴ�ӡ��5��
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
//			continue;  //continue���������¿�ʼѭ����continueһ��ִ����������ĺ�������ִ�С��ɴ˿�֪��i=5ʱ����ѭ��ifΪ�棬ִ��continue���������ѭ��������ֹ��
//		printf("%d\n",i);  //����i++�ŵ�ifǰ��ʱ����i++Ϊ5ʱ��continue����ִ��while,i++��Ϊ6��ifΪ�٣����Կ��Դ�ӡ��1~11û��5��		
//	}
//}


//#include <stdio.h>
//
//int main()
//{
//   char ch;
//  while((ch=getchar())!=EOF) //����EOF��������ֹѭ����Ctrl+z��ֹѭ����(EOF-->End of file�ļ�������־)
//  {
//	   printf("%c",ch);
//	   putchar(ch); //����Ч����ͬ��
//  }
// 
//}


//#include <stdio.h>
//int main()
//{
//	char password[19]={0};    //���������ֱ����������ȷ�ϣ�ԭ��scanf��getchar���������뺯�������뺯��ִ��ʱ���ᵽ���뻺���������Լ���Ҫ�Ķ�����
//	char ch=0; //���������������ᰴһ���س�������س�Ҳ�ᱻ��������뻺����������������123456��ʵ�����뻺�����ڴ�ŵ���123456\n,scanf������123456(scanf��������ı�־�������ո񡢻س����Ʊ��)����\n����getcharִ��ʱ�ͻ��ڻ�����ȡ��\n������ifֱ��Ϊ�١�
//	char ret=0;
//	char c=0;
//	printf("����������:>");  //���ټ�һ��getchar()���Ե�\nҲ�ǲ����еģ���������м��пո���scanf��ȡ�߿ո�֮ǰ���ַ�������һ��getchar()�Ե��ո�ڶ���getchar��Ե������е�һ���ַ�������ֱ�ӽ�����
//	scanf("%s",&password);//�������������whileѭ�������while((ch=getchar())!='\n')��whileһֱ��ֱ��������Ǹ�\n���Ե���
//	while((ch=getchar())!='\n');
//	{
//		;  //������һ���պ�����Ŀ��ֻ����whileѭ���� 
//	}
//	printf("��ȷ������(Y/N):>");
//	ret=getchar();
//	if(ret=='Y')
//	{	printf("ȷ�ϳɹ�\n");
//	printf("password=%s\n",password);
//	}
//	else
//	printf("����ȷ��\n");
//}


//#include <stdio.h> //�ɹ��Ĵ�Сдת�������ǵ������뻺������
//int main()
//{
//	char ch1=0;
//	char ch2=0;
//	printf("��Сдת��:");
//	while((ch1=getchar())!=EOF)
//	{
//		ch2=getchar(); //�����ٴ�ʹ��getchar��ԭ���ǳԵ���һ����������µĻس�����ֹ��һ��getchar�ѻس��Ե���
//		if(ch1>='A'&&ch1<='Z')
//		printf("%c--%d\n����������:",ch1+32,ch1+32);
//		else
//			printf("%c--%d\n����������:",ch1-32,ch1-32);
//	}
//}


//forѭ�� for(exp1;exp2;exp3) for(��ֵ;ѭ������;����)
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;  //while��forѭ��������while�������ѭ����for���ᡣwhile�����i++��ifǰ����ɱ�����ѭ����forѭ�������һ��ʱ��������i++����ѭ��֮�⣬���Կ�����ʱ��i���мӼ������������ܿ���ѭ����
//		break;
//		printf("%d ",i);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	char arr[]={'a','b','c','d','\0'};  //û�д������м�С���ŵ�˵��������д��ϵͳ�ǲ����Զ���\0�����Դ�ӡ�ַ���ʱ����������롣
//	printf("%d\n",sizeof(arr));
//	printf("%s\n",arr);
//}


//#include <stdio.h>
//int main()
//{	int a=0,b=0;
//for(;a<10;a++)
//{
//	for(;b<10;b++)  //��һ��forһ������10��ѭ����ÿһ��ѭ���ڶ���for�������10��ѭ������һ�����ӡ��10*10=100��haha��
//	{
//		printf("haha\n"); //���������for��exp1��ɾ���Ļ���һ��forִ��ʱ�ڶ���for��ִ��10�Σ����ڶ���for��exp1��ɾ��û�б�����ֵ�����Ե��ڶ���forִ��10�κ�b=10,����һ��for���еڶ���ѭ����ڶ���for��10<10Ϊ�٣����Թ���ӡ��10��haha��
//	}
//}
//}


//#include <stdio.h>
//int main()
//{
//	int i=0,k=0;
//	for(i=0,k=0;k=0;i++,k++) //�����ѭ��0�Σ�exp1�Ǹ�ֵ��exp2������������Ҫ�뵱Ȼ����Ϊ��������ǵ�k=0ʱ��ѭ������ʱ����ش�ģ�������ʽ����˼�ǽ�0��ֵ��k��=�Ǹ�ֵ���ţ�for���ֱ���ж�Ϊ�٣���������ѭ����
//	{
//		k++;
//	}
//}


//do while ѭ�� �������߶�ʮһ����һ��ѭ����Ȼ���ٸ���while()�����ж��Ƿ����ѭ����do while�������ִ��һ��ѭ����
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
//	while(i<=10); //do whileѭ���������while()��Ҫ�� ;
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=1;
//	printf("��n�Ľ׳�:");
//	scanf("%d",&n);
//	for(;n>=1;n--)
//	{
//		i=i*n; //ԭ��:����i=1,��һ��ѭ��n=4,��i=4�ұ����������ڶ���ѭ��i=4*3������ѭ����õ�n�Ľ׳ˡ�
//	}
//	printf("���=%d\n",i);
//}


//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=3;n++) //1~3�Ľ׳�֮�͡�
//	{
//		ret=1;
//		for(i=1;i<=n;i++)
//		{
//			ret=ret*i; //ԭ��:����i=1,��һ��ѭ��n=4,��i=4�ұ����������ڶ���ѭ��i=4*3������ѭ����õ�n�Ľ׳ˡ�
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
//			{printf("λ��%d\n",mid);
//		break;
//		}
//
//	}
//	if(left>right)
//		printf("δ�ҵ�\n");
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
//    Sleep(1000); //��ӡ���Ϊ1000ms=1s.
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
//		printf("����������:>");
//		scanf("%s",&password);
//		if(strcmp(password,"123456")==0)
//		{
//			printf("��½�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������������\n");
//		}
//	}
//	if(i==3)
//	{
//		printf("�Ѵ���3�Σ���10���Ӻ��ٳ���\n");
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
//	printf("��������������max:>\n"); 
//	scanf("%d %d %d",&a,&b,&c);//Ŀ�ľ�����a������ġ�
//	if(a<b)
//	{
//		int tmp=a;//�ѽϴ�ֵ����a����Сֵ����b��������ֱ�Ӹ�ֵ����Ϊ������ʹaԭ����ֵ��ʧ��
//		a=b;//����a��һƿѩ�̣�b��һƿ���֣������b����a���ʱ�͵���һ����ƿ��tmp��װa�ٰ�b����aƿ�ӣ�����aѩ�̵���bƿ���
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


//#include <stdio.h> //1~100��3�ı�����
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
//	printf("�����������Լ��:>"); //շת����������谡a=24��b=18����a%b=6��=0�����Խ�6����b����b����a����a%b=0����b��ab�����Լ����
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
//	printf("��n�Ľ׳�:>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n",n,ret);
//}


//#include <stdio.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret=1;
//	int sum=0;
//	printf("���1~n�Ľ׳�֮��:>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//		sum=sum+ret;
//	}
////	printf("1~%d�Ľ׳�֮��Ϊ%d\n",n,sum);
////}
//
//
//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	printf("�����������Լ��:>");
//	scanf("%d %d",&a,&b);
//	while(a%b)
//	{
//		int ret=a%b;
//		a=b;
//		b=ret;
//	}
//	printf("���Լ��Ϊ%d\n",b);


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
//	int year=0; //�����жϹ���1.�ܱ�4���������ܱ�100���� 2.�ܱ�400����
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
//int main() //����:����1���䱾�������κ���������������������
//{
//	int i=0; //�Գ���������2-->n-1������ֻҪ����һ�����ܱ����������������������
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


//#include <stdio.h> //i=a*b a��b��������һ����<=��ƽ��i��iΪ��������
//#include <math.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=101;i<=199;i+=2)//ֻҪ�ڿ�ƽ��i֮ǰ�ҵ�һ����������i�������Ϊ��������
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++) //sqrtΪ��ƽ���ؼ��֣���math�⺯���С�
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
//				break; //break�������Լ����ڵ�ѭ������������������ѭ��������
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
//		 if(i/10==9)  //��Ϊ99�������������㣬���Զ�Ҫ��if������ڶ�����else if ��ֻ���жϲ�ִ�е�һ��������if����Զ����жϡ�
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
//		if(arr[i]>max) //Ĭ��max=0����������ж��Ǹ�������max=0���ѭ��������ӡ����max=0.
//		{
//			max=arr[i]; //�����������max=arr[0].
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
//	for(i=1;i<=9;i++) //99�˷���
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
//		{printf("�±�Ϊ%d\n",mid);
//		break;
//		}
//	}
//	if(left>right)
//		printf("δ�ҵ�\n");	
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
//			{printf("λ��%d\n",mid);
//		break;
//		}
//
//	}
//	if(left>right)
//		printf("δ�ҵ�\n");
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
//		printf("������:>");
//		scanf("%d",&guess);
//			if(guess>ret)
//			{
//				printf("�´���\n");
//			}
//			else if(guess<ret)
//			{
//				printf("��С��\n");
//			}
//			else 
//			{
//				printf("��ϲ��,�¶���!\n");
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
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("���˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	printf("�˵��Խ���1min��ػ������� ������ ����ֹͣ�ػ�\n������>:");
//	system("shutdown -s -t 60");
//	scanf("%s",&arr);
//	if(strcmp(arr,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{ printf("ľ���!\n");
//	goto again;
//	}
//}
	


