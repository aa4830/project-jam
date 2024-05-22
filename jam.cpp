#include <iostream>
#include <wchar.h>
#include <string> // <> 정규 컴파일러 디렉토리에서만 찾음
#include "conio.h" // "" 내가 만든 디렉토리에서 찾음
using namespace std;

int main()
{

	// 주석은 설명 역할

	// 자료형 (크기 단위 ,byte) 1byte = 8bit-> 256가지 경우의 수
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)

	// 256 가지 -> 0 ~ 255 ( 1byte = 8bit = 256 )
	unsigned char c = 0;
	c = 0;
	c = 255;

	// 양수만 취급하겠다 -> unsigned char c = 0;
	// 음수, 양수 상관없다 -> char c = 0; ( -128 ~ 0 ~ 127 )
	char c1 = 0;

	// c1 = 255; -> 127까지 표현가능한데, 255를 쓰면?? -1과 똑같음 why?
	// 255은 2진법으로 표현하면 11111110인데 이걸 0으로 만드는 수는 00000001 이고
	// 00000001은 1이기 때문에 255는 -1이 될 수 밖에 없다.

	//음의 정수 찾기
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + 4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다.
	// 실수표현 방식은 정밀도에 의존한다. 따라서 double 자료형이 더 아래의 소수점까지
	// 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수끼리 연산하고, 두 표현방식의 피 연산자가 연산될 경우
	// 명시적으로 변환하자.
	//ex) float f = 10.2415f + (float)20; <- 정수를 실수 타입으로 바꿔줌.

	// 연산자
	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지 연산자, 나머지를 구해줌, 피연산자가 모두 정수여야함)
	// ++, -- 한 단계 증가 또는 감소
	int data = 10 + 10;

	//data = data + 20;   둘이 똑같은 말
	//data += 20;	      둘이 똑같은 말 ( 20을 본인 자신에게 넣는다 )

	data = 10 % 3;

	data = 0;
	++data; // 전위 ( 연산 순위 )
	data++; // 후위

	int a = 0;
	//data = a++; ( 연산자 우선순위 가장 마지막 ), data = a; -> a= a+1;
	//data = ++a; ( 연산자 우선순위 가장 먼저 )   a= a+1;-> data = a;                                              )


	//사용자 정의 자료형, 사용자가 직접 만든 자료형
	//struct
	//0 ~ 255 , for GPU , photoshop
	struct Color
	{
		unsigned char R;
		unsigned char G;
		unsigned char B;
	} 
	// 0 ~ 1% //LED 밝기, for GPU
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

		MYST t; // 구조체의 크기는 4byte + 4byte = 8byte

		return 0;
	}

	//포인터 변수
	// 주소를 가리키는, 저장하는 변수
	// 자료형 + *변수명
	//자료형 : 해당 포인터에게 전달된 주소를 해석하는 단위
	int* pInt = nullptr; // nullptr : 아무것도 가르키지 않겠다. 

	int i = 100;
	int* pInt = &i; // i변수의 위치 주소값을 pInt 변수에 집어넣겠다는 의미, pInt가 i를 가르킴
	//****  자료형 : 주소번지에 해당하는 실제 메모리공간을 4byte 정수로 인식하겠다는 의미****
	float f = 3.f;

	// 주소로 접근
	(*pInt) = 100; // 주소로 접근해서 i변수에 100을 넣겠다는 의미, ""pInt에 있는 주소값""으로 접근,참조한다는 의미
	int* pInt = (int*)&f; // 강제로 f 변수의 위치 주소값을 int형 pInt 변수에 넣는다는 의미
	// 오류가 발생 >> why? pInt 변수는 int로 인식하겠다고 했는데, f는 실수형으로 입력되어 있으므로
	i = *pInt; // pInt가 가르키고있는 곳으로 접근을해서 읽은 값을 i에 넣으라는 의미.

	// 주소의 단위 BYTE
	// 주소가 100 ,101이라면 차이가 1. 1byte 차이가 난다.
	// 왜 pInt에 int,float등의 자료형을 쓸까?? >> 미리 주소 크기를 정해놓으려고

	// 포인터 변수의 크기는 8byte 이다. 왜냐하면 64비트 운영체재에서 인식할 수 있는 최대크기이기 때문
	int iSize = sizeof(int*);

	//int 포인터 변수에서의 +1의 의미는 조금 다르다. 가르키고 있는 곳을 int로 보고있기 때문에
	//다음 int 위치로 이동하라는 의미이다.즉 4byte 증가함. int말고도 다른 자료형에서도 동일

	//포인터와 배열
	//배열의 특징
	//1. 메모리가 연속적인 구조.따닥따닥 붙어있음.
	//2. 배열의 이름은 배열의 시작 주소이다.
	int iArr[10] = {};

	//int 단위로 접근

	//테스트 문제
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr 배열 2번째 칸에 10을 넣는다는 의미

	//문제 1
	{
		short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		int* pI = (int*)sArr;

		int iData = *((short*)(pI + 2));

		cout << iData << endl;


		//문제 2
		char cArr[2] = { 1, 1 };

		short* pS = (short*)cArr;

		iData = *pS;

		cout << iData << endl;

	}
	//const 
	const int cint = 100; // 이제부터 cint는 100이다. 

	//상수화. 바뀔 수 없는 값
	// r-value : 변수
	// l-value : 상수
	cint;

	pint = (int*)&cint;
	*pint = 300;
	cout << cint << endl; // 상수인 cint 주소값에 300을 넣으면 cint는 300으로 출력됌
	// 상수라고 했는데 왜 바뀌나?? >> 포인터로 접근해서 수정은 가능.
