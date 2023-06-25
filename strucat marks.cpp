#include<stdio.h>

struct student{
	int total;
	int agg;
	int marks[5];
};
int main(){
	struct student m;
    int m1,m2,m3,m4,m5;
    printf("enter the marks:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    m.marks[0]=m1;
    m.marks[1]=m2;
    m.marks[2]=m3;
    m.marks[3]=m4;
    m.marks[4]=m5;
    m.total=m1+m2+m3+m4+m5;
    m.agg=m.total/5;
    printf("student details:\n");
    printf("%d\n",m.marks[0]);
    printf("%d\n",m.marks[1]);
    printf("%d\n",m.marks[2]);
    printf("%d\n",m.marks[3]);
    printf("%d\n",m.marks[4]);
    printf("total:%d\n",m.total);
    printf("aggregate:%d",m.agg);
    if(m.agg>=75){
    	printf("distinction");
	}else if(m.agg<75 && m.agg>60){
		printf("A grade");
	}else if(m.agg<60 && m.agg>50){
		printf("B grade");
	}else if(m.agg<50 && m.agg>45){
		printf("C grade");
	}else{
		printf("failed");
	}
	return 0;
}


