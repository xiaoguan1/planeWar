#include "mainscene.h"
#include <QApplication>
#include<QResource>
#include<iostream>
#include "config.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //注册二进制文件
    QResource::registerResource(GAME_RES_PATH);
    MainScene w;
    w.show();
    cout<<"hello world"<<endl;
    return a.exec();
}
