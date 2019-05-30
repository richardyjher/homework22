#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//時薪
    unsigned int  work_hours;//工作時數
    unsigned int  pay;//薪水

};
int salc(struct Sertivor *);  //計算薪資 
void show(struct Sertivor *); //列出結果 
int main(void){

    int number;//有n筆資料
    int i;

    struct Sertivor sertivor[4]; //結構陣列 

    printf("共幾位工讀生:");
    scanf("%d", &number);

    for(i=0;i<number;++i){
        printf("這是第%d筆資料\n\n", i+1);
        printf("工讀生id:");
        scanf("%s", sertivor[i].id);
        printf("工讀生姓名:");
        scanf("%s", sertivor[i].name);
        printf("工讀生薪資: ");
        scanf("%d", &sertivor[i].wage);
        printf("工讀生工作時數:");
        scanf("%d", &sertivor[i].work_hours);

        salc(&sertivor[i]);
    }//end loop
    for(i=0;i<number;++i){
    	show(&sertivor[i]);
	}//end loop 
	
	return 0;

}
int salc(struct Sertivor *ser){ //計算薪資 

    (ser->pay)=(ser->wage)*(ser->work_hours);

    return ser->pay;
}
void show(struct Sertivor *show){ //列出結果 

    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("姓名:%s\n",show->name);
    printf("薪資:%d\n",show->wage);
    printf("工作時數:%d\n",show->work_hours);
    printf("薪水:%d\n",show->pay);
    printf("-------------\n");
}

