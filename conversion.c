#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,base,i,rem,s;
    printf("Enter an integer\n");
    scanf("%d",&n);
    printf("Enter the base to which you want the no. to be converted\n");
    scanf("%d",&base);

        if(base==16)
        {
        char h[15];
        int d,k,i=0;
        while(n!=0)
        {
            k=n%16;
            if(k>9)
            h[i]=(char)(k+55);
            else
            h[i]=(char)(k+48);

            n=n/16;
            i++;
        }
        h[i]='\0';
        strrev(h);
        printf("%s",h);
        }
        else{
    for(s=0,i=0;n>0;i++)
    {
        rem=n%base;
        s=s+rem*pow(10,i);
        n=n/base;
    }
    printf("%d",s);}



    return 0;
}