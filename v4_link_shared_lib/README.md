```shell
target_link_libraries(
    <target> 
    <PRIVATE|PUBLIC|INTERFACE> <item>... 
    [<PRIVATE|PUBLIC|INTERFACE> <item>...]...)
```

动态库不会打包到可执行程序 app 中，当 只有在 app 执行时首次调用到 libcalc.dylib 相关函数的时候，libcalc.dylib 才会被加载到内存中