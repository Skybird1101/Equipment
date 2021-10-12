#include "Equipment.h"

Equipment::Equipment(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    /*��ʼ������ṹ��*/
    command = new CommandPack[32];

    /*��ʼ��UdpSocket*/
    udpSocket = new QUdpSocket(this);

    /*��ʼ�����еĿ���*/
    initSwitch();

    /*���źźͲ�*/
    initSignalSlot();

}
void Equipment::initSignalSlot()
{
    
    connect(ui.horizontalSlider_4, &QSlider::valueChanged, this, [=]() {anJianXinHaoKaiGuanSlot();});
    connect(ui.horizontalSlider_5, &QSlider::valueChanged, this, [=]() {quDongKongZhiKaiGuanSlot();});
    connect(ui.horizontalSlider_6, &QSlider::valueChanged, this, [=]() {kouJiKongZhiKaiGuanSlot(); });
    connect(ui.horizontalSlider_7, &QSlider::valueChanged, this, [=]() {yangDanJiKongZhiKaiGuanSlot(); });
    connect(ui.horizontalSlider_12, &QSlider::valueChanged, this, [=]() {daoDanPeiDianKaiGuan(); });
    connect(ui.horizontalSlider_13, &QSlider::valueChanged, this, [=]() {zuoYuDanShuRuKaiGuanB4Slot(); });
    connect(ui.horizontalSlider_14, &QSlider::valueChanged, this, [=]() {zuoYuDanShuRuKaiGuanC15Slot(); });
    connect(ui.horizontalSlider_15, &QSlider::valueChanged, this, [=]() {zuoShengQiZhengKaiGuanChangSlot(); });
    connect(ui.horizontalSlider_20, &QSlider::valueChanged, this, [=]() {zuoPaoXuanZeKaiGuanSlot(); });
    connect(ui.horizontalSlider_21, &QSlider::valueChanged, this, [=]() {youPaoXuanZeKaiGuanSlot(); });
	connect(ui.horizontalSlider_22, &QSlider::valueChanged, this, [=]() {sheJiBaoXianKaiGuanSlot(); });
    connect(ui.horizontalSlider_26, &QSlider::valueChanged, this, [=]() {zuoKaiMenDaoWeiKaiGuanSlot(); });
    connect(ui.horizontalSlider_27, &QSlider::valueChanged, this, [=]() {youKaiMenDaoWeiKaiGuanSlot(); });
    connect(ui.horizontalSlider_28, &QSlider::valueChanged, this, [=]() {zuoZhuDanXiangDaoWeiKaiGuanSlot(); });
    connect(ui.horizontalSlider_29, &QSlider::valueChanged, this, [=]() {youZhuDanXiangDaoWeiKaiGuanSlot(); });
    connect(ui.horizontalSlider_30, &QSlider::valueChanged, this, [=]() {suiDongDaWuChaKaiGuanSlot(); });
    connect(ui.horizontalSlider_31, &QSlider::valueChanged, this, [=]() {zuoYaDanQiTaiQiDaoWeiKaiGuanSlot(); });
    connect(ui.horizontalSlider_32, &QSlider::valueChanged, this, [=]() {youYaDanQiTaiQiDaoWeiKaiGuanSlot(); });
}

void Equipment::initSwitch()
{
    ui.horizontalSlider->setMaximum(1);
    ui.horizontalSlider->setMinimum(0);


    ui.horizontalSlider_2->setMaximum(1);
    ui.horizontalSlider_2->setMinimum(0);


    ui.horizontalSlider_3->setMaximum(1);
    ui.horizontalSlider_3->setMinimum(0);

    ui.horizontalSlider_4->setMaximum(1);
    ui.horizontalSlider_4->setMinimum(0);

    ui.horizontalSlider_5->setMaximum(1);
    ui.horizontalSlider_5->setMinimum(0);
    
    ui.horizontalSlider_6->setMaximum(1);
    ui.horizontalSlider_6->setMinimum(0);

    ui.horizontalSlider_7->setMaximum(1);
    ui.horizontalSlider_7->setMinimum(0);

    ui.horizontalSlider_8->setMaximum(1);
    ui.horizontalSlider_8->setMinimum(0);

    ui.horizontalSlider_9->setMaximum(1);
    ui.horizontalSlider_9->setMinimum(0);

    ui.horizontalSlider_10->setMaximum(1);
    ui.horizontalSlider_10->setMinimum(0);

    ui.horizontalSlider_11->setMaximum(1);
    ui.horizontalSlider_11->setMinimum(0);

    ui.horizontalSlider_12->setMaximum(1);
    ui.horizontalSlider_12->setMinimum(0);

    ui.horizontalSlider_13->setMaximum(1);
    ui.horizontalSlider_13->setMinimum(0);

    ui.horizontalSlider_14->setMaximum(1);
    ui.horizontalSlider_14->setMinimum(0);

    ui.horizontalSlider_15->setMaximum(1);
    ui.horizontalSlider_15->setMinimum(0);

    ui.horizontalSlider_16->setMaximum(1);
    ui.horizontalSlider_16->setMinimum(0);

    ui.horizontalSlider_17->setMaximum(1);
    ui.horizontalSlider_17->setMinimum(0);

    ui.horizontalSlider_18->setMaximum(1);
    ui.horizontalSlider_18->setMinimum(0);

    ui.horizontalSlider_19->setMaximum(1);
    ui.horizontalSlider_19->setMinimum(0);


    ui.horizontalSlider_20->setMaximum(1);
    ui.horizontalSlider_20->setMinimum(0);

    ui.horizontalSlider_21->setMaximum(1);
    ui.horizontalSlider_21->setMinimum(0);

    ui.horizontalSlider_22->setMaximum(1);
    ui.horizontalSlider_22->setMinimum(0);

    ui.horizontalSlider_23->setMaximum(1);
    ui.horizontalSlider_23->setMinimum(0);


    ui.horizontalSlider_24->setMaximum(1);
    ui.horizontalSlider_24->setMinimum(0);

    ui.horizontalSlider_25->setMaximum(1);
    ui.horizontalSlider_25->setMinimum(0);

    ui.horizontalSlider_26->setMaximum(1);
    ui.horizontalSlider_26->setMinimum(0);


    ui.horizontalSlider_27->setMaximum(1);
    ui.horizontalSlider_27->setMinimum(0);


    ui.horizontalSlider_28->setMaximum(1);
    ui.horizontalSlider_28->setMinimum(0);

    ui.horizontalSlider_29->setMaximum(1);
    ui.horizontalSlider_29->setMinimum(0);

    ui.horizontalSlider_30->setMaximum(1);
    ui.horizontalSlider_30->setMinimum(0);


    ui.horizontalSlider_31->setMaximum(1);
    ui.horizontalSlider_31->setMinimum(0);

    ui.horizontalSlider_32->setMaximum(1);
    ui.horizontalSlider_32->setMinimum(0);
}



