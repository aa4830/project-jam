#include <iostream>
#include <wchar.h>
using namespace std;

int main()
{

	// �ּ��� ���� ����

	// �ڷ��� (ũ�� ���� ,byte) 1byte = 8bit-> 256���� ����� ��
	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)

	// 256 ���� -> 0 ~ 255 ( 1byte = 8bit = 256 )
	unsigned char c = 0;
	c = 0;
	c = 255;

	// ����� ����ϰڴ� -> unsigned char c = 0;
	// ����, ��� ������� -> char c = 0; ( -128 ~ 0 ~ 127 )
	char c1 = 0;

	// c1 = 255; -> 127���� ǥ�������ѵ�, 255�� ����?? -1�� �Ȱ��� why?
	// 255�� 2�������� ǥ���ϸ� 11111110�ε� �̰� 0���� ����� ���� 00000001 �̰�
	// 00000001�� 1�̱� ������ 255�� -1�� �� �� �ۿ� ����.

	//���� ���� ã��
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.

	int a = 4 + 4.0;

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���.
	// �Ǽ�ǥ�� ����� ���е��� �����Ѵ�. ���� double �ڷ����� �� �Ʒ��� �Ҽ�������
	// ��Ȯ�ϰ� ǥ���� �����ϴ�.

	// ������ ��������, �Ǽ��� �Ǽ����� �����ϰ�, �� ǥ������� �� �����ڰ� ����� ���
	// ���������� ��ȯ����.
	//ex) float f = 10.2415f + (float)20; <- ������ �Ǽ� Ÿ������ �ٲ���.

	// ������
	// ��� ������
	// +, -, *, /, %(��ⷯ��, ������ ������, �������� ������, �ǿ����ڰ� ��� ����������)
	// ++, -- �� �ܰ� ���� �Ǵ� ����
	int data = 10 + 10;

	//data = data + 20;   ���� �Ȱ��� ��
	//data += 20;	      ���� �Ȱ��� �� ( 20�� ���� �ڽſ��� �ִ´� )

	data = 10 % 3;

	data = 0;
	++data; // ���� ( ���� ���� )
	data++; // ����

	int a = 0;
	//data = a++; ( ������ �켱���� ���� ������ ), data = a; -> a= a+1;
	//data = ++a; ( ������ �켱���� ���� ���� )   a= a+1;-> data = a;                                              )


	//����� ���� �ڷ���
	typedef struct _tagMyST
	{
		int a;
		float f;
	}MYST;

	int main()
	{

		MYST t; // ����ü�� ũ��� 4byte + 4byte = 8byte

		return 0;
	}

	//������ ����
	// �ּҸ� �����ϴ� ����
	// �ڷ��� + *������
	//�ڷ��� : �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����

	int i = 100;
	int* pInt = &i; // i������ ��ġ �ּҰ��� pInt ������ ����ְڴٴ� �ǹ�, pInt�� i�� ����Ŵ
	//****  �ڷ��� : �ּҹ����� �ش��ϴ� ���� �޸𸮰����� 4byte ������ �ν��ϰڴٴ� �ǹ�****
	float f = 3.f;

	// �ּҷ� ����
	(*pInt) = 100; // i������ 100�� �ְڴٴ� �ǹ�
	int* pInt = (int*)&f; // ������ f ������ ��ġ �ּҰ��� int�� pInt ������ �ִ´ٴ� �ǹ�
	// ������ �߻� >> why? pInt ������ int�� �ν��ϰڴٰ� �ߴµ�, f�� �Ǽ������� �ԷµǾ� �����Ƿ�



	// �ּ��� ���� BYTE
	// �ּҰ� 100 ,101�̶�� ���̰� 1. 1byte ���̰� ����.
	// �� pInt�� int,float���� �ڷ����� ����?? >> �̸� �ּ� ũ�⸦ ���س�������

	// ������ ������ ũ��� 8byte �̴�. �ֳ��ϸ� 64��Ʈ �ü�翡�� �ν��� �� �ִ� �ִ�ũ���̱� ����
	int iSize = sizeof(int*);

	//int ������ ���������� +1�� �ǹ̴� ���� �ٸ���. ����Ű�� �ִ� ���� int�� �����ֱ� ������
	//���� int ��ġ�� �̵��϶�� �ǹ��̴�.�� 4byte ������. int������ �ٸ� �ڷ��������� ����

	//�����Ϳ� �迭
	//�迭�� Ư¡
	//1. �޸𸮰� �������� ����.���ڵ��� �پ�����.
	//2. �迭�� �̸��� �迭�� ���� �ּ��̴�.
	int iArr[10] = {};

	//int ������ ����

	//�׽�Ʈ ����
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr �迭 2��° ĭ�� 10�� �ִ´ٴ� �ǹ�

	//���� 1
	{
		short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		int* pI = (int*)sArr;

		int iData = *((short*)(pI + 2));

		cout << iData << endl;


		//���� 2
		char cArr[2] = { 1, 1 };

		short* pS = (short*)cArr;

		iData = *pS;

		cout << iData << endl;

	}
	//const 
	const int cint = 100; // �������� cint�� 100�̴�. 

	//���ȭ. �ٲ� �� ���� ��
	// r-value : ����
	// l-value : ���
	cint;

	pint = (int*)&cint;
	*pint = 300;
	cout << cint << endl; // ����� cint �ּҰ��� 300�� ������ cint�� 300���� ���
	// ������ �ߴµ� �� �ٲ?? >> �����ͷ� �����ؼ� ������ ����.
