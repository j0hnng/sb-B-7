#ifndef FUNCTION2_H_INCLUDED
#define FUNCTION2_H_INCLUDED

int dasao(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    fd[i][j].dasaopai=0;
    printf("\n正在曬爆新床單...\n");
    printf("處理顧客的蛋和鑰匙...\n");
    printf("跟風塵僕僕的旅人打招呼...\n");
    printf("打掃完畢!\n\n");
}

int zaofan(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    fd[i][j].zaocan=0;
    printf("\n準備昆蟲牛油餅...\n");
    printf("兩片免費的旺旺仙貝...\n");
    printf("正在丟掉烤焦的土司...\n");
    printf("早餐送達!\n\n");
}

int touqie(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    k=rand()%100;
    printf("\n正在翻牛仔褲口袋...\n");
    printf("臺燈掉到地上導致驚嚇...\n");
    printf("進入毛手毛脚狀態...\n");
    printf("發現厠所用過的衛生紙...");
    printf("獲得%dG金錢!\n\n",k);
}


#endif // FUNCTION2_H_INCLUDED
