#include <stdio.h>

int largest(long long int  a[],long long int n){
    long long int i;
    long long int max=a[1];
    for (i = 2; i <= n; i++) {
        if (a[i] > max) 
            {
                max = a[i];
            }
             
    }
    return max;
}

int main()
{
long long int n,q,x,b,k;
long long int a[4000009];
scanf("%lld %lld",&n,&q);

for(long long int i=1;i<=n;i++){
        a[i]=0;
    }
   /* for (int c=1;c<=n;c++){
        printf("%d ",a[c]);
    } */
    for(long long int i=0;i<q;i++){
        scanf("%lld %lld %lld",&x,&b,&k);
        for(long j=x;j<=b;j++){
            a[j]+=k;
        }
    }

   /* for (int c=1;c<=n;c++){
        printf("%d ",a[c]);
    } */
    long long int y=largest(a,n);
    printf("%lld",y);
    
    
    
    
    return 0;
}