unsigned char Equipment::getChecksum(unsigned char* buf, unsigned size)
{
    int i = 0;
    unsigned char checksum = 0;
    if ((buf == NULL) || (size == 0))
    {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        checksum = (checksum + buf[i]);
    }
    return checksum;
}

void Equipment::anJianXinHaoKaiGuanSlot()
{

    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->anJianXinHao = 1;
    	unsigned char checksum = getChecksum((unsigned char*)command, 32);
		command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�򿪰����źſ���\n"));
        ui.textBrowser->repaint();
    }
    if(ui.horizontalSlider_4->value()==0)
    {
        command->anJianXinHao = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�رհ����źſ���\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::quDongKongZhiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->quDongKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���������ƿ���\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->quDongKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��������ƿ���\n"));
        ui.textBrowser->repaint();
    }
}
void Equipment::kouJiKongZhiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->kouJiKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�򿪿ۻ����ƿ���\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->kouJiKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�رտۻ����ƿ���\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::yangDanJiKongZhiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->yangDanJiKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���ﵯ�����ƿ���\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->yangDanJiKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��ﵯ�����ƿ���\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::daoDanPeiDianKaiGuan()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->daoDanPeiDianJianCe= 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�򿪵�������⿪��\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->daoDanPeiDianJianCe = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�رյ�������⿪��\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYuDanShuRuKaiGuanB4Slot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoYuDanShuRuB4 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�����൯���루B4)����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoYuDanShuRuB4 = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر����൯���루B4)����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYuDanShuRuKaiGuanC15Slot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoYuDanShuRuC15 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�����൯���루C15)����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoYuDanShuRuC15 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر����൯���루C15)����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoShengQiZhengKaiGuanChangSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoShengQiZhengChang = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("����������������\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoShengQiZhengChang = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر���������������\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoPaoXuanZeKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("������ѡ�񿪹�\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر�����ѡ�񿪹�\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youPaoXuanZeKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->youPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("������ѡ�񿪹�\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->youPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر�����ѡ�񿪹�\n"));
        ui.textBrowser->repaint();
    }

}

void Equipment::sheJiBaoXianKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->sheJiBaoXian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("��������տ���\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->sheJiBaoXian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر�������տ���\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::sheJiAnJianKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->sheJiAnJian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�������������\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->sheJiAnJian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر������������\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::lianSuoJieChuKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->lianSuoJieChu = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
    	ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�������������\n"));
    	ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->lianSuoJieChu = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر������������\n"));
        ui.textBrowser->repaint();
    }
   
}

void Equipment::huoPaoMoShiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->huoPaoMoShi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�򿪻���ģʽ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->huoPaoMoShi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�رջ���ģʽ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoKaiMenDaoWeiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�����ŵ�λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر����ŵ�λ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youKaiMenDaoWeiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->youKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���ҿ��ŵ�λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->youKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��ҿ��ŵ�λ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoZhuDanXiangDaoWeiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���������䵽λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��������䵽λ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youZhuDanXiangDaoWeiKaiGuanSlot()
{
	 /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->youZhuDanXiangDaoWei=1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���������䵽λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->youZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��������䵽λ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::suiDongDaWuChaKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->suiDongDaWuCha = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("���涯������\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->suiDongDaWuCha = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر��涯������\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYaDanQiTaiQiDaoWeiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->zuoYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("����ѹ����̧��λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->zuoYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر���ѹ����̧��λ����\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youYaDanQiTaiQiDaoWeiKaiGuanSlot()
{
    /*�������*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*����*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->youYaDanQiTaiQiDaoWei=1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("����ѹ����̧��λ����\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_4->value() == 0)
    {
        command->youYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("�ر���ѹ����̧��λ����\n"));
        ui.textBrowser->repaint();
    }
}

Equipment::~Equipment()
{
    delete command;
}
