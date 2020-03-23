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
    KBC("街道口的风  撩醒了夏虫  \n竹床上的小孩做着梦 \n\n热干面糊汤  一样的吃相 \n海角天涯  流淌唇齿香   \n\n这是我的家  在这里长大 \n轧过大桥说过心里话 \n\n深夜的司机  绕几圈繁华 \n不宵夜  不作罢\n\n黄鹤楼的诗  烂熟在嘴巴  \n多少次我低头默念啊 \n\n只准自己骂  只许别人夸我爱的  武汉啊\n\n江汉路的雨  淋过你几回\n二厂汽水换成了酒杯\n牛皮谁在吹  面子给不给\n仆仆千里  有母劝儿归\n这是我的家  在这里长大 \n一把蒲扇  挺得过炎夏 \n冬天雪花花  日子火辣辣 \n可爱的  武汉伢\n这是我的家  我们守护她\n故乡的土  亲吻过脚丫 \n如果有一天  她也需要我\n搭把手  就过了\n搭把手  就过了\n            ———《武汉伢》\n武汉加油!");
    system("pause");
    return 0;
}



