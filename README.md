# iot-Intermediate-programming-2026
C/C++ 기초 프로그래밍 언어 및 객체지향 학습 리포지토리


## C언어 복습 및 메모리 구조 파악

C++에 들어가기 앞서, C언어의 핵심인 변수, 포인터, 그리고 메모리 구조를 복습합니다. (L-value와 R-value의 기본 개념 포함)

프로그램 메모리 영역


* **포인터와 변수의 주소값** : [소스](./Day01/Test1/Test1.c)
    * 주소 연산자(`&`)와 간접 참조 연산자(`*`)의 기본 의미 복습
    * 전역변수와 지역변수가 저장되는 메모리 공간이 다름을 주소값으로 직접 확인
    * 메모리 공간을 가지는 L-value(변수)와 임시 값인 R-value(리터럴 등)에 대한 이해

* **메모리 세그먼트 (Memory Segment)** : [소스](./Day01/Test1/Test2.c)
    * `data`: 전역변수와 정적(`static`) 변수가 저장되는 영역
    * `stack`: 지역변수가 저장되며 함수 종료 시 자동 제거되는 영역
    * `heap`: 동적 메모리 할당(`malloc`, `free`) 영역
    * `code`: 실제 실행할 함수 코드들이 저장되는 영역
    * 변수의 선언 방식(`const`, `static` 등)에 따라 메모리 할당 위치가 어떻게 달라지는지 확인


## C++ 기본 문법과 참조자(Reference)

C++만의 새로운 입출력 방식과 확장된 문법, 그리고 포인터를 대체할 수 있는 '참조자' 개념을 학습합니다.

* **C++ 기본 입출력** 
    * `printf`와 `scanf`를 대신하는 `std::cout`, `std::cin` 사용법 -> [소스](./Day02/basic/Cpp01/main.cpp), [소스2](./Day02/basic/Cpp02/main.cpp)
    * 개행 `std::endl`과 문자열 클래스 `std::string`을 활용한 데이터 입출력 -> [소스](./Day02/basic/Cpp03/main.cpp)

* **디폴트 매개변수 (Default Argument)** : [소스](./Day02/basic/Cpp04/main.cpp)
    * 함수 선언부에 기본값을 할당하여 인자 전달을 생략할 수 있는 문법 (반드시 선언부에 위치해야 함)

* **네임스페이스 (Namespace)** : [소스](./Day02/basic/Cpp05/main.cpp)
    * 이름 충돌을 방지하기 위한 공간 분리 기법 (`::` 범위 지정 연산자 사용)

* **`const`와 포인터** : [소스](./Day02/basic/Cpp07/main.cpp)
    * 가리키는 대상의 '값'을 변경하지 못하게 하는 `const int*`
    * 포인터 '변수 자체'의 주소 변경을 막는 `int* const`

* **참조자 (Reference, `&`) 기초** : [소스](./Day02/basic/Cpp08/main.cpp)
    * 기존 변수에 별명을 붙여 동일한 메모리 공간을 공유하는 방법
    * 포인터(`*`)와 이중 포인터(`**`)에 대해서도 참조자를 선언하는 방법 확인

* **Call by Reference** : [소스](./Day02/basic/Cpp09/main.cpp)
    * 참조자를 매개변수로 받아 메모리 복사 없이 원본 값을 함수 내부에서 직접 변경


## 참조자 심화 및 객체지향(구조체와 클래스)

참조자의 고급 활용법을 익히고, 절차지향(C)에서 객체지향(C++)으로 넘어가는 징검다리인 클래스 기초를 다룹니다.

참조자 vs 포인터


* **연산 비교 (변수 vs 참조자 vs 포인터)** : [소스](./Day03/Cpp-Solution-03/Cpp01/main.cpp)
    * 세 가지 방식으로 데이터를 증감(`++`)시켰을 때 값과 주소의 변화 비교

* **상수 참조자 (`const &`)와 우측값 참조자 (`&&`)** : [소스](./Day03/Cpp-Solution-03/Cpp02/main.cpp), [소스2](./Day03/Cpp-Solution-03/Cpp03/main.cpp)
    * `const`를 붙여 일반 리터럴(R-value)을 참조하는 원리
    * 함수 리턴 시 참조 반환을 통한 복사 오버헤드 제거

