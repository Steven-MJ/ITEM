#include<stdio.h>
#include<math.h>
//测试样例5 
void main()

{
    int m,flag,i;
    scanf("%d",&m);
    flag=1;
    for(i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
        {
            flag=0;
            break;
        }
    }//DJSIADJFJSAOFJAI
    if(flag)
    {
        printf("%d是素数\n",m);
    }
    else
    {
        printf("%d不是素数\n",m);
    }
}
