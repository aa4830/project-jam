#include <iostream>
#include <wchar.h>
#include <string> // <> ���� �����Ϸ� ���丮������ ã��
#include "conio.h" // "" ���� ���� ���丮���� ã��
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
	// ��������� ��ȯ����.
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


	//����� ���� �ڷ���, ����ڰ� ���� ���� �ڷ���
	//struct
	//0 ~ 255 , for GPU , photoshop
	struct Color
	{
		unsigned char R;
		unsigned char G;
		unsigned char B;
	} 
	// 0 ~ 1% //LED ���, for GPU
	struct Color
	{
		float R; 0.8 * 255 =
		float G;
		float B;
	}
	struct Position
	{	
		int X;
		int Y;
	}
	int main()
	{
		Actor* Player = new Actor;
		Player->Position.X = 10;
		Player->Position.Y = 10;
		return 0;
	}
	cout << Player->Position.X << endl;
	delete Player;

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
	// �ּҸ� ����Ű��, �����ϴ� ����
	// �ڷ��� + *������
	//�ڷ��� : �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����
	int* pInt = nullptr; // nullptr : �ƹ��͵� ����Ű�� �ʰڴ�. 

	int i = 100;
	int* pInt = &i; // i������ ��ġ �ּҰ��� pInt ������ ����ְڴٴ� �ǹ�, pInt�� i�� ����Ŵ
	//****  �ڷ��� : �ּҹ����� �ش��ϴ� ���� �޸𸮰����� 4byte ������ �ν��ϰڴٴ� �ǹ�****
	float f = 3.f;

	// �ּҷ� ����
	(*pInt) = 100; // �ּҷ� �����ؼ� i������ 100�� �ְڴٴ� �ǹ�, ""pInt�� �ִ� �ּҰ�""���� ����,�����Ѵٴ� �ǹ�
	int* pInt = (int*)&f; // ������ f ������ ��ġ �ּҰ��� int�� pInt ������ �ִ´ٴ� �ǹ�
	// ������ �߻� >> why? pInt ������ int�� �ν��ϰڴٰ� �ߴµ�, f�� �Ǽ������� �ԷµǾ� �����Ƿ�
	i = *pInt; // pInt�� ����Ű���ִ� ������ �������ؼ� ���� ���� i�� ������� �ǹ�.

	// �ּ��� ���� BYTE
	// �ּҰ� 100 ,101�̶�� ���̰� 1. 1byte ���̰� ����.
	// �� pInt�� int,float���� �ڷ����� ����?? >> �̸� �ּ� ũ�⸦ ���س�������

	// ������ ������ ũ��� 8byte �̴�. �ֳ��ϸ� 64��Ʈ �ü�翡�� �ν��� �� �ִ� �ִ�ũ���̱� ����
	int iSize = sizeof(int*);

	//int ������ ���������� +1�� �ǹ̴� ���� �ٸ���. ����Ű�� �ִ� ���� int�� �����ֱ� ������
	//���� int ��ġ�� �̵��϶�� �ǹ��̴�.�� 4byte ������. int���� �ٸ� �ڷ��������� ����

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

	const char* Message = "Hello World";
	cout << Message << endl;
	
	string MessageString = "Hello World"
	cout << MessageString << endl; // Hello World�� ��µȴ�.

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
	// 1. ����, �ڵ����� ������
	// 2. ������
	// 3. ��, ���� ����� �������� ��������
	// 4. Rom(Read Only Memory �б�����޸�)(�ڵ� �޸�)

	// ����
	// char(1), wchar(2)
	char M[6] = { "HEl\0lO" } // \0�� ���� �� ���� ���
	cout << strlen(M) << endl; // M�迭 ���ڿ� ���� ����

	//string ���ڿ�
	string Message = "Hello";
	cout << Message << endl; // ���ڸ� �������
	string Message2 = "World";
	cout << Message + Message2 << endl; // Hello World�� ��� ����"+"�� ����

	char c = 'a';
	wchar_t wc = L'a'; // L�� �տ� ���̸� a���ڸ� 2byte�� ���ڴٴ� �ǹ�


	char szChar[10] = "abcdef";
	wchar_t szWChar[10] = L"abcdef"; // ���ڿ� ������ �Ⱥ��ϻ� 0���ڰ� ���� �Ǿ��ִ�. //


	short arrShort[10] = L"abcdef";; // ù��° �ڸ��� 97�� �ְ� �ι�° �ڸ��� 98�� �ְ�~~
	// short arrShort[10] = { 97 ,98, 99, 100, 101, 102, }; �� �Ȱ���.
	const wchar_t* pChar = L"abcdef"; // �� �ɱ�? >> ���ڿ��� ��ü�� �ּҰ��̱� ����


	szWchar[1] = 'z'; // szWchar �迭 2��° ĭ�� z�� �ٲ۴�.
	pChar[1] = 'z'; // *(pChar +1) = 'z'; "�迭2��° ĭ"�� �ƴ� "�ּ� �ι�° ĭ" b�� z�� �ٲ۴ٴ� �ǹ�
	//�� �� �� const ����Ʈ ������ �ּҷ� ���� ���� �� �� ����.
	

	char szTest[10] = "adc�ѱ�"; //�ѱ��� ��ĭ�� 1~2����Ʈ ����
	wChar_t szTestW[10] = L"abc�ѱ�"; // ������ 1~2����Ʈ�� �ƴ� L���ٿ��� Ȯ�� 2����Ʈ�� ���°� ���ϴ�

	

	//���ڿ� ���� ����
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

	// ���ڿ� �̾� ���̱� 
	wcscat_s();
	// 1. ������ ���ڿ��� ���� Ȯ��(���ڿ��� �̾� ���� ���� ��ġ)
	iDestLen; // Dest ���ڿ��� �� �ε���

	// 2. �ݺ������� src ���ڿ� dest �� ��ġ�� �����ϱ�
	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}
	// 3. scr ���ڿ��� ���� ������ �ݺ� ����


	wchar_t szString[100] = L"abc";
	wcscat_s(szString, 100, L"def"); // (���� �̸�, ���ۻ�����, �ּ�)
	wcscat_s(szString, 100, L"ghi");

	void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* pSrc)
	{	
		//����ó��
		//�̾���� ���� ���ڿ� ���̰�, ������ ���� ������ �Ѿ���� ���
		int iDestLen = GetLength(_pDest);
		int iSrcLen = GetLength(_pSrc);

		if (_iBufferSize < iDestLen + iSrcLen + 1)//NULL ���� �������� ���
		{
			assert(nullptr);
		}
	}

	// ����ü�� ������
	typedef struct _tagMyST
	{
		int a;  // �ɹ�, ������ �ƴ�
		float f;
	}MYST;

	MYST s = {};
	
	MYST* pST = &s;
	pST + 1; // 8byte�� ����
	
	(*pST).a = 100; // �ּҷ� �����ؼ� a��Ʈ�� 100�� �ְڴٴ� �ǹ�
	(*pST).f = 3.14f;

	pST->a; = 100;
	pST->f; = 3.14f; // (*pST).f = 3.14f; �Ȱ��� ��

	//���ڿ��� ������
	new int; // �޸� ������ġ�� �˷��ش�
	//���� ���� ����
	int* P = new int; // �޸𸮸� �Ҵ��ϰ�, �Ÿ� ��ġ ���� �ּҸ� p�� ����
	delete P; // �޸𸮸� ������Ŵ. �������������� ��� �޸𸮸� �����

	int* A = new int[10]; // �޸� ��ġ ���� �ּҸ� A�� ����
	*(A + 1) = 10;
	A[1] = 10;

	delete[] P; // �迭�� ���������� �迭�� �����ؾ���



	//�� ���� (���� �Ҵ�)
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. ����ڰ� ���� �޸𸮸� �����������(����) 
	int main()
	{
		int* pInt = (int*)malloc(100); // malloc(100) 100����Ʈ�� �� �޸� �ȿ� �������. ���� �뵵�� ����� ���� ���� ���� �����ͷ� �����Ѽ� ���
		float* pF = (float*)malloc(4); // malloc �����ϰ� �ּ��� �������θ� �����Ұ��̱⶧���� ��ȯŸ���� ���̵�Ÿ������ �Ǿ��ִ� �� 
		*pF = 1.23f;

		int* pInt = nullptr;
		if (100 == iIntput)
		{
			pInt = (int*)malloc(100);
		}

		if (nullptr != pInt)
		{
			free(pInt); // free �ּҸ� �������ָ� �ּҰ� ����Ű�� ���� ����������.
		}
	}




		// �����迭 : ũ�Ⱑ ������ �ƴ� �迭??

		int a = 100;
		int arr[a] = {}; // �Ұ���
		//�迭 ������ ������ ���� ������ ��� �� �� ����.

		//��ü(instance)
		// int a; ���⼭ a�� ��ü. ���� �ǵ��� �ڷ����� �������� ������

		struct tArr
		{
			int arr[100];
		}

		tArr s;

		for (int i = 0; i < 100; ++i)
		{
			s.arr[i] = i;
		}
		// �̷��ٿ� ����ü �ȸ���� �迭�� �������.
		// �� �� ��
		typdef struct _tagArr
		{
			int* pInt;
			int iCount; // �����͸� �־������� �̹��� �� �������ڸ��� �˷��� ������� ���� ������ ���� �˾ƾ���
			int iMaxCount; // �����迭 ����� �ϱ����ؼ� count���� �Ѱ�ġ�� ������������ �˾ƾ���.�׶��׶� �÷�����ϴϱ�


		}tArr;

	// �迭 �ʱ�ȭ �Լ�
	void InitArr(tArr* _pArr)
	{
		_pArr->pInt = (int*)malloc(40);
		_pArr->iCount = 0;
		_pArr->iMaxCount = 10; // �޸� ũ�Ⱑ 40�̹Ƿ� int 10���� �ִ�
	}
	// �迭 �޸� ���� �Լ�
	void ReleaseArr(tArr* _pArr)
	{
		free(_pArr->pInt);
		_pArr->iCount = 0;
		_pArr->iMaxCount = 0;
	}
	// ������ �߰� �Լ�
	void PushBack(tArr* _pArr, int _iData)
	{
		if (_pArr->iMaxCount <= _pArr->iCount) // �� ������ �Ҵ��� ������ �޸𸮰� �� ��
		{
			// ���Ҵ�
			Reallocate(_pArr);
		}
		// ������ �߰�
		_pArr->pInt[_pArr->iCount++] = _iData;
	}
	// ���� �߰� Ȯ��
	void Reallocate()
	{

		// 1. 2�� �� ū ������ �����Ҵ��Ѵ�.
		int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
		// 2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��.
		for (int i = 0; i < _pArr->iCount; ++i)
		{
			pNew[i] = _pArr->pInt[i];
		}
		// 3. ���� ������ �޸� ����
		free(_pArr->pInt);
		// 4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
		_pArr->pInt = pNew;
		// 5. MaxCount ������ ����
		_pArr->iMaxCount *= 2;
	}

	int main()
	{
		tArr s = {};

		InitArr(&s);

		for (int i = 0; i < 10; ++i)
		{
			PushBack(&s, i);
		}

		RelaeseArr(&s);
		return 0
	}
	// 1. �����迭
	// ������ ���� �����ϰ� ������ �� << �����ұ�..
	// 2. �����迭 �ȿ� ���� ������ ����
	// - ��������
	//


	// ������ ����Ʈ(����)
	typedef struct _tagNode
	{
		int iData;
		tNode* pNextNode;
	}tNode;

	typedef struct _tagList
	{
		tNode* pHeadNode;
		int iCount;
	}tLinkedList;

	// C++ Ŭ���� Ư¡
	
	// ������, �Ҹ���
	// ��ü ����, �Ҹ� �� �ڵ����� ȣ��
	// ���� ������ �ʾƵ� �⺻ ������, �⺻ �Ҹ��ڰ� �������

	// ����Լ�. SetInt�� 
	// CMy c;
	// c.SetInt(10); ���� c ��ü�� �����Ƿ� ����� �� ����
	// �ش� Ŭ������ ����ϴ� ���� �Լ�
	// �ش� Ŭ������ ��ü�� �ʿ���. int a ���� a�� ��ü
	// ����Լ��� ��ü�� ���ؼ� ȣ���ϸ�, �ش� ��ü�� �ּҰ� this �����ͷ� ���޵ȴ�.

	struct tMy // c++�� ���鼭 ����ü ������ ������
	{

	};
	
	class Cmy
	{
		// ���� ���� ������
		//private, protected(���), public
	private:
		int m_i;    //����� Cmy. �ص� ����� ��������
		flaot m_f;

	public:
		int m_j;    //���� Cmy. �ϸ� ����� ��

		void SetInt(int i)
		{
			this-> m_i = i; // m_i�� private�̱⶧���� �ٷ� ������ �ִ°��� �ȉ�. ��, 
			         // Cmy c.SetInt(10); �̷������� ������ �����ϴ�.
		}			// this�����Ͷ�� �θ���. �ش� ����Լ��� ȣ���� ��ü�� �ּ�Ÿ�� this�� ��������
	public:
		// ������, Ŭ������ �̸��� ����. c++�� �����ڰ� ��ü����� ���� ȣ��ȴ�.
		// �̴ϼȶ�����
		Cmy()
			: m_i(100)
			, m_f(0.f)
		{
		}
		// �Ҹ���
		~CMy()
		{

		}

	};

	int main()
	{
		CMy c;
		c.SetInt(10);

		CMy c2;
		CMy c3;





		return 0;
	}



	//cout.precision(20); cout �Ҽ��� ���� ����

