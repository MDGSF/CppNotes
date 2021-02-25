// Copyright (c) 2021 by HuangJian
//
// clang variable_templates.cpp -lstdc++

#include <iostream>

using namespace std;

template <class T>
constexpr T pi = T(3.1415926535897932385);

template <class T>
constexpr T e = T(2.7182818284590452353);

int main() { return 0; }
