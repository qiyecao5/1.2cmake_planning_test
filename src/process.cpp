#include<iostream>
#include "process.h"
using std::cout, std::endl;

// 类外实现这个方法
void Process::planProcess()
{
    cout << "this is planning Process 成员函数" << endl;
    my_map.map_Info(); //调用这个对象的方法
    cout << " planning success! 计划成功" << endl;
}