#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

void KBC(const string kbc)
{
    size_t len = kbc.size();
    for(int i1 = 0; i1 < kbc.size(); i1++)
    {
        cout << kbc[i1];
        usleep(150000);//40000
    }
}

int main()
{
    system("pause");
    for(int i = 3;i >= 1;i--){
        cout << i << endl;
        sleep(1);
    }
    KBC("�ֵ��ڵķ�  �������ĳ�  \n���ϵ�С�������� \n\n�ȸ������  һ���ĳ��� \n��������  ���ʴ�����   \n\n�����ҵļ�  �����ﳤ�� \n��������˵�����ﻰ \n\n��ҹ��˾��  �Ƽ�Ȧ���� \n����ҹ  ������\n\n�ƺ�¥��ʫ  ���������  \n���ٴ��ҵ�ͷĬ� \n\nֻ׼�Լ���  ֻ����˿��Ұ���  �人��\n\n����·����  �ܹ��㼸��\n������ˮ�����˾Ʊ�\nţƤ˭�ڴ�  ���Ӹ�����\n����ǧ��  ��ĸȰ����\n�����ҵļ�  �����ﳤ�� \nһ������  ͦ�ù����� \n����ѩ����  ���ӻ����� \n�ɰ���  �人��\n�����ҵļ�  �����ػ���\n�������  ���ǹ���Ѿ \n�����һ��  ��Ҳ��Ҫ��\n�����  �͹���\n�����  �͹���\n            ���������人��\n�人����!");
    system("pause");
    return 0;
}



