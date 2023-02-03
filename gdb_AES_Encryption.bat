REM set THE_CONF=Debug_Memory
set THE_CONF=Debug
REM set THE_CONF=Release
gdb.exe dist\%THE_CONF%\MinGW-Windows\aes_encryption.exe
