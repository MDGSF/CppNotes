// Copyright (c) 2021 by HuangJian
//
// g++ thread1.cpp -lpthread -std=c++11 -o a.out

#include <iostream>
#include <thread>

using namespace std;

int main() {
  auto f = []() { cout << "tid=" << this_thread::get_id() << endl; };

  thread t1(f);

  t1.join();

  return 0;
}
