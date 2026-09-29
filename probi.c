#include<stdio.h>
int main(){
    int n,sum;
    while(scanf("%d %d",&n,&sum)==2 && !(n==0 && sum==0)){
        int count=0;
        for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if((i+j+k)==sum){
                    if(i!=j && j!=k && i!=k){
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    }
    return 0;
}