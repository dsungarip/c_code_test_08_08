
//���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, 
//solution�� �ϼ��ϼ���.���� ��� s�� "a234"�̸� False�� �����ϰ� 
//"1234"��� True�� �����ϸ� �˴ϴ�.
//
//���� ����
//s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.
//s�� ���� ���ĺ� ��ҹ��� �Ǵ� 0���� 9���� ���ڷ� �̷���� �ֽ��ϴ�.

#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    int strl = strlen(s);

    if (strl == 4 || strl == 6)
    {
        for (int i = 0; i < strl; i++)
        {
            if (s[i] < '0' || s[i]>'9')
            {
                answer = false;
                break;
            }
        }
    }
    else
        answer = false;
    return answer;
}

int main()
{
    char s[4] = { "a234" };
    printf("%s\n", solution(s) ? "true" : "false");
	return 0;
}