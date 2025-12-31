/*
 Write a program of ifelse calculate the  shopping amount , discount ,gst and find total amount.
*/

#include<stdio.h>
#include<conio.h>

void display(int shop)
{
    if(shop>1000 && shop<5000)
    {
        printf("Your shopping amount is=%d\n",shop);
        int dis=shop-100;
        printf("Discount amount is= %d\n",dis);
        
        int gst=dis*12/100;
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
    int s;


    printf("Enter the shopping amount=");
    scanf("%d",&s);

    display(s);
    return 0;

}