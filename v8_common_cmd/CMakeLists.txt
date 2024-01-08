cmake_minimum_required(VERSION 3.15)
project(app)
set(CMAKE_CXX_STANDARD 17)
add_executable(app main.cpp)

# ===========
# 日志打印
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
# message(FATAL_ERROR "cmake build error!")

# ===========
# 设置字符串
set(TMP a b c)

# ===========
# 打印日志
message(${TMP})

# ===========
# list 常用操作https://cmake.org/cmake/help/latest/command/list.html
unset(TMP)
list(APPEND TMP a b c)
message(${TMP})

list(REMOVE_ITEM TMP a)
message(${TMP})

# ===========
# 宏定义
add_definitions(-DDEBUG)

# ===========
# 预定义宏
message(${PROJECT_SOURCE_DIR})	# 使用cmake命令后紧跟的目录，一般是工程的根目录
message(${PROJECT_BINARY_DIR})	# 执行cmake命令的目录
message(${CMAKE_CURRENT_SOURCE_DIR}) # 当前处理的CMakeLists.txt所在的路径
message(${CMAKE_CURRENT_BINARY_DIR}) # target 编译目录
# message(${EXECUTABLE_OUTPUT_PATH}) # 重新定义目标二进制可执行文件的存放位置
# message(${LIBRARY_OUTPUT_PATH}) # 重新定义目标链接库文件的存放位置
message(${PROJECT_NAME}) # 返回通过PROJECT指令定义的项目名称
message(${CMAKE_BINARY_DIR}) # 项目实际构建路径，假设在build目录进行的构建，那么得到的就是这个目录的路径