//레지스터 최적화로 인해 상수로 기억된 값이 넘어오지 않도록 volatile키워드를 사용한다.



//const 포인터
	int a = 0;
	int* pInt = &a;
	*pInt = 1;

	const int* pConstInt = &a;  // 상수화 한다. int형 포인터 변수를 a의 주소에 초기화하여
	// == 변수 a 지정을 상수화 한다. const 초기화 시 가리킨 대상만 가리킴
	pConstInt = &b; // 불가능

	//포인터 const
	int* const pIntConst = &a; // int형 포인터 변수를 변수 a의 주소에 상수화한다.
	// 가리키는 원본을 수정 할 수 없음
	pIntConst = &b; // 가능 

	const char* Message = "Hello World";
	cout << Message << endl;
	
	string MessageString = "Hello World"
	cout << MessageString << endl; // Hello World가 출력된다.

	//const 포인터 const 초기화 시 가리킨 대상만 가리키고, 가리키는 원본을 수정 할 수 없음
	const int* const pConstIntConst = nullptr;




	// void 반환값이 없음
	void* pVoid = nullptr; // nullptr : 아무것도 가르키지 않음
	// void 타입은 주소를 넣어줬을 때 주소의 원형을 특정 데이터타입으로 해석하지 않기때문에
	// 아무거나 받을 수 있다. 그렇기 때문에 역참조가 불가능함.
	{
		int a = 0;
		float f = 0.0f;
		double d = 0.;
		long long 11 = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &11;

		*pVoid; // 역참조가 불가능.
		pVoid + 1; // 주소연산도 불가능.
	}

	// 메모리 영역
	// 1. 스택, 자동으로 지워짐
	// 2. 데이터
	// 3. 힙, 직접 지우기 전까지는 안지워짐
	// 4. Rom(Read Only Memory 읽기전용메모리)(코드 메모리)

	// 문자
	// char(1), wchar(2)
	char M[6] = { "HEl\0lO" } // \0이 나올 때 까지 출력
	cout << strlen(M) << endl; // M배열 문자열 개수 세기

	//string 문자열
	string Message = "Hello";
	cout << Message << endl; // 문자를 출력해줌
	string Message2 = "World";
	cout << Message + Message2 << endl; // Hello World가 출력됌 오직"+"만 가능

	char c = 'a';
	wchar_t wc = L'a'; // L을 앞에 붙이면 a문자를 2byte로 쓰겠다는 의미


	char szChar[10] = "abcdef";
	wchar_t szWChar[10] = L"abcdef"; // 문자열 끝에는 안보일뿐 0문자가 포함 되어있다. //


	short arrShort[10] = L"abcdef";; // 첫번째 자리에 97을 넣고 두번째 자리에 98을 넣고~~
	// short arrShort[10] = { 97 ,98, 99, 100, 101, 102, }; 와 똑같다.
	const wchar_t* pChar = L"abcdef"; // 왜 될까? >> 문자열의 정체가 주소값이기 때문


	szWchar[1] = 'z'; // szWchar 배열 2번째 칸을 z로 바꾼다.
	pChar[1] = 'z'; // *(pChar +1) = 'z'; "배열2번째 칸"이 아닌 "주소 두번째 칸" b를 z로 바꾼다는 의미
	//하 지 만 const 포인트 변수라 주소로 들어가서 수정 할 수 없다.
	

	char szTest[10] = "adc한글"; //한글은 한칸에 1~2바이트 차지
	wChar_t szTestW[10] = L"abc한글"; // 때문에 1~2바이트가 아닌 L을붙여서 확정 2바이트로 보는게 편하다

	

	//문자열 개수 세기
	wchar_t szName[10] = L"Raimond";
	int iLen = wcslen(szName); // wcslen : 문자열의 길이를 알려주는 함수. 문자열의 시작 주소를 알려주어야한다.
							   // 단, #include <wchar.h> 를 사용해야함.

	unsigned int GetLength(const wchar_t* _pStr)
	{
		//문자 개수 체크 용도
		int i = 0;

		while (true) // while ('\0'' != _pStr[i]) 이렇게 써도 된다.
		{
			wchar_t c = *(_pStr + i);
			if (0 == c) // if('\0' == c) 똑같은 말
			{
				break;
			}
			++i;
		}
		return i;  // i 값이 문자열 끝 값이 0이면 i 값을 return
	}

	// 문자열 이어 붙이기 
	wcscat_s();
	// 1. 목적지 문자열의 끝을 확인(문자열이 이어 붙을 시작 위치)
	iDestLen; // Dest 문자열의 끝 인덱스

	// 2. 반복적으로 src 문자열 dest 끝 위치에 복사하기
	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}
	// 3. scr 문자열의 끝을 만나면 반복 종료


	wchar_t szString[100] = L"abc";
	wcscat_s(szString, 100, L"def"); // (변수 이름, 버퍼사이즈, 주소)
	wcscat_s(szString, 100, L"ghi");

	void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* pSrc)
	{	
		//예외처리
		//이어붙인 최종 문자열 길이가, 목적지 저장 공간을 넘어서려는 경우
		int iDestLen = GetLength(_pDest);
		int iSrcLen = GetLength(_pSrc);

		if (_iBufferSize < iDestLen + iSrcLen + 1)//NULL 문자 공간까지 계산
		{
			assert(nullptr);
		}
	}

	// 구조체와 포인터
	typedef struct _tagMyST
	{
		int a;  // 맴버, 변수가 아님
		float f;
	}MYST;

	MYST s = {};
	
	MYST* pST = &s;
	pST + 1; // 8byte씩 증가
	
	(*pST).a = 100; // 주소로 접근해서 a파트에 100을 넣겠다는 의미
	(*pST).f = 3.14f;

	pST->a; = 100;
	pST->f; = 3.14f; // (*pST).f = 3.14f; 똑같은 말

	//문자열과 포인터
	new int; // 메모리 시작위치를 알려준다
	//동적 변수 선언
	int* P = new int; // 메모리를 할당하고, 매모리 위치 시작 주소를 p에 저장
	delete P; // 메모리를 해제시킴. 삭제하지않으면 계속 메모리를 사용함

	int* A = new int[10]; // 메모리 위치 시작 주소를 A에 저장
	*(A + 1) = 10;
	A[1] = 10;

	delete[] P; // 배열로 생성했으면 배열로 삭제해야함



	//힙 영역 (동적 할당)
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 메모리를 관리해줘야함(해제) 
	int main()
	{
		int* pInt = (int*)malloc(100); // malloc(100) 100바이트가 힙 메모리 안에 만들어짐. 무슨 용도로 사용할 지는 내가 정한 포인터로 가르켜서 사용
		float* pF = (float*)malloc(4); // malloc 순수하게 주소의 개념으로만 리턴할것이기때문에 반환타입이 보이드타입으로 되어있는 것 
		*pF = 1.23f;

		int* pInt = nullptr;
		if (100 == iIntput)
		{
			pInt = (int*)malloc(100);
		}

		if (nullptr != pInt)
		{
			free(pInt); // free 주소를 전달해주면 주소가 가르키는 곳을 해제시켜줌.
		}
	}




		// 가변배열 : 크기가 고정이 아닌 배열??

		int a = 100;
		int arr[a] = {}; // 불가능
		//배열 개수를 선언할 때는 변수를 사용 할 수 없다.

		//객체(instance)
		// int a; 여기서 a가 객체. 내가 의도한 자료형의 실질적인 데이터

		struct tArr
		{
			int arr[100];
		}

		tArr s;

		for (int i = 0; i < 100; ++i)
		{
			s.arr[i] = i;
		}
		// 이럴바엔 구조체 안만들고 배열을 만들고말지.
		// 그 래 서
		typdef struct _tagArr
		{
			int* pInt;
			int iCount; // 데이터를 넣어줬을때 이번에 들어갈 데이터자리를 알려면 현재까지 들어온 데이터 수를 알아야함
			int iMaxCount; // 가변배열 기능을 하기위해서 count값이 한계치에 도달했을때를 알아야함.그때그때 늘려줘야하니까


		}tArr;

	// 배열 초기화 함수
	void InitArr(tArr* _pArr)
	{
		_pArr->pInt = (int*)malloc(40);
		_pArr->iCount = 0;
		_pArr->iMaxCount = 10; // 메모리 크기가 40이므로 int 10개가 최대
	}
	// 배열 메모리 해제 함수
	void ReleaseArr(tArr* _pArr)
	{
		free(_pArr->pInt);
		_pArr->iCount = 0;
		_pArr->iMaxCount = 0;
	}
	// 데이터 추가 함수
	void PushBack(tArr* _pArr, int _iData)
	{
		if (_pArr->iMaxCount <= _pArr->iCount) // 힙 영역에 할당한 공간에 메모리가 다 참
		{
			// 재할당
			Reallocate(_pArr);
		}
		// 데이터 추가
		_pArr->pInt[_pArr->iCount++] = _iData;
	}
	// 공간 추가 확장
	void Reallocate()
	{

		// 1. 2배 더 큰 공간을 동적할당한다.
		int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
		// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
		for (int i = 0; i < _pArr->iCount; ++i)
		{
			pNew[i] = _pArr->pInt[i];
		}
		// 3. 기존 공간은 메모리 해제
		free(_pArr->pInt);
		// 4. 배열이 새로 할당된 공간을 가리키게 한다.
		_pArr->pInt = pNew;
		// 5. MaxCount 변경점 적용
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
	// 1. 가변배열
	// 스스로 구현 가능하게 복습할 것 << 가능할까..
	// 2. 가변배열 안에 넣은 데이터 정렬
	// - 버블정렬
	//


	// 연결형 리스트(보류)
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

	// C++ 클래스 특징
	
	// 생성자, 소멸자
	// 객체 생성, 소멸 시 자동으로 호출
	// 직접 만들지 않아도 기본 생성자, 기본 소멸자가 만들어짐

	// 멤버함수. SetInt는 
	// CMy c;
	// c.SetInt(10); 에서 c 객체가 있으므로 사용할 수 있음
	// 해당 클래스가 사용하는 전용 함수
	// 해당 클래스의 객체가 필요함. int a 에서 a가 객체
	// 멤버함수를 객체를 통해서 호출하면, 해당 객체의 주소가 this 포인터로 전달된다.

	struct tMy // c++로 오면서 구조체 선언이 쉬워짐
	{

	};
	
	class Cmy
	{
		// 접근 제한 지정자
		//private, protected(상속), public
	private:
		int m_i;    //비공개 Cmy. 해도 멤버가 뜨지않음
		flaot m_f;

	public:
		int m_j;    //공개 Cmy. 하면 멤버가 뜸

		void SetInt(int i)
		{
			this-> m_i = i; // m_i는 private이기때문에 바로 데이터 넣는것은 안됌. 단, 
			         // Cmy c.SetInt(10); 이런식으로 접근은 가능하다.
		}			// this포인터라고 부른다. 해당 멤버함수를 호출한 객체의 주소타입 this는 생략가능
	public:
		// 생성자, 클래스와 이름이 같다. c++은 생성자가 객체만들어 질때 호출된다.
		// 이니셜라이져
		Cmy()
			: m_i(100)
			, m_f(0.f)
		{
		}
		// 소멸자
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



	//cout.precision(20); cout 소수점 범위 설정

