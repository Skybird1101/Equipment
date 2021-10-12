#include "Equipment.h"

Equipment::Equipment(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    /*初始化命令结构体*/
    command = new CommandPack[32];

    /*初始化UdpSocket*/
    udpSocket = new QUdpSocket(this);

    /*初始化所有的开关*/
    initSwitch();

    /*绑定信号和槽*/
    initSignalSlot();

}
void Equipment::initSignalSlot()
{

    /*按键信号*/
    connect(ui.horizontalSlider_4, &QSlider::valueChanged, this, [=]() {anJianXinHaoKaiGuanSlot();});

    /*驱动控制*/
    connect(ui.horizontalSlider_5, &QSlider::valueChanged, this, [=]() {quDongKongZhiKaiGuanSlot();});

	/*扬弹机控制*/
    connect(ui.horizontalSlider_6, &QSlider::valueChanged, this, [=]() {kouJiKongZhiKaiGuanSlot(); });

	/*扬弹机控制*/
    connect(ui.horizontalSlider_7, &QSlider::valueChanged, this, [=]() {yangDanJiKongZhiKaiGuanSlot(); });

    /*导弹配电*/
    connect(ui.horizontalSlider_12, &QSlider::valueChanged, this, [=]() {daoDanPeiDianKaiGuan(); });

    /*左余弹输入B4*/
    connect(ui.horizontalSlider_13, &QSlider::valueChanged, this, [=]() {zuoYuDanShuRuKaiGuanB4Slot(); });

    /*左余弹输入C15*/
	connect(ui.horizontalSlider_14, &QSlider::valueChanged, this, [=]() {zuoYuDanShuRuKaiGuanC15Slot(); });

    /*左升起正常*/
	connect(ui.horizontalSlider_15, &QSlider::valueChanged, this, [=]() {zuoShengQiZhengKaiGuanChangSlot(); });

    /*左炮选择*/
    connect(ui.horizontalSlider_20, &QSlider::valueChanged, this, [=]() {zuoPaoXuanZeKaiGuanSlot(); });

    /*右炮选择*/
    connect(ui.horizontalSlider_21, &QSlider::valueChanged, this, [=]() {youPaoXuanZeKaiGuanSlot(); });

    /*射击保险*/
	connect(ui.horizontalSlider_22, &QSlider::valueChanged, this, [=]() {sheJiBaoXianKaiGuanSlot(); });

    /*射击按键*/
    connect(ui.horizontalSlider_23, &QSlider::valueChanged, this, [=]() {sheJiAnJianKaiGuanSlot(); });

    /*联锁解除*/
    connect(ui.horizontalSlider_24, &QSlider::valueChanged, this, [=]() {lianSuoJieChuKaiGuanSlot(); });

    /*火炮模式*/
    connect(ui.horizontalSlider_25, &QSlider::valueChanged, this, [=]() {huoPaoMoShiKaiGuanSlot(); });

    /*左开门到位*/
	connect(ui.horizontalSlider_26, &QSlider::valueChanged, this, [=]() {zuoKaiMenDaoWeiKaiGuanSlot(); });

    /*右开门到位*/
    connect(ui.horizontalSlider_27, &QSlider::valueChanged, this, [=]() {youKaiMenDaoWeiKaiGuanSlot(); });

    /*左主弹箱到位*/
    connect(ui.horizontalSlider_28, &QSlider::valueChanged, this, [=]() {zuoZhuDanXiangDaoWeiKaiGuanSlot(); });

    /*右主弹箱到位*/
    connect(ui.horizontalSlider_29, &QSlider::valueChanged, this, [=]() {youZhuDanXiangDaoWeiKaiGuanSlot(); });

    /*随动大误差*/
    connect(ui.horizontalSlider_30, &QSlider::valueChanged, this, [=]() {suiDongDaWuChaKaiGuanSlot(); });

    /*左压弹器抬起到位*/
    connect(ui.horizontalSlider_31, &QSlider::valueChanged, this, [=]() {zuoYaDanQiTaiQiDaoWeiKaiGuanSlot(); });

    /*右压弹器抬起到位*/
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

    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_4->value() == 1)
    {
        command->anJianXinHao = 1;
    	unsigned char checksum = getChecksum((unsigned char*)command, 32);
		command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开按键信号开关\n"));
        ui.textBrowser->repaint();
    }
    if(ui.horizontalSlider_4->value()==0)
    {
        command->anJianXinHao = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭按键信号开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::quDongKongZhiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_5->value() == 1)
    {
        command->quDongKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开驱动控制开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_5->value() == 0)
    {
        command->quDongKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭驱动控制开关\n"));
        ui.textBrowser->repaint();
    }
}
void Equipment::kouJiKongZhiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_6->value() == 1)
    {
        command->kouJiKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开扣击控制开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_6->value() == 0)
    {
        command->kouJiKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭扣击控制开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::yangDanJiKongZhiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_7->value() == 1)
    {
        command->yangDanJiKongZhi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开扬弹机控制开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_7->value() == 0)
    {
        command->yangDanJiKongZhi = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭扬弹机控制开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::daoDanPeiDianKaiGuan()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_12->value() == 1)
    {
        command->daoDanPeiDianJianCe= 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开导弹配电检测开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_12->value() == 0)
    {
        command->daoDanPeiDianJianCe = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭导弹配电检测开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYuDanShuRuKaiGuanB4Slot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_13->value() == 1)
    {
        command->zuoYuDanShuRuB4 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左余弹输入（B4)开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_13->value() == 0)
    {
        command->zuoYuDanShuRuB4 = 0;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左余弹输入（B4)开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYuDanShuRuKaiGuanC15Slot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_14->value() == 1)
    {
        command->zuoYuDanShuRuC15 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左余弹输入（C15)开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_14->value() == 0)
    {
        command->zuoYuDanShuRuC15 = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左余弹输入（C15)开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoShengQiZhengKaiGuanChangSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_15->value() == 1)
    {
        command->zuoShengQiZhengChang = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左升起正常开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_15->value() == 0)
    {
        command->zuoShengQiZhengChang = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左升起正常开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoPaoXuanZeKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_20->value() == 1)
    {
        command->zuoPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左炮选择开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_20->value() == 0)
    {
        command->zuoPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左炮选择开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youPaoXuanZeKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_21->value() == 1)
    {
        command->youPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开右炮选择开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_21->value() == 0)
    {
        command->youPaoXuanZe = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭右炮选择开关\n"));
        ui.textBrowser->repaint();
    }

}

