#include<conio.h>
#include <stdio.h>

    void fact(int n)
    {
        int ans=1;
        for(int i=n;i>=1;i--)
            ans=ans*i;
        printf("fcatorial of given number %d %d",n,ans);
    }
    void main()
    {
        int n=0;
        printf("Give a number\n");
        scanf("%d",&n);
        fact(n);
        getch();
}
