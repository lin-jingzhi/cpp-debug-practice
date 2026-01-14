# C++ 调试实战：内存泄漏与崩溃分析

本项目记录了在 Ubuntu (WSL2) 环境下使用工业级工具定位并修复 Bug 的全过程。

## ✅ 实验达成：内存报告清零
经过 GDB 定位修复及 Valgrind 深度扫描，程序已通过全量检测：
- **Error Summary**: 0 errors from 0 contexts
- **Heap Summary**: All heap blocks were freed -- no leaks are possible
