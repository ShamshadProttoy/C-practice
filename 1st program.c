#include <stdio.h>

main()
{
    int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("The largest number is %d",a);
    else if(b>a&&b>c)
        printf("%d Is the largest number",b);
    else
        printf("%d is the largest number",c);
    return 0;

}
