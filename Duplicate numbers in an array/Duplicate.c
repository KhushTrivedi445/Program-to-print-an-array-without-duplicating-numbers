#include<stdio.h>

int main () {
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int a[n],c;
    printf("Enter the array that you want to sort :");
    for(int i=0;i<n;i++){
        scanf("%d",& a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]){
                
                c=a[i];
                a[i]=a[j];
                a[j]=c;
                                
            }
            
        }
    }
     
     printf("The sorted array before duplicating is  :");
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
             
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
        a[x++]=a[i];
    }     
          
    }
      n=x;
    printf("\nThe duplicate array is :");
    for(int i=0;i<n;i++){
         printf("\n%d",a[i]);
    }

return 0;
}