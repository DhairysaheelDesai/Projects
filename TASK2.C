#include<stdio.h>
#include<conio.h>
int main()
{
int a,r=10,s=20,t=30,b,c,d,e,f;
clrscr();
printf("*Welcom to Digital Agriculture Marketing*\n");
printf("\n  Available items in mart are:-");
printf("\n  Choose Required Items:\n  1-Tomato\n  2-Onion\n  3-Carrot\n");
printf("  Enter choice: ");
scanf("%d",&a);
switch(a)
{
 case 1:
 {
  if(a==1)
   printf("\n   Tomato rate: 10rs/kg\n");
   printf("\n   Available Tomato: 500kg\n");
   printf("\n   Enter your required quantity in kg: ");
   scanf("%d",&b);
   if(b>500)
   {
   printf("\n   Not sufficient stalk");
   }
   else
   {
   e=r*b;
   printf("\n   Your price for required quantity: %d",e);
   }
 }

 break;

 case 2:
 {
  if(a==2)
   printf("\n   Onion rate: 20rs/kg\n");
   printf("\n   Available Onion: 400kg\n");
   printf("\n   Enter your required quantity in kg: ");
   scanf("%d",&c);
   if(c>400)
   {
   printf("\n   Not sufficient stalk");
   }
   else
   {
   e=s*c;
   printf("\n   Your price for required quantity: %d",e);
   }

 }

 break;

 case 3:
 {
  if(a==3)

   printf("\n   Carrot rate: 30rs/kg\n");
   printf("\n   Available Carrot: 600kg\n");
   printf("\n   Enter your required quantity in kg: ");
   scanf("%d",&d);
   if(d>600)
   {
   printf("\n   Not sufficient stalk");
   }
   else
   {
   e=t*d;
   printf("\n   Your price for required quantity: %d",e);
   }
 }

 break;

 default:
  printf("\n  Incorrect choice");
 break;
}
getch();
return 0;
}