#ifndef _COMMAND_H_
#define  _COMMAND_H_
#pragma pack(push,1)

/*��λ�����߼����͵��������ʽ*/
typedef struct _command
{
	unsigned short header;//��ͷ
	unsigned short packLength;//������
	unsigned char packType;//������
	unsigned char anJianXinHao;//�����ź�
	unsigned char quDongKongZhi;//��������
	unsigned char kouJiKongZhi;//�ۻ�����
	unsigned char yangDanJiKongZhi;//�ﵯ������
	unsigned char daoDanPeiDianJianCe;//���������
	unsigned char zuoYuDanShuRuB4;//���൯����B4
	unsigned char zuoYuDanShuRuC15;//���൯����C15
	unsigned char zuoShengQiZhengChang;//����������
	unsigned char zuoPaoXuanZe;//����ѡ��
	unsigned char youPaoXuanZe;//����ѡ��
	unsigned char sheJiBaoXian;//�������
	unsigned char sheJiAnJian;//�������
	unsigned char lianSuoJieChu;//�������
	unsigned char huoPaoMoShi;//����ģʽ
	unsigned char zuoKaiMenDaoWei;//���ŵ�λ
	unsigned char youKaiMenDaoWei;//�ҿ��ŵ�λ
	unsigned char zuoZhuDanXiangDaoWei;//�������䵽λ
	unsigned char youZhuDanXiangDaoWei;//�������䵽λ
	unsigned char suiDongDaWuCha;//�涯�����
	unsigned char zuoYaDanQiTaiQiDaoWei;//��ѹ����̧��λ
	unsigned char youYaDanQiTaiQiDaoWei;//��ѹ����̧��λ
	unsigned char reserve[5];
	unsigned char checksum;//У���
}CommandPack;

#pragma pack(pop)
#endif
