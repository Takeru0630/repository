// Ex1-1.c 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double bisection(double a, double b);
double f(double x);

int main(){
  double ans;
  double a1=-10, a2=-1, a3=1, a4=10;
  ans = bisection(a1,a2); 
  printf("Solution 1 = %6.3lf\n", ans);
  ans = bisection(a3,a4); 
  printf("Solution 2 = %6.3lf \n", ans);
 return 0;
}

double bisection(double a, double b){
  double c, ans;
  c = (a+b)/2;//[ 空欄1-1 ]
  if(fabs(f(c)) < 1.e-3) return c;
  printf("%6.3lf %6.3lf\n",a,b);
  ans =c;
  if(fabs(ans) < 1.e-3) return ans;
  if(fabs(a-b)>1.e-3){
     if(f(a)*f(c)<0.0) ans=bisection(a,c);//[ 空欄1-2 ]
     if(f(c)*f(b)<0.0) ans=bisection(c,b);//[ 空欄1-3 ]
  }
  return ans;
}

double f(double x){
   double fx;
   fx =x*x-x-6;
   return fx;
 } 