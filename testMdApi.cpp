// testTraderApi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include ".\ThostTraderApi\ThostFtdcMdApi.h"
#include "MdSpi.h"

// UserApi����
CThostFtdcMdApi* pUserApi;

// ���ò���
//char FRONT_ADDR[] = "tcp://asp-sim2-md1.financial-trading-platform.com:26213";		// ǰ�õ�ַ
char FRONT_ADDR[] = "tcp://180.166.80.97:41213";	//�н���CFFEX
TThostFtdcBrokerIDType	BROKER_ID = "xxxx";				// ���͹�˾����(��Ҫ��ϵһ���ڻ���˾�ļ����ṩ����)
TThostFtdcInvestorIDType INVESTOR_ID = "xxxxx";			// Ͷ���ߴ���(��Ҫ��ϵ�ڻ���˾�����ṩ)
TThostFtdcPasswordType  PASSWORD = "xxxxxxxx";			// �û�����(��Ҫ��ϵ�ڻ���˾�����ṩ)
char *ppInstrumentID[] = {"IF1407"/*, "ru1301"*/};			// ���鶩���б�(��Ҫ�������ڷ�������ĺ�Լ���ں�Լû������)
int iInstrumentID = 1;									// ���鶩������
//˵���������������ڻ���˾��ͬ����ͬ��������ѣ�����ϵһ���ڻ���˾������˵��CTP���򻯽��ף��˼һ��ṩ����
//���������ã���VS2012��һ���룬��Ϳ�����������������˰�
//��㲻���п�����ϵ�ң�bj9595@qq.com
int iRequestID = 0;// ������

void main(void)
{
	// ��ʼ��UserApi
	pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// ����UserApi
	CThostFtdcMdSpi* pUserSpi = new CMdSpi();
	pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
	pUserApi->RegisterFront(FRONT_ADDR);					// connect
	pUserApi->Init();
	pUserApi->Join();
//	pUserApi->Release();
}