#pragma once // #pragma once防止头文件重复包含
#include "pnc_map.h"

// 新建了一个程序的类,声明了一个plan_Process成员函数
class Process
{
public:
    void planProcess(); //计划过程

public:
    PNC_Map my_map; //创建了 PNC_Map对象
};