#include<stdio.h>
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%11==0){
        
        printf("DIVISIBLE BY 5 AND 11");
    }
    else{
        printf("NOT DIVISIBLE BY 5 AND 11");
    }
}
