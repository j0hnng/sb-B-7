#ifndef FUNCTION2_H_INCLUDED
#define FUNCTION2_H_INCLUDED

int dasao(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    fd[i][j].dasaopai=0;
    printf("\n���ڕ��´���...\n");
    printf("̎��͵ĵ���耳�...\n");
    printf("���L�m�W�W�����˴��к�...\n");
    printf("����ꮅ!\n\n");
}

int zaofan(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    fd[i][j].zaocan=0;
    printf("\n�ʂ����xţ���...\n");
    printf("��Ƭ���M��������ؐ...\n");
    printf("���ځG����������˾...\n");
    printf("������_!\n\n");
}

int touqie(int xin,fandian fd[5][10])
{
    int i,j,k;
    i=xin/100-1;
    j=xin%100-1;
    k=rand()%100;
    printf("\n���ڷ�ţ��ѝ�ڴ�...\n");
    printf("�_���������ό����@��...\n");
    printf("�M��ë��ë�Š�B...\n");
    printf("�l�F�������^���l����...");
    printf("�@��%dG���X!\n\n",k);
}


#endif // FUNCTION2_H_INCLUDED
