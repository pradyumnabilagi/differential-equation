#include<stdio.h>
#include<math.h>
int resc();
int func();

float rep,dx,x,y,o,slope;

int main()
{
int rt=func();
if(2<rep)
    {
    int ret=main();
    }
else
{
printf("thank you for useing");
}
}




int func()
{
printf("enter the value of x at which you want to decide the functional value :");
scanf("%E",&x);
printf("please enter the functional value at x=%E :",x);
scanf("%E",&y);
printf("please enter at which value of x do you want the functional value :");
scanf("%E",&o);
if(x<o)
{
dx=0.0003;
}
else
 {
dx=-0.0003;
}
int ty=resc();
printf("if you want to repeat this process enter any number greater than 2 if you want to exit enter any number less than 2 :");
scanf("%E",&rep);
}

int resc()
{
//write your differential equation here and slope is just the'dy/dx'that you use in your math notebooks.
slope=((x*x)+y)/x;
x=x+dx;
y=y+(dx*slope);
if(dx<0)
{
if(o<x)
{
int qwe=resc();
}
else
{
printf("the functional value at x=%E is ",x);
printf("%E\n",y);
}
}
else
{
if(x<o)
{
int qwe=resc();
}
else
{
printf("the functional value at x=%E is ",x);
printf("%E\n",y);
}
}

}












