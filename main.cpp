#include <iostream>

// 简单的宏判断，用于在程序运行时显示系统信息
std::string get_platform() {
#if defined(_WIN32)
  return "Windows";
#elif defined(__linux__)
  return "Linux";
#else
  return "Unknown Platform";
#endif
}

int main() {
  std::cout << "========================================" << std::endl;
  std::cout << "Hello, GitHub Actions Multi-Platform!" << std::endl;
  std::cout << "Platform: " << get_platform() << std::endl;
  std::cout << "Architecture: " << ARCH_NAME
            << std::endl; // ARCH_NAME 由 CMake 传入
  std::cout << "========================================" << std::endl;
  return 0;
}