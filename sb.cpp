#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "function1.h"
#include "function2.h"


int main()
{
    int shuru;
    int xin,x,p,l,newren;
    x=0;
    newren=0;
    fandian fandian[5][10];
    printf("歡迎使用扛炮飯店管理app\n");
    printf("請選擇你要使用的功能:\n");
    printf("0.新的一天，客房入住新客人\n");
    printf("1.顯示飯店房間信息\n");
    printf("2.入住\n");
    printf("3.客房打掃\n");
    printf("4.送早餐\n");
    printf("5.偷顧客的包\n");
    printf("6.離開\n");
    printf("請選擇功能:");
    while(scanf("%d",&shuru))
    {
        if(shuru==0)
        {
            newren=1;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<10;j++)
                {
                    fandian[i][j].shiforuzhu=rand()%2;
                    if(fandian[i][j].shiforuzhu==1)
                    {
                        fandian[i][j].renshu=rand()%4+1;
                        fandian[i][j].dasaopai=rand()%2;
                        fandian[i][j].zaocan=rand()%2;
                        fandian[i][j].gukewaichu=rand()%2;
                    }
                    else
                    {
                        fandian[i][j].renshu=0;
                        fandian[i][j].dasaopai=0;
                        fandian[i][j].zaocan=0;
                        fandian[i][j].gukewaichu=0;
                    }
                }
            }
            printf("\n正在接待新顧客...\n");
            printf("正在看日出...\n");
            printf("驅逐忘記帶錢的房客...\n");
            printf("正在與奧客搏鬥...\n");
            printf("正在準備全新的棉被...\n");
            printf("采購全新的早餐...\n");
            printf("入住完成!\n\n");
        }
        else if(shuru==1)
        {
            if(newren==0)
            {
                printf("\n你還未讓新顧客入住\n\n");
            }
            else
            {
                printf("\n請輸入房號(例:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n沒有此房間\n\n");
                }
                else
                {
                    xin=p;
                    fandianxinxi(xin,fandian);
                }
            }

        }
        else if(shuru==2)
        {
            if(newren==0)
            {
                printf("\n你還未讓新顧客入住\n\n");
            }
            else
            {
                l=0;
                printf("\n當前閑置客房: \n");
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        if(fandian[i][j].shiforuzhu==0)
                        {
                            printf("%d ",x=(i+1)*100+j+1);
                            l++;
                            if(l==5)
                            {
                                printf("\n");
                                l=0;
                            }
                        }
                    }
                }
                printf("\n\n");
                printf("請輸入要入住的房號(例:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n沒有%d此房間\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].renshu>0)
                {
                    printf("\n此房間已入住顧客\n\n");
                }
                else
                {
                    xin=p;
                    ruzhu(xin,fandian);
                }
            }
        }
        else if(shuru==3)
        {
            if(newren==0)
            {
                printf("\n你還未讓新顧客入住\n\n");
            }
            else
            {
                l=0;
                printf("\n當前需要打掃的客房: \n");
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        if(fandian[i][j].dasaopai==1)
                        {
                            printf("%d ",x=(i+1)*100+j+1);
                            l++;
                            if(l==5)
                            {
                                printf("\n");
                                l=0;
                            }
                        }
                    }
                }
                printf("\n\n");
                printf("請輸入要打掃的房號(例:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n沒有%d此房間\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].dasaopai==0)
                {
                    printf("\n此房間不需要打掃\n\n");
                }
                else
                {
                    xin=p;
                    dasao(xin,fandian);
                }
            }
        }
        else if(shuru==4)
        {
            if(newren==0)
            {
                printf("\n你還未讓新顧客入住\n\n");
            }
            else
            {
                l=0;
                printf("\n當前需要送早餐的客房: \n");
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        if(fandian[i][j].zaocan==1)
                        {
                            printf("%d ",x=(i+1)*100+j+1);
                            l++;
                            if(l==5)
                            {
                                printf("\n");
                                l=0;
                            }
                        }
                    }
                }
                printf("\n\n");
                printf("請輸入需要送早餐的房號(例:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n沒有%d此房間\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].zaocan==0)
                {
                    printf("\n此房間不需要送早餐\n\n");
                }
                else
                {
                    xin=p;
                    zaofan(xin,fandian);
                }
            }
        }
        else if(shuru==5)
        {
            if(newren==0)
            {
                printf("\n你還未讓新顧客入住\n\n");
            }
            else
            {
                l=0;
                printf("\n當前客人不在的客房: \n");
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        if(fandian[i][j].gukewaichu==1)
                        {
                            printf("%d ",x=(i+1)*100+j+1);
                            l++;
                            if(l==5)
                            {
                                printf("\n");
                                l=0;
                            }
                        }
                    }
                }
                printf("\n\n");
                printf("請輸入你要偷竊的房號(例:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n沒有%d此房間\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].gukewaichu==0)
                {
                    printf("\n此房間顧客在房間裏,別心生邪念吧!\n\n");
                }
                else
                {
                    xin=p;
                    touqie(xin,fandian);
                }
            }
        }
        else if(shuru==6)
        {
            return 0;
        }
        printf("歡迎使用扛炮飯店管理app\n");
        printf("請選擇你要使用的功能:\n");
        printf("0.新的一天，客房入住新客人\n");
        printf("1.顯示飯店房間信息\n");
        printf("2.入住\n");
        printf("3.客房打掃\n");
        printf("4.送早餐\n");
        printf("5.偷顧客的包\n");
        printf("6.離開\n");
        printf("請選擇功能:");
    }
}
