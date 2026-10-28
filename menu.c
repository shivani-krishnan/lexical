#include<stdio.h>
int main()
{
    int option,count=0,price,c1=0,c2=0,c3=0,c4=0,c5=0,payment;
    float sum=0,GST,final_amount;
    do
    {
        printf("<-----------------------Welcome to Emertxe Cafe----------------------->\n\n");
        printf("1.Burger=100\n2.Pizza=250\n3.Pasta=150\n4.coffee=40\n5.Fresh Juic=60\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            printf("You Ordered Burger\n");
            c1++;
            break;

            case 2:
            printf("You Ordered Pizza\n");
            c2++;
            break;

            case 3:
            printf("You Ordered Pasta\n");
            c3++;
            break;

            case 4:
            printf("You Ordered Coffee\n");
            c4++;
            break;

            case 5:
            printf("You Ordered Fresh Juice\n");
            c5++;
            break;

            case 6:
            printf("Exit\n");
            break;

            default:
            printf("Sorry! no option available\n");
        }
        
    }while(option!=6);

    printf("\n------------------------------Your Order------------------------------\n");

    if(c1>0)
    {
        price=100;
        count=c1;
        printf("%d *Burger =%d *100= %d\n",count,count,count*price);
        sum=sum+price*count;
    }

    if(c2>0)
    {
        price=250;
        count=c2;
        printf("%d *Pizza =%d *250= %d\n",count,count,count*price);
        sum=sum+price*count;
    }

    if(c3>0)
    {
        price=150;
        count=c3;
        printf("%d *Pasta =%d *150= %d\n",count,count,count*price);
        sum=sum+price*count;
    }

    if(c4>0)
    {
        price=40;
        count=c4;
        printf("%d *Coffee =%d *40= %d\n",count,count,count*price);
        sum=sum+price*count;
    }

    if(c5>0)
    {
        price=60;
        count=c5;
        printf("%d *Fresh Juice =%d *60= %d\n",count,count,count*price);
        sum=sum+price*count;
    }

    GST=sum *18/100 ;
    final_amount=sum+GST;

    printf("---------------------------------------------------------------------\n");
    printf("Total=Rs.%.2f\n",sum);
    printf("GST(18%%)=Rs.%.2f\n",GST);

    printf("---------------------------------------------------------------------\n");
    printf("Final Amount=Rs.%.2f\n",final_amount);

    printf("---------------------------------------------------------------------\n");


    printf("\nSelect Payment method\n");
    printf("1.Google Pay(GPay)\n2.Cash on Delivery(COD)\n");
    printf("Enter your Payment Method: ");
    scanf("%d",&payment);

    switch(payment)
    {
        case 1:
            printf("You Selected Google Pay\n");
            printf("Please pay Rs.%.2f using GPay\n",final_amount);
            break;

        case 2:
            printf("You Selected Cash on Delivery\n");
            printf("Please pay Rs.%.2f on COD\n",final_amount);
            break;

        default:
            printf("Invalid Payment Option!\n");
    }

    printf("Thankyou. Visit Again!!\n\n");

    return 0;
    
}
