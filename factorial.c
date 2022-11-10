#include<stdio.h>
int main()
{
    printf("Enter a no.");
    int n,p=1;
    scanf("%d",&n);
    if(n!=0){
        for(int i=n;i>=1;i--){
            p=p*i;
        }
        printf("Factorial= %d",p);
    }
    else{
        printf("1");
    }
}