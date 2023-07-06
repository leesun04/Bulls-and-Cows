#include<stdio.h>
#include<windows.h>
#define LIMIT 10 // 최대 도전 횟수
#pragma warning(disable: 4996)
void how_game();//게임 설명서
void rock_paper();//가위바위보

int main(void)
{
    how_game();
    rock_paper();
    int i, j; // i는  타자 공배열 숫자, j는 투수의 공배열 숫자
    int winner_ball[3];//타자 
    int lose_ball[3];//투수
    int str, bal;//스트라이크,볼 개수
    int count; // 도전 횟수 세기
    printf("(가위바위보 승자= 타자, 패자= 투수)\n");
    printf("타자는 1부터 9까지 3개의 숫자를 입력하세요\n");

    while (1)
    {


        for (i = 0; i < 3; i++)
        {
            printf("%d번째 숫자: ", i + 1);
            scanf("%d", &winner_ball[i]);
        }

        if ((winner_ball[0] == winner_ball[1]) || (winner_ball[1] == winner_ball[2]) || (winner_ball[0] == winner_ball[2]))
        {
            printf("=====중복되면 안됩니다=====\n");
            continue;
        }
        else if (winner_ball[0] < 0 || winner_ball[0]>9 || winner_ball[1] < 1 || winner_ball[1]>9 || winner_ball[2] < 1 || winner_ball[2]>9)
        {
            printf("=====일의 자리수만 가능합니다=====\n");
            continue;
        }
        {
            break;
        }
    }
    printf("입력받은 숫자는 %d , %d , %d 입니다", winner_ball[0], winner_ball[1], winner_ball[2]);
    Sleep(1000);
    system("cls");
    printf("========게임시작=============\n");
    for (count = str = bal = 0; count < LIMIT && str < 3; count++)
    {
        str = 0;
        bal = 0;
        while (1)
        {
            printf("%d번째 시도\n투수는 3개의 숫자를 예측하여 입력해주십시오\n", count + 1);
            for (j = 0; j < 3; j++)
            {
                printf("%d번째 숫자: ", j + 1);
                scanf("%d", &lose_ball[j]);
            }

            if ((lose_ball[0] == lose_ball[1]) || (lose_ball[1] == lose_ball[2]) || (lose_ball[0] == lose_ball[2]))
            {
                printf("=====중복되면 안됩니다=====\n");
                continue;
            }
            else if (lose_ball[0] < 0 || lose_ball[0]>9 || lose_ball[1] < 1 || lose_ball[1]>9 || lose_ball[2] < 1 || lose_ball[2]>9)
            {
                printf("=====일의 자리수만 가능합니다=====\n");
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
        printf("* %d스트라이크,  %d볼 *\n", str, bal);
        printf("==============================\n");
    }
    Sleep(1000);
    system("cls");
    printf("========게임종료===========\n");
    if (str == 3)
    {
        printf("결과: 3스트라이크 아웃!!\n투수가 이겼습니다!!\n");
        printf("(정답: %d, %d, %d)\n", winner_ball[0], winner_ball[1], winner_ball[2]);
        printf("도전횟수:%d", count);
    }
    else
    {
        printf("결과: 홈런!!\n타자가 이겼습니다!!\n");
        printf("(정답: %d, %d, %d)\n", winner_ball[0], winner_ball[1], winner_ball[2]);
        printf("도전횟수:%d", count);
    }


    return 0;
}

void how_game()
{
    int a;
    int b;
    printf("====================숫자야구게임=====================\n");
    printf("숫자야구 게임의 룰을 모른다면 1, 안다면 아무'숫자'나 눌러주세요\n");
    scanf("%d", &a);
    Sleep(1000);
    system("cls");
    if (a == 1)
    {
        printf("====숫자야구 설명서====\n");
        printf("처음 가위바위보로 투수와 타자를 정합니다\n");
        printf("맨처음 타자가 3자리 숫자를 입력합니다\n");
        printf("그다음 투수는 타자가 입력한 3자리 숫자를 맞춥니다\n");
        printf("투수에게는 %d번의 기회가 주어집니다\n", LIMIT);
        printf("숫자만 맞추면 볼, 숫자와 숫자의 자리까지 맞추면 스트라이크입니다\n");
        printf("기회안에 투수가 3스트라이크를 맞추면 투수의 승리, 못맞추면 타자의 승리입니다\n");
        printf("룰을 이해했으면 아무 '숫자'나 눌러서 게임을 시작하세요\n");
        scanf("%d", &b);
    }
    else if (a != 1)
    {
        printf("바로 게임이 시작됩니다");
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
        printf("투수와 타자를 가위바위보로 정하겠습니다\n");
        printf("승자=타자   패자=투수\n");
        printf("가위=1, 바위=2, 보=3\n");
        printf("*사용자 1님 1,2,3 중 하나를 입력하세요: ");
        scanf("%d", &user1);
        Sleep(1000);
        system("cls");
        printf("투수와 타자를 가위바위보로 정하겠습니다\n");
        printf("승자=타자   패자=투수\n");
        printf("가위=1, 바위=2, 보=3\n");
        printf("*사용자 2님 1,2,3 중 하나를 입력하세요: ");
        scanf("%d", &user2);
        Sleep(1000);
        system("cls");

        if (((user1 == 1) && (user2 == 2)) || ((user1 == 2) && (user2 == 3)) || ((user1 == 3) && (user2 == 1)))
        {
            printf("사용자 2님이 이겼습니다\n");
            break;
        }
        else if (((user1 == 1) && (user2 == 3)) || ((user1 == 2) && (user2 == 1)) || ((user1 == 3) && (user2 == 2)))
        {
            printf("사용자 1님이 이겼습니다\n");
            break;
        }
        else if (user1 == user2)
        {
            printf("비겼습니다. 다시 해주세요.\n");
            continue;
        }
        else
        {
            printf("=======1,2,3만 입력하십시오=======\n");
            continue;
        }
    }
}