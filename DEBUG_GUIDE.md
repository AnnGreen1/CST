# C/C++ 调试环境配置说明

## 当前环境状态
✅ MinGW-W64 已安装 (GCC 15.2.0, GDB 16.3)  
✅ VSCode C/C++ 扩展已安装 (v1.29.3)  
✅ 基本编译测试通过  

## 调试配置文件

### launch.json 配置
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "C/C++: gcc.exe 调试当前文件",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "D:/MinGW-W64/mingw64/bin/gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: gcc.exe 生成活动文件"
        },
        {
            "name": "C/C++: g++ 调试当前文件", 
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "D:/MinGW-W64/mingw64/bin/gdb.exe",
            "setupCommands": [
                {
                    "description": "为 gdb 启用整齐打印",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++ 生成活动文件"
        }
    ]
}
```

### tasks.json 配置
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "C/C++: gcc.exe 生成活动文件",
            "type": "shell",
            "command": "gcc",
            "args": [
                "-fdiagnostics-color=always",
                "-g", 
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"],
            "detail": "使用 GCC 编译 C 文件"
        },
        {
            "label": "C/C++: g++ 生成活动文件",
            "type": "shell",
            "command": "g++",
            "args": [
                "-fdiagnostics-color=always",
                "-g", 
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}.exe"
            ],
            "group": "build",
            "problemMatcher": ["$gcc"],
            "detail": "使用 G++ 编译 C++ 文件"
        }
    ]
}
```

## 使用方法

### 1. 编译和运行
- **C 文件**: 使用 `Ctrl+Shift+B` 选择默认的 gcc 编译任务
- **C++ 文件**: 使用 `Ctrl+Shift+B` 选择 g++ 编译任务
- **快捷运行**: `Ctrl+F5` (无调试运行)

### 2. 调试
1. 在代码行号左侧点击设置断点
2. 按 `F5` 启动调试
3. 选择对应的调试配置:
   - C 文件选择 "C/C++: gcc.exe 调试当前文件"
   - C++ 文件选择 "C/C++: g++ 调试当前文件"

### 3. 调试控制
- `F5`: 继续执行
- `F10`: 单步跳过
- `F11`: 单步进入
- `Shift+F11`: 单步跳出
- `Ctrl+Shift+F5`: 重启调试
- `Shift+F5`: 停止调试

## 常见问题解决

### 强名称验证失败错误
如果遇到 "强名称验证失败" 错误，可以尝试:

1. **以管理员身份运行 VSCode**
2. **重新安装 C/C++ 扩展**:
   ```bash
   code --uninstall-extension ms-vscode.cpptools
   code --install-extension ms-vscode.cpptools
   ```
3. **检查防病毒软件** 是否阻止了扩展文件

### 编译错误
- 确保使用正确的编译器 (gcc for C, g++ for C++)
- 检查文件扩展名 (.c vs .cpp)
- 确认 MinGW 路径正确

## 测试文件
项目中包含测试文件 `test_debug.cpp` 可用于验证调试功能是否正常工作。