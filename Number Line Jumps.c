#include<stdio.h>
int main()
{
    int x1,x2,v1,v2,r;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v1>v2)
    {
        r= (x1 - x2) % (v2-v1);
        if (r==0)
        {
            printf("YES");            
        }
        else
        printf("NO");
    }
    else
    
    
    printf("NO");
    
}

