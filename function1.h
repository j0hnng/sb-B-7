#ifndef FUNCTION1_H_INCLUDED
#define FUNCTION1_H_INCLUDED

struct fandian
{
    int shiforuzhu;
    int renshu;
    int dasaopai;
    int zaocan;
    int gukewaichu;
};

int fandianxinxi(int xin,fandian fd[5][10])
{
    int i,j;
    i=xin/100-1;
    j=xin%100-1;
    if(fd[i][j].shiforuzhu==0)
    {
        printf("\n%d號房未入住客人\n\n",xin);
    }
    else
    {
        printf("\n%d號房已入住\n",xin);
        printf("共%d位客人\n",fd[i][j].renshu);
        if(fd[i][j].dasaopai==0)
        {
            printf("此房間整潔度良好\n");
        }
        else
        {
            printf("此房間需要清掃\n");
        }
        if(fd[i][j].zaocan==0)
        {
            printf("此房間未訂購早餐\n");
        }
        else
        {
            printf("此房間已訂購早餐\n");
        }
        if(fd[i][j].gukewaichu==0)
        {
            printf("此房間顧客未外出\n\n");
        }
        else
        {
            printf("此房間顧客已外出\n\n");
        }
    }
}

int ruzhu(int xin,fandian fd[5][10])
{
    int i,j,k;
    char m;
    i=xin/100-1;
    j=xin%100-1;
    printf("\n請輸入入住人數: ");
    while(scanf("%d",&k))
    {
        if(k>4)
        {
            printf("\n單一房間不能入住4人以上!\n");
            printf("\n請輸入入住人數: ");
        }
        else
        {
            fd[i][j].renshu=k;
            break;
        }
    }
    fd[i][j].shiforuzhu=1;
    fd[i][j].gukewaichu=0;
    fd[i][j].dasaopai=0;
    printf("\n是否需要早餐(Y/N): ");
    scanf("%s",&m);
    if(m=='Y')
    {
        fd[i][j].zaocan=1;
    }
    else
    {
        fd[i][j].zaocan=0;
    }
    printf("\n正在烘乾舒服的床單...\n");
    printf("正在烤餅乾...\n");
    printf("給顧客介紹全新的馬桶...\n");
    printf("清理地毯上不知名的毛髮...\n");
    printf("入住成功!\n\n");
}


#endif // FUNCTION1_H_INCLUDED
