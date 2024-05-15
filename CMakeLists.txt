cmake_minimum_required(VERSION 3.29.0)  # 这个就是设置你cmake所需要的最小版本
project(planning)                       # 就是你这个项目的名字
set(CMAKE_CXX_STANDARD 17)              # 指定C++的标准 这里选择的17标准

# 把动态库和exe都指定到bin目录下面
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# 通常需要单独设置库的输出目录,如果你的项目很简单,可以不写这句,CMake 也会将库文件放置在适当的子目录下
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) 

# 将`${PROJECT_SOURCE_DIR}/src`目录下的所有源文件添加到`SRC_LISTS`变量中，以便后续在CMake配置中使用这些源文件。
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)

# 生成一个动态库    把src目录下的所有.cpp文件 生成一个动态库
add_library(common SHARED ${SRC_LISTS})

# 因为上面的动态库需要依赖include文件里面的头文件，所以要包含以下头文件的目录 
target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 生成可执行文件 (planning_main.cpp就是程序入口)
add_executable(planning_main planning_main.cpp)

# 最后把这个可执行文件 链接到 生成的这个动态库上面
target_link_libraries(planning_main PUBLIC common)
