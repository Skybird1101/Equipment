#ifndef _COMMAND_H_
#define  _COMMAND_H_
#pragma pack(push,1)

/*上位机向逻辑发送的命令包格式*/
typedef struct _command
{
	unsigned short header;//包头
	unsigned short packLength;//包长度
	unsigned char packType;//包类型
	unsigned char anJianXinHao;//按键信号
	unsigned char quDongKongZhi;//驱动控制
	unsigned char kouJiKongZhi;//扣机控制
	unsigned char yangDanJiKongZhi;//扬弹机控制
	unsigned char daoDanPeiDianJianCe;//导弹配电检测
	unsigned char zuoYuDanShuRuB4;//左余弹输入B4
	unsigned char zuoYuDanShuRuC15;//左余弹输入C15
	unsigned char zuoShengQiZhengChang;//左升起正常
	unsigned char zuoPaoXuanZe;//左炮选择
	unsigned char youPaoXuanZe;//右炮选择
	unsigned char sheJiBaoXian;//射击保险
	unsigned char sheJiAnJian;//射击按键
	unsigned char lianSuoJieChu;//联锁解除
	unsigned char huoPaoMoShi;//火炮模式
	unsigned char zuoKaiMenDaoWei;//左开门到位
	unsigned char youKaiMenDaoWei;//右开门到位
	unsigned char zuoZhuDanXiangDaoWei;//左主弹箱到位
	unsigned char youZhuDanXiangDaoWei;//右主弹箱到位
	unsigned char suiDongDaWuCha;//随动大误差
	unsigned char zuoYaDanQiTaiQiDaoWei;//左压弹器抬起到位
	unsigned char youYaDanQiTaiQiDaoWei;//右压弹器抬起到位
	unsigned char reserve[5];
	unsigned char checksum;//校验和
}CommandPack;

#pragma pack(pop)
#endif
