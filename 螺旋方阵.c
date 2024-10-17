#include<stdio.h>

int main(){
	int i,j;
	i=0;j=0;
	int m,n;
	int f=0;
//	int cnt=1;
	int a[m][n];
	
//	while(1){
		scanf("%d %d",&m,&n);
		printf("1\n");
//		if(a[i][j]>n*m)
//		break;
		printf("2\n");
	    a[0][0]=1;
		if(f==0){
			for(i,j;j<n;j++){
				a[i][j]=a[i][j-1];
				printf("%d ",a[i][j]);	
			}
			printf("\n");
			if((i==0&&j==n-1)||(i==1&&j==n-2)){
				f=1;
			}
		}
		if(f==1){
			for(i,j=n-1;i<m;i++){
				a[i][j]=a[i-1][j]+1;
					printf("%d ",a[i][j]);
			}
			printf("\n");
			if((j==n-1&&i==m-1)||(i==m-2&&j==n-2)){
				f=2;
			}
		}
		if(f==2){
			for(j,i=m-1;i<n;j++){
				a[i][j]=a[i][j+1]+1;
			    printf("%d ",a[i][j]);
			}
			printf("\n");
			if((j==0&&i==m-1)||(i==m-2&&j==1)){
				f=3;
			}
		}
			if(f==3){
			for(i,j=0;i>0;i++){
				a[i][j]=a[i+1][j]+1;
		    	printf("%d ",a[i][j]);
			}
			printf("\n");
			if(i==1&&j==0){
				f=0;
			}
		}
		printf("%d ",a[i][j]);
//	}
	return 0;
}