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
    printf("�gӭʹ�ÿ�������app\n");
    printf("Ո�x����Ҫʹ�õĹ���:\n");
    printf("0.�µ�һ�죬�ͷ���ס�¿���\n");
    printf("1.�@ʾ귿�g��Ϣ\n");
    printf("2.��ס\n");
    printf("3.�ͷ����\n");
    printf("4.�����\n");
    printf("5.͵͵İ�\n");
    printf("6.�x�_\n");
    printf("Ո�x����:");
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
            printf("\n���ڽӴ����...\n");
            printf("���ڿ��ճ�...\n");
            printf("�����ӛ���X�ķ���...\n");
            printf("�����c�W�Ͳ��Y...\n");
            printf("���ڜʂ�ȫ�µ��ޱ�...\n");
            printf("��ُȫ�µ����...\n");
            printf("��ס���!\n\n");
        }
        else if(shuru==1)
        {
            if(newren==0)
            {
                printf("\n��߀δ׌�����ס\n\n");
            }
            else
            {
                printf("\nՈݔ�뷿̖(��:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n�]�д˷��g\n\n");
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
                printf("\n��߀δ׌�����ס\n\n");
            }
            else
            {
                l=0;
                printf("\n��ǰ�e�ÿͷ�: \n");
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
                printf("Ոݔ��Ҫ��ס�ķ�̖(��:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n�]��%d�˷��g\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].renshu>0)
                {
                    printf("\n�˷��g����ס�\n\n");
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
                printf("\n��߀δ׌�����ס\n\n");
            }
            else
            {
                l=0;
                printf("\n��ǰ��Ҫ��ߵĿͷ�: \n");
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
                printf("Ոݔ��Ҫ��ߵķ�̖(��:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n�]��%d�˷��g\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].dasaopai==0)
                {
                    printf("\n�˷��g����Ҫ���\n\n");
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
                printf("\n��߀δ׌�����ס\n\n");
            }
            else
            {
                l=0;
                printf("\n��ǰ��Ҫ����͵Ŀͷ�: \n");
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
                printf("Ոݔ����Ҫ����͵ķ�̖(��:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n�]��%d�˷��g\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].zaocan==0)
                {
                    printf("\n�˷��g����Ҫ�����\n\n");
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
                printf("\n��߀δ׌�����ס\n\n");
            }
            else
            {
                l=0;
                printf("\n��ǰ���˲��ڵĿͷ�: \n");
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
                printf("Ոݔ����Ҫ͵�`�ķ�̖(��:101-510): ");
                scanf("%d",&p);
                if(p%100>10 || p/100>5)
                {
                    printf("\n�]��%d�˷��g\n\n",p);
                }
                else if(fandian[p/100-1][p%100-1].gukewaichu==0)
                {
                    printf("\n�˷��g��ڷ��g�Y,�e����а���!\n\n");
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
        printf("�gӭʹ�ÿ�������app\n");
        printf("Ո�x����Ҫʹ�õĹ���:\n");
        printf("0.�µ�һ�죬�ͷ���ס�¿���\n");
        printf("1.�@ʾ귿�g��Ϣ\n");
        printf("2.��ס\n");
        printf("3.�ͷ����\n");
        printf("4.�����\n");
        printf("5.͵͵İ�\n");
        printf("6.�x�_\n");
        printf("Ո�x����:");
    }
}
