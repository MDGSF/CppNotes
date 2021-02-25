// Copyright (c) 2021 by HuangJian
//
// clang main.cpp -lstdc++ -L.

#include "democpp11.hpp"

using namespace std;
using namespace demo_cpp11;

int main() {
  DemoCpp11 demo = DemoCpp11(1024);
  cout << demo.get_id() << endl;
  demo.show_demo();
  return 0;
}
