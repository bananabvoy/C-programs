/*
compute sin(x)/cos(x) using taylor series approximation. compare your result with the built in library func.
Print both the results with appropriate inferences.

name-Sangham Sarkar
Roll no-10
Sec-N
Date:-3/2/2022

SIN(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9!- ... (n no of times)
COS(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8!- ... (n no of times)


*/

#include <stdio.h>
#include <math.h>


float Factorial(float x)
{
float fa = 1;
for(int i=1;i<=x;i++)
{
fa = fa*i;
}
return fa;
}

float sine(float a)
{
float sinAns;
int i;
float fact;
int num = 0;
for(i = 3;i<=100;i+=2)
{

fact = Factorial(i);
if(num%2==0)
sinAns -= pow(a,i)/fact;
else if(num%2!=0)
sinAns += pow(a,i)/fact;
num+=1;
}
sinAns = a+sinAns;
return sinAns;
}

float cosine(float a)
{
float cosAns;
int i;
float fact;
int num = 0;
for(i = 2;i<=16;i+=2)
{

fact = Factorial(i);
if(num%2==0)
cosAns -= pow(a,i)/fact;
else if(num%2!=0)
cosAns += pow(a,i)/fact;
num+=1;
}
cosAns = 1+cosAns;
return cosAns;
}

int main()
{
float x;

printf("Enter the value of x: ");
scanf("%f",&x);
x *= (3.14156/180);
printf("sin = %f\n", sine(x));
printf("cos = %f\n", cosine(x));

return 0;
}
