#include<stdio.h>
#include<math.h>
//��������5 
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
        printf("%d������\n",m);
    }
    else
    {
        printf("%d��������\n",m);
    }
}
