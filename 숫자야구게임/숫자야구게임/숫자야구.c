#include<stdio.h>
#include<windows.h>
#define LIMIT 10 // �ִ� ���� Ƚ��
#pragma warning(disable: 4996)
void how_game();//���� ����
void rock_paper();//����������

int main(void)
{
    how_game();
    rock_paper();
    int i, j; // i��  Ÿ�� ���迭 ����, j�� ������ ���迭 ����
    int winner_ball[3];//Ÿ�� 
    int lose_ball[3];//����
    int str, bal;//��Ʈ����ũ,�� ����
    int count; // ���� Ƚ�� ����
    printf("(���������� ����= Ÿ��, ����= ����)\n");
    printf("Ÿ�ڴ� 1���� 9���� 3���� ���ڸ� �Է��ϼ���\n");

    while (1)
    {


        for (i = 0; i < 3; i++)
        {
            printf("%d��° ����: ", i + 1);
            scanf("%d", &winner_ball[i]);
        }

        if ((winner_ball[0] == winner_ball[1]) || (winner_ball[1] == winner_ball[2]) || (winner_ball[0] == winner_ball[2]))
        {
            printf("=====�ߺ��Ǹ� �ȵ˴ϴ�=====\n");
            continue;
        }
        else if (winner_ball[0] < 0 || winner_ball[0]>9 || winner_ball[1] < 1 || winner_ball[1]>9 || winner_ball[2] < 1 || winner_ball[2]>9)
        {
            printf("=====���� �ڸ����� �����մϴ�=====\n");
            continue;
        }
        {
            break;
        }
    }
    printf("�Է¹��� ���ڴ� %d , %d , %d �Դϴ�", winner_ball[0], winner_ball[1], winner_ball[2]);
    Sleep(1000);
    system("cls");
    printf("========���ӽ���=============\n");
    for (count = str = bal = 0; count < LIMIT && str < 3; count++)
    {
        str = 0;
        bal = 0;
        while (1)
        {
            printf("%d��° �õ�\n������ 3���� ���ڸ� �����Ͽ� �Է����ֽʽÿ�\n", count + 1);
            for (j = 0; j < 3; j++)
            {
                printf("%d��° ����: ", j + 1);
                scanf("%d", &lose_ball[j]);
            }

            if ((lose_ball[0] == lose_ball[1]) || (lose_ball[1] == lose_ball[2]) || (lose_ball[0] == lose_ball[2]))
            {
                printf("=====�ߺ��Ǹ� �ȵ˴ϴ�=====\n");
                continue;
            }
            else if (lose_ball[0] < 0 || lose_ball[0]>9 || lose_ball[1] < 1 || lose_ball[1]>9 || lose_ball[2] < 1 || lose_ball[2]>9)
            {
                printf("=====���� �ڸ����� �����մϴ�=====\n");
                continue;
            }
            {
                break;
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (winner_ball[i] == lose_ball[j])
                {
                    if (i == j)
                        str++;
                    else
                        bal++;
                }
            }
        }
        printf("* %d��Ʈ����ũ,  %d�� *\n", str, bal);
        printf("==============================\n");
    }
    Sleep(1000);
    system("cls");
    printf("========��������===========\n");
    if (str == 3)
    {
        printf("���: 3��Ʈ����ũ �ƿ�!!\n������ �̰���ϴ�!!\n");
        printf("(����: %d, %d, %d)\n", winner_ball[0], winner_ball[1], winner_ball[2]);
        printf("����Ƚ��:%d", count);
    }
    else
    {
        printf("���: Ȩ��!!\nŸ�ڰ� �̰���ϴ�!!\n");
        printf("(����: %d, %d, %d)\n", winner_ball[0], winner_ball[1], winner_ball[2]);
        printf("����Ƚ��:%d", count);
    }


    return 0;
}

void how_game()
{
    int a;
    int b;
    printf("====================���ھ߱�����=====================\n");
    printf("���ھ߱� ������ ���� �𸥴ٸ� 1, �ȴٸ� �ƹ�'����'�� �����ּ���\n");
    scanf("%d", &a);
    Sleep(1000);
    system("cls");
    if (a == 1)
    {
        printf("====���ھ߱� ����====\n");
        printf("ó�� ������������ ������ Ÿ�ڸ� ���մϴ�\n");
        printf("��ó�� Ÿ�ڰ� 3�ڸ� ���ڸ� �Է��մϴ�\n");
        printf("�״��� ������ Ÿ�ڰ� �Է��� 3�ڸ� ���ڸ� ����ϴ�\n");
        printf("�������Դ� %d���� ��ȸ�� �־����ϴ�\n", LIMIT);
        printf("���ڸ� ���߸� ��, ���ڿ� ������ �ڸ����� ���߸� ��Ʈ����ũ�Դϴ�\n");
        printf("��ȸ�ȿ� ������ 3��Ʈ����ũ�� ���߸� ������ �¸�, �����߸� Ÿ���� �¸��Դϴ�\n");
        printf("���� ���������� �ƹ� '����'�� ������ ������ �����ϼ���\n");
        scanf("%d", &b);
    }
    else if (a != 1)
    {
        printf("�ٷ� ������ ���۵˴ϴ�");
    }
    Sleep(1000);
    system("cls");
}


void rock_paper()
{

    int user1;
    int user2;


    while (1)
    {
        printf("������ Ÿ�ڸ� ������������ ���ϰڽ��ϴ�\n");
        printf("����=Ÿ��   ����=����\n");
        printf("����=1, ����=2, ��=3\n");
        printf("*����� 1�� 1,2,3 �� �ϳ��� �Է��ϼ���: ");
        scanf("%d", &user1);
        Sleep(1000);
        system("cls");
        printf("������ Ÿ�ڸ� ������������ ���ϰڽ��ϴ�\n");
        printf("����=Ÿ��   ����=����\n");
        printf("����=1, ����=2, ��=3\n");
        printf("*����� 2�� 1,2,3 �� �ϳ��� �Է��ϼ���: ");
        scanf("%d", &user2);
        Sleep(1000);
        system("cls");

        if (((user1 == 1) && (user2 == 2)) || ((user1 == 2) && (user2 == 3)) || ((user1 == 3) && (user2 == 1)))
        {
            printf("����� 2���� �̰���ϴ�\n");
            break;
        }
        else if (((user1 == 1) && (user2 == 3)) || ((user1 == 2) && (user2 == 1)) || ((user1 == 3) && (user2 == 2)))
        {
            printf("����� 1���� �̰���ϴ�\n");
            break;
        }
        else if (user1 == user2)
        {
            printf("�����ϴ�. �ٽ� ���ּ���.\n");
            continue;
        }
        else
        {
            printf("=======1,2,3�� �Է��Ͻʽÿ�=======\n");
            continue;
        }
    }
}