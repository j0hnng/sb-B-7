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
        printf("\n%d̖��δ��ס����\n\n",xin);
    }
    else
    {
        printf("\n%d̖������ס\n",xin);
        printf("��%dλ����\n",fd[i][j].renshu);
        if(fd[i][j].dasaopai==0)
        {
            printf("�˷��g����������\n");
        }
        else
        {
            printf("�˷��g��Ҫ���\n");
        }
        if(fd[i][j].zaocan==0)
        {
            printf("�˷��gδӆُ���\n");
        }
        else
        {
            printf("�˷��g��ӆُ���\n");
        }
        if(fd[i][j].gukewaichu==0)
        {
            printf("�˷��g�δ���\n\n");
        }
        else
        {
            printf("�˷��g������\n\n");
        }
    }
}

int ruzhu(int xin,fandian fd[5][10])
{
    int i,j,k;
    char m;
    i=xin/100-1;
    j=xin%100-1;
    printf("\nՈݔ����ס�˔�: ");
    while(scanf("%d",&k))
    {
        if(k>4)
        {
            printf("\n��һ���g������ס4������!\n");
            printf("\nՈݔ����ס�˔�: ");
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
    printf("\n�Ƿ���Ҫ���(Y/N): ");
    scanf("%s",&m);
    if(m=='Y')
    {
        fd[i][j].zaocan=1;
    }
    else
    {
        fd[i][j].zaocan=0;
    }
    printf("\n���ں�Ǭ����Ĵ���...\n");
    printf("���ڿ��Ǭ...\n");
    printf("�oͽ�Bȫ�µ��RͰ...\n");
    printf("�����̺�ϲ�֪����ë�...\n");
    printf("��ס�ɹ�!\n\n");
}


#endif // FUNCTION1_H_INCLUDED
