// 通用的练习入口：在这里选择要运行的 Demo
// 后续每个模块都会提供一个或多个 DemoXXX() 函数，
// 你只需要把对应调用取消注释即可在 VS / 命令行直接运行。

#include <iostream>

// 来自各个模块的 Demo 函数声明（先只声明，等模块实现后再调用）
void DemoStackAndHeap();      // 模块 1：RAII-1 栈 / 堆生命周期
void DemoTextureGuard();      // 模块 1：RAII-2 资源管理类
void SimulateLevelLoading();  // 模块 1：RAII-4 关卡资源示例

int main() {
    std::cout << "C++ Rehabilitation demo runner" << std::endl;
    std::cout << "Edit main.cpp to call the demo you want to run." << std::endl;

    // 第一次实现完 DemoStackAndHeap() 后，可以先这样调用：
    // DemoStackAndHeap();

    // 或者实现完 DemoTextureGuard() / SimulateLevelLoading() 后，改成：
    // DemoTextureGuard();
    // SimulateLevelLoading();

    return 0;
}

