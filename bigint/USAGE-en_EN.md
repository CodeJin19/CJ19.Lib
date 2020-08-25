# bigint

[Korean](./USAGE.md) | [English](./USAGE-en_EN.md)

Header for calculation of big integer

## usage

add header file and source file into your project

## description

```cpp
    string bigint::compare(string a, string b)
```

input : big integr a, b as string type

output : if b < a, 1
        if b == a, 0
        if a < b, -1


```cpp
    string bigint::sub(string a, string b)
```

input : big integr a, b as string type

output : answer of a - b


```cpp
    string bigint::add(string a, string b)
```

input : big integr a, b as string type

output : answer of a + b


```cpp
    string bigint::mul(string a, string b)
```

input : big integr a, b as string type

output : answer of a * b


```cpp
    string bigint::div(string a, string b)
```

input : big integr a, b as string type

output : quotient of a / b
        remove remainder
        quotient as integer


```cpp
    string bigint::mod(string a, string b)
```

input : big integr a, b as string type

output : answer of a % b
