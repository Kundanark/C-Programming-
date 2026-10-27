 #include <stdio.h>
int main()
{
    int a,b,ch,c ;

    printf("[1] ADDITION");
    printf("\n[2] SUBTRACTION");
    printf("\n[3] MULTIPLICATION");
    printf("\n[4] DIVISION");
    printf("\n[5] REMAINDER");
    printf("\n[6] LARGER OF TWO");
    printf("\n[0] EXIT");
    printf("\nEnter your choise : ");
    scanf("%d",&ch);
    
    if (ch<=6 && ch>0){
        printf("Enter two numbers : ");
        scanf("%d,%d",&a,&b);}
    switch (ch)
    {
    case 1:
        c=a+b;
        printf("ADDITION = %d",c);
        break;
    case 2:
        c=a-b;
        printf("SUBTRACTION = %d",c);
        break;
    case 3:
        c=a*b;
        printf("MULTIPLICATION = %d",c);
        break;
    case 4:
        c=a/b;
        printf("DIVISION = %d",c);
        break;
    case 5:
        c=a%b;
        printf("REMAINDER = %d",c);
        break;
    case 6:
        if(a>b)
            printf("%d IS GREATER THAN %d",a,b);
        else if (b>a)
            printf("%d IS GREATER THAN %d",b,a);
        else
            printf("%d AND %d ARE SIMILAR NUMBERS",a,b);
        break;
    case 0:
        printf("TERMINATED BY CHOISE");
        break;
    default:
        printf("INVALID");
    }
    return 0;
}
