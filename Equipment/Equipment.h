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

    /*��ʼ�����еĿ���*/
    void initSwitch();

	/*��ʼ�����صıպ϶�����*/
    void initSignalSlot();

    /*����У���*/
    unsigned char getChecksum(unsigned char* buf, unsigned size);
	
public slots:

    /*�����źſ���*/
    void anJianXinHaoKaiGuanSlot();

    /*�������ƿ���*/
    void quDongKongZhiKaiGuanSlot();

    /*�ۻ����ƿ���*/
    void kouJiKongZhiKaiGuanSlot();

    /*�ﵯ�����ƿ���*/
    void yangDanJiKongZhiKaiGuanSlot();

    /*������翪��*/
    void daoDanPeiDianKaiGuan();

    /*���൯���뿪��(b4)*/
    void zuoYuDanShuRuKaiGuanB4Slot();

    /*���൯���뿪��(c15)*/
    void zuoYuDanShuRuKaiGuanC15Slot();

	/*��������������*/
    void zuoShengQiZhengKaiGuanChangSlot();

	/*����ѡ�񿪹�*/
    void zuoPaoXuanZeKaiGuanSlot();

    /*����ѡ�񿪹�*/
    void youPaoXuanZeKaiGuanSlot();

	/*������տ���*/
    void sheJiBaoXianKaiGuanSlot();

	/*�����������*/
    void sheJiAnJianKaiGuanSlot();

	/*�����������*/
    void lianSuoJieChuKaiGuanSlot();

	/*����ģʽ����*/
    void huoPaoMoShiKaiGuanSlot();

	/*���ŵ�λ����*/
    void zuoKaiMenDaoWeiKaiGuanSlot();

    /*�ҿ��ŵ�λ����*/
    void youKaiMenDaoWeiKaiGuanSlot();

    /*�������䵽λ����*/
    void zuoZhuDanXiangDaoWeiKaiGuanSlot();

    /*�������䵽λ����*/
    void youZhuDanXiangDaoWeiKaiGuanSlot();

    /*�涯������*/
    void suiDongDaWuChaKaiGuanSlot();

	/*��ѹ����̧��λ����*/
    void zuoYaDanQiTaiQiDaoWeiKaiGuanSlot();

	/*��ѹ����̧��λ����*/
    void youYaDanQiTaiQiDaoWeiKaiGuanSlot();
private:
    Ui::EquipmentClass ui;

    /*���͸��߼�������*/
    CommandPack* command;

    /*UdpSocket*/
    QUdpSocket* udpSocket;
};
