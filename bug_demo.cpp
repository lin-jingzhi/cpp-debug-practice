#include <iostream>

void memory_leak_function() {
    int* arr = new int[10];
    std::cout << "Memory allocated..." << std::endl;
    // 修复点 1：用完必须 delete，否则就是“内存泄漏”
    delete[] arr;
}

void crash_function() {
    // 修复点 2：不要指向 nullptr，给它分配真实的内存
    int* ptr = new int;
    *ptr = 100;
    std::cout << "Value at ptr: " << *ptr << std::endl;
    // 修复点 3：用完记得释放
    delete ptr;
}

int main() {
    memory_leak_function();
    crash_function();
    return 0;
}
