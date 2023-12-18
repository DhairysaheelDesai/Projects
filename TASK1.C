#include<stdio.h>
#include<conio.h>
struct mart
{
int quantity,price;
char items[50];
}it;
void main()
{
int i;
struct mart it[50];
clrscr();
printf("Welcom to Digital Agriculture Marketing\n");
printf("  Enter available items:- ");
printf("\n");
for(i=0;i<1;i++)
{
 printf("\n  Enter Items: ");
 scanf("%s",&it[i].items);
 printf("  Enter Quantity kg: ");
 scanf("%d",&it[i].quantity);
 printf("  Enter Price in Rs: ");
 scanf("%d",&it[i].price);
}
printf("\nAvailable items in mart:- ");
printf("\n");
for (i=0;i<1;i++)
{
 printf("\n  Items: %s",it[i].items);
 printf("\n  Quantity in kg: %d",it[i].quantity);
 printf("\n  Price in rs: %d",it[i].price);
 printf("\n");
}
getch();
}
