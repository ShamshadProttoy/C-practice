#include<stdio.h>
int main()
{
    int a,b,code;
    double e,count=0,sum=0;
    char name[100];
    printf("NAME: \n");
    gets(name);
    printf("ID NO(last 3 digit): ");
    scanf("%d",&b);
    printf("\nwhich topic you're going to choose?\n");
    printf("sub code:    subject\n");
    printf("\n   101:       'BANGLADESH STUDIES'\n");
    printf("     102:       'BANGLADESH STUDIES'\n");
    printf("     103:       'BANGLADESH STUDIES'\n");
    printf("\nType your code\n");
    scanf("%d",&code);
    if(code==101)
    {
        printf("BANGLADESH STUDIES\n");

    Q1:
    printf("\nQ1.Name of the currency of Bangladesh?\n");
    printf("1.taka\n");
    printf("2.rupi\n");
    printf("3.dollar\n");
    printf("4.pound\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q1;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
    Q2:
    printf("\nQ2.what is the national fruit of Bangladesh?\n");
    printf("1.mango\n");
    printf("2.jack fruit\n");
    printf("3.lichi\n");
    printf("4.banana\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==2)
    {
        printf("\nright answer\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q2;
    }
    else
    {
        printf("\nwrong answer\n");
        sum=sum+0.25;
    }
    Q3:
     printf("\nQ3.which one is the victory day of bangladesh?\n");
    printf("1.15 december\n");
    printf("2.26 march\n");
    printf("3.21 february\n");
    printf("4.16 december\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==4)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
    else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q3;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }


     Q4:
     printf("\nQ4.what is the capital of Bangladesh?\n");
    printf("1.Rajshahi\n");
    printf("2.Chittagong\n");
    printf("3.Dhaka\n");
    printf("4.Barishal\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==3)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
         else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q4;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
    Q5:
     printf("\nQ5.who introduced Bangla calender?\n");
    printf("1.Laxman Sen\n");
    printf("2.Samrat Akhbar\n");
    printf("3.abul Fazal\n");
    printf("4.Dara\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==2)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q5;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }

    Q6:
     printf("\nQ6.who is the captain of Bangladesh cricket team?\n");
    printf("1.Musfiqur Rahim\n");
    printf("2.Sakib al Hasan\n");
    printf("3.Sabbir Rahman\n");
    printf("4.Mashrafee bin Mortaza\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==4)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q6;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }

    Q7:
     printf("\nQ7.Who is the prime minister of Bangladesh?\n");
    printf("1.Sheikh Hasina\n");
    printf("2.Khaleda Zia\n");
    printf("3.Hussain Ershad\n");
    printf("4.Yeasin Rifat\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q7;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }

    Q8:
     printf("\nQ8.Which country has  boundary line with Bangladesh?\n");
    printf("1.China\n");
    printf("2.Japan\n");
    printf("3.India\n");
    printf("4.Bhutan\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==3)
    {
        printf("\nright answer!\n");
        count=count+1;
        }
         else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q8;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }

    Q9:
     printf("\nQ9.Which was the 1st cinema hall in Bangladesh ?\n");
    printf("1.picture house\n");
    printf("2.sabistan\n");
    printf("3.Rupmohol\n");
    printf("4.Gulistan\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q9;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }

    Q10:
     printf("\nQ10.First newspaper on Bengali language?\n");
    printf("1.Protham Alo\n");
    printf("2.Azad\n");
    printf("3.Bengal Gadget\n");
    printf("4.Samachar Darpon\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==4)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q10;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
    }
    else if(code==102)
    {
        Qu1:
    printf("\nQ1.Which is the smallest country in Asia by population?\n");
    printf("1.Nepal \n");
    printf("2.Bhutan\n");
    printf("3.Maldives\n");
    printf("4.Thailand\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu1;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu2:
        printf("\nQ2.What is the world's population now?\n");
        printf("1.8,000 million\n");
    printf("2.7,160 million\n");
    printf("3.7,000 million\n");
    printf("4.6,650 million\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==2)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu2;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu3:
    printf("\nQ3.Which country of the world is called 'Zero population country?'\n");
        printf("1.Poland\n");
    printf("2.France\n");
    printf("3.Germany\n");
    printf("4.Sweden\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu3;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu4:
    printf("\nQ4.Which UN Body deals with Population problem?\n");
        printf("1.UNFPA\n");
    printf("2.UNDP\n");
    printf("3.UNICEF\n");
    printf("4.UNESCO\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu4;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu5:
     printf("\nQ5.The richest man in the world has business interest in-\n");
        printf("1.Computer\n");
    printf("2.Auto mobile\n");
    printf("3.Television Media\n");
    printf("4.Film\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu5;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu6:
    printf("\nQ6.What is the Serial of Barack Obama as US President?\n");
        printf("1.44th\n");
    printf("2.43rd\n");
    printf("3.42nd\n");
    printf("4.40th\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu6;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu7:
    printf("\nQ7.What is the full form of ICC?\n");
        printf("1.International Cricket Countries\n");
    printf("2.International Cricket Council\n");
    printf("3.International Cricket Committee\n");
    printf("4.None\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==2)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu7;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu8:
    printf("\nQ8.Which Country scored the highest number of goals in the last World Cup Football Tournament?\n");
        printf("1.Argentina\n");
    printf("2.Brazil\n");
    printf("3.Germany\n");
    printf("4.Italy\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu8;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu9:
    printf("\nQ9.Among the following who was not a winner of Nobel Prize in literature?\n");
        printf("1.T.S Eliot\n");
    printf("2.George Bernard Shaw\n");
    printf("3.Pablo Neruda\n");
    printf("4.Leo Tolstoy\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==4)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu9;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
    Qu10:
    printf("\nQ10.Niagara Falls is located in-\n");
        printf("1.Asia\n");
    printf("2.Africa\n");
    printf("3.North America\n");
    printf("4.Australia\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu10;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }

    }
    e=count-sum;
    printf("\nID NO:%d\n",b);
    printf("total score=%.2lf\n",e);
}

else if(code==103)
   {
       printf("BANGLADESH STUDIES\n");

 Qu1:
    printf("\nQ1.Name of the currency of Bangladesh?\n");
    printf("1.taka\n");
    printf("2.rupi\n");
    printf("3.dollar\n");
    printf("4.pound\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Qu1;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
Qu2:
        printf("\nQ2.What is the world's population now?\n");
        printf("1.8,000 million\n");
    printf("2.7,160 million\n");
    printf("3.7,000 million\n");
    printf("4.6,650 million\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==2)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu2;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
Q3:
     printf("\nQ3.which one is the victory day of bangladesh?\n");
    printf("1.15 december\n");
    printf("2.26 march\n");
    printf("3.21 february\n");
    printf("4.16 december\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==4)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
    else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q3;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
Qu4:
    printf("\nQ4.Which UN Body deals with Population problem?\n");
        printf("1.UNFPA\n");
    printf("2.UNDP\n");
    printf("3.UNICEF\n");
    printf("4.UNESCO\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu4;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
Q5:
     printf("\nQ5.who introduced Bangla calender?\n");
    printf("1.Laxman Sen\n");
    printf("2.Samrat Akhbar\n");
    printf("3.abul Fazal\n");
    printf("4.Dara\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==2)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q5;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
Qu6:
    printf("\nQ6.What is the Serial of Barack Obama as US President?\n");
        printf("1.44th\n");
    printf("2.43rd\n");
    printf("3.42nd\n");
    printf("4.40th\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu6;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
Q7:
     printf("\nQ7.Who is the prime minister of Bangladesh?\n");
    printf("1.Sheikh Hasina\n");
    printf("2.Khaleda Zia\n");
    printf("3.Hussain Ershad\n");
    printf("4.Yeasin Rifat\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q7;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
Qu8:
    printf("\nQ8.Which Country scored the highest number of goals in the last World Cup Football Tournament?\n");
        printf("1.Argentina\n");
    printf("2.Brazil\n");
    printf("3.Germany\n");
    printf("4.Italy\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu8;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }
Q9:
     printf("\nQ9.Which was the 1st cinema hall in Bangladesh ?\n");
    printf("1.picture house\n");
    printf("2.sabistan\n");
    printf("3.Rupmohol\n");
    printf("4.Gulistan\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nright answer!\n");
        count=count+1;
    }
     else if(a>4)
    {
        printf("\nERROR!please type your ans 1 to 4\n");
        goto Q9;
    }
    else
    {
        printf("\nwrong answer!\n");
        sum=sum+0.25;
    }
Qu10:
    printf("\nQ10.Niagara Falls is located in-\n");
        printf("1.Asia\n");
    printf("2.Africa\n");
    printf("3.North America\n");
    printf("4.Australia\n");
    printf("\nchoose the correct answer\n");
    scanf("%d",&a);
    if (a==3)
    {
        printf("\nright answer!\n");
        count = count+1;

    }
    else if(a>4)
    {
        printf("\nERROR!please type yours ans 1 to 4\n");
        goto Qu10;
    }
    else {
    printf("\nWrong answer!\n");
    sum=sum+0.25;
    }

    }
    e=count-sum;
    printf("\nID NO:%d\n",b);
    printf("total score=%.2lf\n",e);

}
}
   else
  {
        printf("Correct Your Code\n");
  }
return 0;
}
