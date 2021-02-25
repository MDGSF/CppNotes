// Copyright (c) 2021 by HuangJian
//
// clang generic_lambda.cpp -lstdc++

#include <iostream>
#include <string>

using namespace std;

int main() {
  auto identity = [](auto x) { return x; };
  int three = identity(3);
  string foo = identity("foo");
  cout << "three = " << three << endl;
  cout << "foo = " << foo << endl;
  return 0;
}
