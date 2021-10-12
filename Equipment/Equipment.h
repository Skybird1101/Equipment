#pragma once

#include <QtWidgets/QMainWindow>
#include <QUdpSocket>
#include "Command.h"
#include "ui_Equipment.h"
#include "frlight.h"
class Equipment : public QMainWindow
{
    Q_OBJECT

public:
    Equipment(QWidget *parent = Q_NULLPTR);
    ~Equipment();

    /*初始化所有的开关*/
    void initSwitch();

	/*初始化开关的闭合动作槽*/
    void initSignalSlot();

    /*计算校验和*/
    unsigned char getChecksum(unsigned char* buf, unsigned size);
	
public slots:

    /*按键信号开关*/
    void anJianXinHaoKaiGuanSlot();

    /*驱动控制开关*/
    void quDongKongZhiKaiGuanSlot();

    /*扣机控制开关*/
    void kouJiKongZhiKaiGuanSlot();

    /*扬弹机控制开关*/
    void yangDanJiKongZhiKaiGuanSlot();

    /*导弹配电开关*/
    void daoDanPeiDianKaiGuan();

    /*左余弹输入开关(b4)*/
    void zuoYuDanShuRuKaiGuanB4Slot();

    /*左余弹输入开关(c15)*/
    void zuoYuDanShuRuKaiGuanC15Slot();

	/*左升起正常开关*/
    void zuoShengQiZhengKaiGuanChangSlot();

	/*左炮选择开关*/
    void zuoPaoXuanZeKaiGuanSlot();

    /*右炮选择开关*/
    void youPaoXuanZeKaiGuanSlot();

	/*射击保险开关*/
    void sheJiBaoXianKaiGuanSlot();

	/*射击按键开关*/
    void sheJiAnJianKaiGuanSlot();

	/*联锁解除开关*/
    void lianSuoJieChuKaiGuanSlot();

	/*火炮模式开关*/
    void huoPaoMoShiKaiGuanSlot();

	/*左开门到位开关*/
    void zuoKaiMenDaoWeiKaiGuanSlot();

    /*右开门到位开关*/
    void youKaiMenDaoWeiKaiGuanSlot();

    /*左主弹箱到位开关*/
    void zuoZhuDanXiangDaoWeiKaiGuanSlot();

    /*右主弹箱到位开关*/
    void youZhuDanXiangDaoWeiKaiGuanSlot();

    /*随动大误差开关*/
    void suiDongDaWuChaKaiGuanSlot();

	/*左压弹器抬起到位开关*/
    void zuoYaDanQiTaiQiDaoWeiKaiGuanSlot();

	/*右压弹器抬起到位开关*/
    void youYaDanQiTaiQiDaoWeiKaiGuanSlot();
private:
    Ui::EquipmentClass ui;

    /*发送给逻辑的命令*/
    CommandPack* command;

    /*UdpSocket*/
    QUdpSocket* udpSocket;
};
