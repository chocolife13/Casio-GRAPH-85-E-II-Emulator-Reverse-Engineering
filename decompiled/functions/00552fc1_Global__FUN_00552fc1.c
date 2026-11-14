// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00552fc1
// entry: 00552fc1  size: 48


void __thiscall
FUN_00552fc1(int param_1,HBRUSH param_2,GRAYSTRINGPROC param_3,LPARAM param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9)

{
  if (param_2 != (HBRUSH)0x0) {
    param_2 = (HBRUSH)param_2[1].unused;
  }
  GrayStringA(*(HDC *)(param_1 + 4),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  return;
}

