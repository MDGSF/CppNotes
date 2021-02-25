// Copyright (c) 2021 by HuangJian
//
// C++11 最佳实践示范代码

#include <iostream>
#include <set>
#include <string>
#include <vector>

namespace linux_sys {    // 命名空间，全小写
void get_rlimit_core();  // 函数，全小写
}

namespace demo_cpp11 {  // 命名空间，全小写

// using 别名
// typedef unsigned int uint_t; // 等价的 typedef
using uint_t = unsigned int;

// using 定义常用的类型别名
using u8 = unsigned char;
using i8 = signed char;
using u16 = unsigned short;
using i16 = signed short;
using u32 = unsigned int;
using i32 = signed int;
using u64 = unsigned long long;
using i64 = signed long long;
using usize = size_t;
using isize = ssize_t;

// 常量，全大写
#define MAX_PATH_LEN 256

// 常量，全大写
const int BUFF_SIZE = 4096;

// 全局变量用 g_ 作为前缀
int g_count = 0;

/*
@brief DemoCpp11 C++11最佳实践示范类。
1. 给类添加 final，防止被继承。
2. 现在每个类都有 6 个默认函数：
 2.1 默认构造函数
 2.2 默认析构函数
 2.3 默认拷贝构造函数
 2.4 默认拷贝赋值函数
 2.5 默认转移构造函数
 2.6 默认转移赋值函数
可以通过 `= default` 来明确使用默认实现。
可以通过 `= delete` 来明确禁用默认实现。
3. 使用 explicit 来防止一些隐式转换。
4. 可以使用代理构造函数来简化代码。
5. 成员变量声明的时候可以直接初始化。
6. 使用 const 来修饰常函数。
7. 使用 using 来定义类型别名。
8. 类名使用 CamelCase，函数和变量用 snake_case，成员变量加 m_ 前缀
*/
class DemoCpp11 final {  // 添加 final，类就没法被继承了。
 public:
  using this_type = DemoCpp11;      // 给自己也起个别名
  using string_type = std::string;  // 字符串类型别名
  using set_type = std::set<int>;   // 集合类型别名

 public:
  DemoCpp11() = default;   // 明确告诉编译器，使用默认实现
  ~DemoCpp11() = default;  // 明确告诉编译器，使用默认实现

  DemoCpp11(const DemoCpp11&) = delete;             // 禁止拷贝构造函数
  DemoCpp11& operator=(const DemoCpp11&) = delete;  // 禁止拷贝赋值函数

  DemoCpp11(DemoCpp11&& s) = default;             // 显式转移构造函数
  DemoCpp11& operator=(DemoCpp11&& s) = default;  // 显式转移赋值函数

  explicit DemoCpp11(int id) : m_id(id) {}  // 显式单参构造函数
  explicit operator bool();                 // 显式转型为bool

  // 代理构造函数
  explicit DemoCpp11(const std::string& id)  // 字符串参数构造函数
      : DemoCpp11(stoi(id)) {}  // 转换成整数，再委托给另一个构造函数

  // 添加 const 修饰常函数
  // 函数名，全部小写
  int get_id() const { return m_id; }

  // 函数名，全部小写
  void show_demo() const {
    // 局部变量，全部小写
    int local_variable = 123;
    std::cout << "local_variable = " << local_variable << std::endl;
    std::cout << "m_id = " << m_id << std::endl;
    std::cout << "m_name = " << m_name << std::endl;
  }

 private:
  /*
  成员变量，用 m_ 作为前缀，全部小写
  */
  int m_id = 0;                      // 整数成员，赋值初始化
  std::string m_name = "democpp11";  // 字符串成员，赋值初始化
  std::vector<int> m_friends{1, 2, 3};  // 容器成员，使用花括号的初始化列表
};

}  // namespace demo_cpp11
