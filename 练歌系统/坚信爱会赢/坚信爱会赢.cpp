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
        usleep(150000);
    }
}

int main()
{
    system("pause");
    for(int i = 3;i >= 1;i--){
        cout << i << endl;
        sleep(1);
    }
    KBC("为了你 我拼了命 \n哪怕面对枪林弹雨 \n隔着生死的一道门 \n我保证不离不弃 \n最难舍 是这份情 \n在你面前我要淡定\n撑起多少个黑夜\n绝不让生命叫停 \n我们坚信有爱就会赢\n你有多痛我就多痛心\n有难一起扛 共分担才更坚强\n风雨中凝聚民族的力量\n我们坚信有爱就会赢\n无法拥抱却离你最近\n真情守望 长江黄河水流长 \n我们凝聚起中华民族的力量 \n最难舍 是这份情\n在你面前我要淡定\n撑起多少个黑夜 \n绝不让生命叫停\n我们坚信有爱就会赢\n你有多痛我就多痛心\n有难一起扛 共分担才更坚强  \n风雨中凝聚民族的力量\n我们坚信有爱就会赢\n无法拥抱却离你最近\n真情守望 长江黄河水流长 \n我们凝聚起中华民族的力量\n我们坚信有爱就会赢 \n你有多痛我就多痛心\n有难一起扛 共分担才更坚强\n风雨中凝聚民族的力量\n我们坚信有爱就会赢\n无法拥抱却离你最近\n真情守望 长江黄河水流长\n我们凝聚起中华民族的力量\n我们凝聚起中华民族的力量 \n我们凝聚起中华民族的力量 \n        ————《坚信爱会赢》");
    system("pause");
    return 0;
}