void Equipment::sheJiBaoXianKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_22->value() == 1)
    {
        command->sheJiBaoXian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开射击保险开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_22->value() == 0)
    {
        command->sheJiBaoXian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭射击保险开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::sheJiAnJianKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_23->value() == 1)
    {
        command->sheJiAnJian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开射击按键开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_23->value() == 0)
    {
        command->sheJiAnJian = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭射击按键开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::lianSuoJieChuKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_24->value() == 1)
    {
        command->lianSuoJieChu = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
    	ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开联锁解除开关\n"));
    	ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_24->value() == 0)
    {
        command->lianSuoJieChu = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭联锁解除开关\n"));
        ui.textBrowser->repaint();
    }
   
}

void Equipment::huoPaoMoShiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_25->value() == 1)
    {
        command->huoPaoMoShi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开火炮模式开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_25->value() == 0)
    {
        command->huoPaoMoShi = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭火炮模式开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoKaiMenDaoWeiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_26->value() == 1)
    {
        command->zuoKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左开门到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_26->value() == 0)
    {
        command->zuoKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左开门到位开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youKaiMenDaoWeiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_27->value() == 1)
    {
        command->youKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开右开门到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_27->value() == 0)
    {
        command->youKaiMenDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭右开门到位开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoZhuDanXiangDaoWeiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_28->value() == 1)
    {
        command->zuoZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左主弹箱到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_28->value() == 0)
    {
        command->zuoZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左主弹箱到位开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youZhuDanXiangDaoWeiKaiGuanSlot()
{
	 /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_29->value() == 1)
    {
        command->youZhuDanXiangDaoWei=1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开右主弹箱到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_29->value() == 0)
    {
        command->youZhuDanXiangDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭右主弹箱到位开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::suiDongDaWuChaKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_30->value() == 1)
    {
        command->suiDongDaWuCha = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开随动大误差开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_30->value() == 0)
    {
        command->suiDongDaWuCha = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭随动大误差开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::zuoYaDanQiTaiQiDaoWeiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_31->value() == 1)
    {
        command->zuoYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开左压弹器抬起到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_31->value() == 0)
    {
        command->zuoYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭左压弹器抬起到位开关\n"));
        ui.textBrowser->repaint();
    }
}

void Equipment::youYaDanQiTaiQiDaoWeiKaiGuanSlot()
{
    /*填充命令*/
    memset(command, 0, sizeof(CommandPack));
    command->header = 0xEB91;
    command->packLength = 0x02;
    command->packType = 0x01;

    /*发送*/
    if (ui.horizontalSlider_32->value() == 1)
    {
        command->youYaDanQiTaiQiDaoWei=1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("打开右压弹器抬起到位开关\n"));
        ui.textBrowser->repaint();
    }
    if (ui.horizontalSlider_32->value() == 0)
    {
        command->youYaDanQiTaiQiDaoWei = 1;
        unsigned char checksum = getChecksum((unsigned char*)command, 32);
        command->checksum = checksum;
        udpSocket->writeDatagram((const char*)command, QHostAddress::LocalHost, 7777);
        ui.textBrowser->append(QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss.zzz") + " " + QString::fromLocal8Bit("关闭右压弹器抬起到位开关\n"));
        ui.textBrowser->repaint();
    }
}

Equipment::~Equipment()
{
    delete command;
}