* **문자 배열 초기화와 한계** : [소스](./Day03/Cpp-Solution-03/Cpp04/main.cpp), [소스2](./Day03/Cpp-Solution-03/Cpp05/main.cpp), [소스3](./Day03/Cpp-Solution-03/Cpp06/Cpp06.cpp) 
    * `char[]` 배열은 선언 후 단순 대입(`=`)이 불가능하여 `strcpy`나 인덱스 개별 할당을 해야 함을 복습

* **C 스타일 구조체 vs C++ 스타일 구조체** : [소스](./Day03/Cpp-Solution-03/Cpp07/main.cpp), [소스2](./Day03/Cpp-Solution-03/Cpp07/main2.cpp) 
    * 변수만 묶어두는 C 언어 방식과, 내부 함수(메서드)까지 포함할 수 있는 C++ 구조체의 차이

* **클래스 (Class) 와 객체 생성** : [소스](./Day03/Cpp-Solution-03/Cpp07/main3.cpp), [소스2](./Day03/Cpp-Solution-03/Cpp07/main4.cpp) 
    * 기본 접근 제어가 `private`인 클래스의 특징
    * 대입 복사(`Human h = ...`)와 생성자 호출(`Human h(...)`) 방식 비교

* **생성자(Constructor)와 캡슐화** : [소스](./Day03/Cpp-Solution-03/Cpp07/main5.cpp) 
    * 객체 생성 시 멤버를 초기화하는 생성자의 역할
    * 데이터를 보호(`private`)하고 `Getter/Setter`를 통해 접근하는 객체지향의 기본

* **선언과 정의 분리 / 멤버 이니셜라이저** : [소스](./Day03/Cpp-Solution-03/Cpp07/main6.cpp), [소스2](./Day03/Cpp-Solution-03/Cpp08/main.cpp), [소스3](./Day03/Cpp-Solution-03/Cpp09/main.cpp), [소스4](./Day03/Cpp-Solution-03/Cpp10/main.cpp) 
    * 클래스 내부 선언과 외부 구현 분리
    * 객체 생성 시 반드시 초기화되어야 하는 `const`와 참조자(`&`) 멤버를 위한 콜론(`:`) 초기화 리스트 사용


## 클래스 심화 (복사, 이동, 그리고 메모리 관리)

동적 할당이 포함된 객체의 생명주기를 관리하고, 복사와 이동의 차이를 통해 메모리를 최적화하는 방법을 배웁니다.

얕은 복사와 깊은 복사


* **깊은 복사 (Deep Copy)** : [소스](./Day03/Cpp-Solution-04/Cpp01/main.cpp)
    * 포인터 멤버 변수를 얕은 복사할 때 발생하는 메모리 공유/중복 해제 에러 확인
    * 복사 생성자를 직접 정의하여 `new`로 새로운 메모리를 할당하는 깊은 복사 구현

* **`const` 멤버 함수** : [소스](./Day03/Cpp-Solution-04/Cpp02/main.cpp)
    * 함수 뒤에 `const`를 붙여 내부 멤버 변수 수정을 원천 차단
    * `const`로 선언된 객체는 오직 `const` 멤버 함수만 호출할 수 있음을 확인

이동 의미론 (Move Semantics)


* **이동 생성자 (Move Constructor) 와 `std::move`** : [소스](./Day03/Cpp-Solution-04/Cpp03/main.cpp)
    * 임시 객체를 무거운 복사 생성자로 처리하지 않고, 소유권만 이전받아 동적 메모리 할당/해제 오버헤드를 극적으로 줄이는 기법

* **변환 생성자 (Conversion Constructor)** : [소스](./Day03/Cpp-Solution-04/Cpp04/main.cpp), [소스](./Day03/Cpp-Solution-04/Cpp05/main.cpp)
    * 인자를 하나만 받는 생성자가 존재할 때, 대입 연산을 통해 객체로 묵시적 변환이 일어나는 동작 확인

* **디폴트 매개변수를 갖는 생성자** : [소스](./Day03/Cpp-Solution-04/Cpp05/main2.cpp)
    * 매개변수 기본값을 활용하여 여러 형태의 객체 생성을 하나의 생성자로 처리


##