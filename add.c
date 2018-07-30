#include<stdio.h>
int main()
{
	const int number=101;
	int count[number];
	int i,zero=0,x=0,num=0;
	for (i=0;i<number;i++){
		count[i]=0;
	}
	while(zero<2){
		scanf("%d",&x);
		if(x>=0&&x<number){
			scanf("%d",&num);
			count[x]+=num; 
		}
		if(x==0){
			 	zero+=1;
			 }
	}
	int q,ret=1;
	int addFlag=0;
	for(q=number-1;q>=0;q--){
	if(count[q]!=0){
		if(!addFlag){
			addFlag=1;
		}else if(count[q]>0&&addFlag){
			printf("+");
		}
		if(count[q]==-1){
			printf("-");
		}else if(count[q]!=1||i==0){
			printf("%d",count[q]);
		}
		if(q!=0){
			printf("x");
		}
		if(q>1){
			printf("%d",q);
			}
		ret = 0;
		}
	}
	if(ret){
		printf("0");
	}

    return 0;
}
