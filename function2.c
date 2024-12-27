#include<stdio.h>
int main(){
    int sum(int a, int b);
    void printstar(int n){
        for(int i=0;i<n;i++)
        {
            printf("%c", '*');
        }
    }
int a,b,c;
a=9;
b=30;
c= sum (a, b);
printstar(20);
// printf("The sum will be %d\n",c);
return 0;
}
int sum (int a, int b)
{
    return a+ b;
}