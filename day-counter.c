#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int x,y,z,d1,m1,y1,d2,m2,y2,a1,a2,z1,x1,x2,z2,b1,b2,c1,c2,k,l,e1,e2;
clrscr();
printf("/n enter date :");
scanf("%d", &d1);
printf("/n enter month number :");
scanf("%d, &m1");
printf("/n enter year :");
scanf("%d", &y1);

printf("/n now give us the details of the other date below");

printf("/n enter date :");
scanf("%d", &d2);
printf("/n enter month number :");
scanf("%d, &m2");
printf("/n enter year :");
scanf("%d", &y2);

if(m1==1||3||5||7||8||1012) {a1=31-d1;}
if(m1==2 && y1%4==0) {a1=29-d1;}
if(m1==2 && y1%4==0) {a1=28-d1;}
if(m1==4||7||9||11) {a1=30-d1;}

b1=m1+1;
c1=12-b1;
c2=m2-1;

if(c1==1) {x1=1;y1=0;z1=0;}
if(c1==2) {x1=1;y1=1;z1=0;}
if(c1==3) {x1=2;y1=1;z1=0;}
if(c1==4) {x1=2;y1=2;z1=0;}
if(c1==5) {x1=3;y1=2;z1=0;}
if(c1==6) {x1=4;y1=2;z1=0;}
if(c1==7) {x1=4;y1=3;z1=0;}
if(c1==8) {x1=5;y1=3;z1=0;}
if(c1==9) {x1=5;y1=4;z1=0;}
if(c1==10) {x1=6;y1=4;z1=0;}
if(c1==11&&y1%4==0) {x1=6;y1=4;z1=29;}
if(c1==11) {x1=6;y1=4;z1=28;}

if(c2==1) {x2=1;y1=0;}
if(c2==2&&y2%4==0) {x2=1;y1=0;}
if(c2==2) {x2=1;y1=0;}
if(c2==3) {x2=2;y1=0;}
if(c2==4) {x2=2;y1=1;}
if(c2==5) {x2=3;y1=1;}
if(c2==6) {x2=1;y1=0;}
if(c2==7) {x2=1;y1=0;}
if(c2==8) {x2=1;y1=0;}
if(c2==9) {x2=1;y1=0;}
if(c2==10) {x2=1;y1=0;}
if(c2==11) {x2=1;y1=0;}

e1=(x1*31)+(y1*30)+z1;
e2=(x*31)+(y*30)+z;

getch();
}