//�������� ����ȭ�� ���� ����� ���� ���� �Ѿ���� �ʵ��� volatileŰ���带 ����Ѵ�.



//const ������
	int a = 0;
	int* pInt = &a;
	*pInt = 1;

	const int* pConstInt = &a;  // ���ȭ �Ѵ�. int�� ������ ������ a�� �ּҿ� �ʱ�ȭ�Ͽ�
	// == ���� a ������ ���ȭ �Ѵ�. const �ʱ�ȭ �� ����Ų ��� ����Ŵ
	pConstInt = &b; // �Ұ���

	//������ const
	int* const pIntConst = &a; // int�� ������ ������ ���� a�� �ּҿ� ���ȭ�Ѵ�.
	// ����Ű�� ������ ���� �� �� ����
	pIntConst = &b; // ���� 

	//const ������ const �ʱ�ȭ �� ����Ų ��� ����Ű��, ����Ű�� ������ ���� �� �� ����
	const int* const pConstIntConst = nullptr;




	// void ��ȯ���� ����
	void* pVoid = nullptr; // nullptr : �ƹ��͵� ����Ű�� ����
	// void Ÿ���� �ּҸ� �־����� �� �ּ��� ������ Ư�� ������Ÿ������ �ؼ����� �ʱ⶧����
	// �ƹ��ų� ���� �� �ִ�. �׷��� ������ �������� �Ұ�����.
	{
		int a = 0;
		float f = 0.0f;
		double d = 0.;
		long long 11 = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &11;

		*pVoid; // �������� �Ұ���.
		pVoid + 1; // �ּҿ��굵 �Ұ���.
	}

	// �޸� ����
	// 1. ����
	// 2. ������
	// 3. ��
	// 4. Rom(Read Only Memory �б�����޸�)(�ڵ� �޸�)

	// ����
	// char(1), wchar(2)
	wchar_t wc = 49;

	char c = 'a';
	wchar_t wc = L'a'; // L�� �տ� ���̸� a���ڸ� 2byte�� ���ڴٴ� �ǹ�


	char szChar[10] = "abcdef";
	wchar_t szWChar[10] = L"abcdef"; // ���ڿ� ������ �Ⱥ��ϻ� 0���ڰ� ���� �Ǿ��ִ�.


	short arrShort[10] = L"abcdef";; // ù��° �ڸ��� 97�� �ְ� �ι�° �ڸ��� 98�� �ְ�~~
	// short arrShort[10] = { 97 ,98, 99, 100, 101, 102, }; �� �Ȱ���.
	const wchar_t* pChar = L"abcdef"; // �� �ɱ�? >> ���ڿ��� ��ü�� �ּҰ��̱� ����


	szWchar[1] = 'z'; // szWchar �迭 2��° ĭ�� z�� �ٲ۴�.
	pChar[1] = 'z'; // *(pChar +1) = 'z'; "�迭2��° ĭ"�� �ƴ� "�ּ� �ι�° ĭ" b�� z�� �ٲ۴ٴ� �ǹ�
	//�� �� �� const ����Ʈ ������ �ּҷ� ���� ���� �� �� ����.
	

	char szTest[10] = "adc�ѱ�"; //�ѱ��� ��ĭ�� 1~2����Ʈ ����
	wChar_t szTestW[10] = L"abc�ѱ�"; // ������ 1~2����Ʈ�� �ƴ� L���ٿ��� Ȯ�� 2����Ʈ�� ���°� ���ϴ�

	


	wchar_t szName[10] = L"Raimond";
	int iLen = wcslen(szName); // wcslen : ���ڿ��� ���̸� �˷��ִ� �Լ�. ���ڿ��� ���� �ּҸ� �˷��־���Ѵ�.
							   // ��, #include <wchar.h> �� ����ؾ���.

	unsigned int GetLength(const wchar_t* _pStr)
	{
		//���� ���� üũ �뵵
		int i = 0;

		while (true) // while ('\0'' != _pStr[i]) �̷��� �ᵵ �ȴ�.
		{
			wchar_t c = *(_pStr + i);
			if (0 == c) // if('\0' == c) �Ȱ��� ��
			{
				break;
			}
			++i;
		}
		return i;  // i ���� ���ڿ� �� ���� 0�̸� i ���� return
	}









	//cout.precision(20); cout �Ҽ��� ���� ����