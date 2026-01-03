/*
  Write a program of ifelse ladder to calculate the discount,gst,and total shopping amount
  give the value from user.
*/

#include<stdio.h>
#include<conio.h>

void display(int shop)
{
    if(shop>1000 && shop<3000)
    {
        printf("Your shopping amount is=%d\n",shop);
        int dis=shop-100;
        printf("Discount amount is= %d\n",dis);
        
        int gst=dis*12/100;
        printf("GST amount is=%d\n",gst);

        int total=gst+dis;
        printf("Total Amount is=%d\n",total);
    }

    else if(shop>3000 && shop<5000)
    {
        printf("Your shopping amount is=%d\n",shop);
        int dis=shop-200;
        printf("Discount amount is= %d\n",dis);
        
        int gst=dis*10/100;
        printf("GST amount is=%d\n",gst);

        int total=gst+dis;
        printf("Total Amount is=%d\n",total);
    }

     else if(shop>5000 && shop<10000)
    {
        printf("Your shopping amount is=%d\n",shop);
        int dis=shop-150;
        printf("Discount amount is= %d\n",dis);
        
        int gst=dis*7/100;
        printf("GST amount is=%d\n",gst);

        int total=gst+dis;
        printf("Total Amount is=%d\n",total);
    }
    else
    {
        printf("your are not valid this discount");
    }
}

int main()
{
    int shopping;


    printf("Enter the shopping amount=");
    scanf("%d",&shopping);

    display(shopping);
    return 0;

}
