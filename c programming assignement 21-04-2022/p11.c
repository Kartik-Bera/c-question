// #include<stdio.h>
// #include<conio.h>
// #include<graphics.h>
// void car(int x);
// int main()
// {
// int gd=DETECT,gn;
// int x;
// char ch;
// initgraph(&gd,&gn,"C:\\TC\\BGI");
// x=getmaxx();
// ch='r';
// //post
// while(ch!='e')
// {
// cleardevice();
// rectangle(50,150,100,50);
// line(75,150,75,450);
// line(85,150,85,450);
// circle(75,75,10);
// circle(75,100,10);
// circle(75,125,10);
// car(x);
// switch(ch)
// {
// case 'r':setfillstyle(SOLID_FILL,RED);
// circle(75,75,10);
// floodfill(75,75,WHITE);
// circle(75,100,10);
// circle(75,125,10);
// break;
// case 'g':setfillstyle(SOLID_FILL,GREEN);
// circle(75,75,10);
// circle(75,100,10);
// floodfill(75,100,WHITE);
// circle(75,125,10);
// while(!kbhit())
// {
// x--;
// if(x<290)
// {
// x=getmaxx();
// }
// car(x);
// circle(75,75,10);
// circle(75,100,10);
// floodfill(75,100,WHITE);
// circle(75,125,10);
// delay(50);
// }
// break;
// case 'y':setfillstyle(SOLID_FILL,YELLOW);
// circle(75,75,10);
// circle(75,100,10);
// circle(75,125,10);
// floodfill(75,125,WHITE);
// break;
// default: printf("Thank you");
// break;
// }
// delay(50);
// ch=getch();
// }
// getch();
// return 0;
// }
// void car(int x)
// {
// int y=350,r=25;
// cleardevice();
// line(x-249,y,x-219,y);
// sector(x-169,y,0,180,50,50);
// line(x-119,y,x-89,y);
// circle(x-219,y+25,r);
// circle(x-119,y+25,r);
// }