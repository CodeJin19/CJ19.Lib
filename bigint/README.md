# bigint

[Korean](./USAGE.md) | [English](./USAGE-en_EN.md)

큰 정수의 연산을 하는 헤더

<br>

## usage

헤더 파일과 소스 파일을 각각 추가한다.

<br>

## description

<br>

```cpp
    string bigint::compare(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : b < a 인 경우, 1
      b == a 인 경우, 0
      a < b 인 경우, -1

필요 함수
 - None

<br>

```cpp
    string bigint::sub(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : a - b의 결과값

필요 함수 
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::add(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : a + b의 결과값

필요 함수
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::mul(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : a * b의 결과값

필요 함수
 - bigint::aTimesB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::div(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : a / b의 몫
      나머지는 버림
      몫은 정수

필요 함수
 - bigint::aDivideByB()
 - bigint::compare()
 - bigint::aMinusBWithoutCompare()

<br>

```cpp
    string bigint::mod(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : a % b의 결과값

필요 함수
 - bigint::aModularB()
 - bigint::compare()
 - bigint::aMinusBWithoutCompare()

 <br>

```cpp
    string bigint::abs(string a, string b)
```

입력 : 정수로 표현된 문자열 a, b

출력 : 정수 a, b 차이의 절댓값

필요 함수
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

 <br>

```cpp
    string bigint::abs(string a)
```

입력 : 정수로 표현된 문자열 a

출력 : 정수 a의 절댓값

필요 함수
 - None
