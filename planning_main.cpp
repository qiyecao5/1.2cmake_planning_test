#include<iostream>
#include "process.h"
using std::cout, std::endl;


int main()
{
    cout << "planing start 规划启动" << endl;
    Process pro;  //创建过程类对象
    pro.planProcess();
    cout << "planing end 规划结束" << endl;
    return 0;
}