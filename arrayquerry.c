#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arrayQuerry(int [][]sparse,int []arr,int n,int o){
    
   
 
    int i=0;
    for(i=0;i<n;i++){
        sparse[i][0]=i;
    }
   
    int j=1;
    while ((pow(2,j))<=n){
        i = 0;
        while((i + (pow(2,j)) - 1) < n) {
            if(arr[sparse[i][j-1]]<arr[sparse[i+pow(2,j-1)][j-1]]){
                sparse[i][j] =sparse[i][j-1];
        }
            else{
                sparse[i][j]=sparse[i+pow(2,j-1)][j-1];
            }
            i+=1;
        }
        j+=1;
    }
    
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int querryi(int []arr,int [][]sparse,int low,int high){
    int l=high-low+1;
    int k=log10(l)/log10(2);
    return min(arr[sparse[low][k]],arr[sparse[low+l-pow(2,k)][k]]);
}

int main()
{
int n,k,querry,i,low,high;
printf("jjjj");
scanf("%d",&n);
scanf("%d",&querry);
int arr[n];
for (i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
int o=log10(n)/log10(2);
o=o+1;
int sparse[n][o];
arrayQuerry(&sparse,arr, n,o);


for(i=0;i<querry;i++){
    scanf("%d",&low);
    scanf("%d",&high);
    int ans=querryi(arr,sparse,low,high);
    print("%d",ans);
}
}