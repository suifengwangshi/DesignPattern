# $^ 代替 上面的指令
# $@ 代替 目标文件
CC = g++

TARGET = app
OBJ_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include
DEL_OBJ = .\\build

SRC = $(wildcard $(SRC_DIR)/*.cpp) # 获取目录下的所有cpp文件
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, %.o, $(SRC)) # 将SRC里面的.cpp文件替换成.o文件

VPATH = $(SRC_DIR): $(INCLUDE_DIR) # 指定makefile的搜索路径
vpath %.o $(OBJ_DIR)
vpath %.h ./include # 指定.h类型文件的搜索路径是include
vpath %.cpp ./src # 指定.cpp类型文件的搜索路径是src
# 这仅仅是对于makefile来说搜索目标和依赖文件的路径，但是对于命令行来说是无效的，

all: $(TARGET)

# deeprefix添加前缀 
$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $(addprefix $(OBJ_DIR)/, $(OBJECTS))

# -I参数指定头文件的路径信息
%.o : %.cpp
	$(CC) -c $< -o $(OBJ_DIR)/$@ -Iinclude 

clean:
	del $(TARGET).exe $(DEL_OBJ)\\*.o