#include <math.h>

void main()
{
int d1,m1,y1,d2,m2,y2,a1,a2,z,x,y,b1,b2,c1,c2,k,l,e1,e2;
clrscr();

printf("/nenter date :");
scanf("%d", &d1);
printf("/nenter month number :");
scanf("%d, &m1");
printf("/nenter year :");
scanf("%d", &y1);

printf("/nnow give us the details of the other date below")

printf("/nenter date :");
scanf("%d", &d2);
printf("/nenter month number :");
scanf("%d, &m2");
printf("/nenter year :");
scanf("%d", &y2);

if(m1==1||3||5||7||8||1012) {a1=31-d1;}
if(m1==2 && y1%4==0) {a1=29-d1;}
if(m1==2 && y1%4==0) {a1=28-d1;}
if(m1==4||7||9||11) {a1=30-d1;}

b1=m1+1;
c1=12-b1;
b2=m2-1;
c2=12-b2;

if(c1==1) {x=1&&y=0&&z=0;}
if(c1==2) {x=1&&y=1&&z=0;}
if(c1==3) {x=2&&y=1&&z=0;}
if(c1==4) {x=2&&y=2&&z=0;}
if(c1==5) {x=3&&y=2&&z=0;}
if(c1==6) {x=4&&y=2&&z=0;}
if(c1==7) {x=4&&y=3&&z=0;}
if(c1==8) {x=5&&y=3&&z=0;}
if(c1==9) {x=5&&y=4&&z=0;}
if(c1==10) {x=6&&y=4&&z=0;}
if(c1==11&&y1%4=0) {x=6&&y=4&&z=29;}
if(c1==11) {x=6&&y=4&&z=28;}

e1=(x*31)+(y*30)+z;
e2=(x*31)+(y*30)+z;



getch();
}
