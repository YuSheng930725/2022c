#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);

    while(1)
    {
        c=a%b;
        printf("%lld%lld%lld\n");
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("µª®×¬O:%lld\n",b);
}
