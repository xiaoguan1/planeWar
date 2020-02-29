#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = 0);
    ~MainScene();

    //初始化
    void initScene();

    //启动游戏
    void playGame();

    //更新所有游戏中元素的坐标
    void updatePosition();

    //绘制屏幕中  函数名称不可改
    void paintEvent(QPaintEvent *event);

    //地图对象
    Map m_map;

    //定时器
    QTimer m_Timer;

    //飞机对象
    HeroPlane m_hero;

    //重新鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

    //测试子弹 子弹对象
    Bullet temp_Bullet;

    //敌机出场
    void enemyToScene();

    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔记录
    int m_recorder;

    //碰撞检测函数
    void collisionDetection();

    //爆炸数组
    Bomb m_bombs[BOMB_NUM];
};

#endif // MAINSCENE_H
