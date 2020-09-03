# bigint

[Korean](./USAGE.md) | [English](./USAGE-en_EN.md)

Header for calculation of big integer

<br>

## usage

add header file and source file into your project

<br>

## description

<br>

```cpp
    string bigint::compare(string a, string b)
```

input : big integr a, b as string type

output : if b < a, 1
        if b == a, 0
        if a < b, -1

requirement
 - None

<br>

```cpp
    string bigint::sub(string a, string b)
```

input : big integr a, b as string type

output : answer of a - b

requirement
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::add(string a, string b)
```

input : big integr a, b as string type

output : answer of a + b

requirement
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::mul(string a, string b)
```

input : big integr a, b as string type

output : answer of a * b

requirement
 - bigint::aTimesB()
 - bigint::aPlusB()

<br>

```cpp
    string bigint::div(string a, string b)
```

input : big integr a, b as string type

output : quotient of a / b
        remove remainder
        quotient as integer

requirement
 - bigint::aDivideByB()
 - bigint::compare()
 - bigint::aMinusBWithoutCompare()

<br>

```cpp
    string bigint::mod(string a, string b)
```

input : big integr a, b as string type

output : answer of a % b

requirement
 - bigint::aModularB()
 - bigint::compare()
 - bigint::aMinusBWithoutCompare()

 <br>

```cpp
    string bigint::abs(string a, string b)
```

input : big integer a, b as string type

output : answer of |a - b|

requirement
 - bigint::compare()
 - bigint::aMinusB()
 - bigint::aPlusB()

 <br>

```cpp
    string bigint::abs(string a)
```

input : big integer a as string type

output : absolute value of a

requirement
 - None