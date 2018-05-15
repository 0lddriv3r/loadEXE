# 傀儡进程注入

## 技术原理
启动Windows傀儡进程挂起，修改内存印象为注入进程，之后再引导傀儡进程执行，即可执行注入代码。
参考：
1. [ProcessHollow](http://www.autosectools.com/process-hollowing.pdf)
2. [loadEXE](http://www.programfile.net/dynamic-forking-win32-exe.html)

## 使用方法
命令行执行：`loadEXE.exe process1.exe process2.exe`，其中参数1为傀儡进程名，参数2为注入进程名。
示例：
1. 将**HelloWorld.exe**注入**calc.exe**：`loadEXE.exe calc.exe HelloWorld.exe`
2. 将**HelloTest.exe**注入**notepad.exe**：`loadEXE.exe notepad.exe HelloTest.exe`