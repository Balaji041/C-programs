#include<stdio.h>
int main() {
int n,res;
printf("enter a number: ");
scanf("%d",&n);
res=fact(n);
printf("%d", res);
}
int fact(int b)
{
 int res;
if(b==0){
    res=1;
}
else{
    res=b*fact(b-1);
}
  return res;
}
