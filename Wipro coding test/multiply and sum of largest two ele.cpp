//exsecution time 
#include<stdio.h>
int main(){
    int n,a[100],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;	
			}
		}
	}
	printf("%d\n%d",a[n]+a[n-1],a[n]*a[n-1]);
}

