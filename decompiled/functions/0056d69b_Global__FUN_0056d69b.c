// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d69b
// entry: 0056d69b  size: 208


int __thiscall FUN_0056d69b(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00564cac(0);
  if ((char)param_2 == '\0') {
    iVar3 = iVar1 - param_1[0x17];
  }
  else if ((char)param_2 == '\x01') {
    iVar3 = iVar1 + param_1[0x17];
  }
  else if ((char)param_2 == '\x02') {
    iVar3 = iVar1 - param_1[0x15];
  }
  else if ((char)param_2 == '\x03') {
    iVar3 = iVar1 + param_1[0x15];
  }
  else {
    iVar3 = param_3;
    if ((char)param_2 != '\x05') {
      if ((char)param_2 == '\x06') {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar1;
        if ((char)param_2 == '\a') {
          iVar3 = 0x7fffffff;
        }
      }
    }
  }
  iVar2 = FUN_00564cac(1);
  if (param_2._1_1_ == '\0') {
    param_3 = iVar2 - param_1[0x18];
  }
  else if (param_2._1_1_ == '\x01') {
    param_3 = iVar2 + param_1[0x18];
  }
  else if (param_2._1_1_ == '\x02') {
    param_3 = iVar2 - param_1[0x16];
  }
  else if (param_2._1_1_ == '\x03') {
    param_3 = iVar2 + param_1[0x16];
  }
  else if (param_2._1_1_ != '\x05') {
    if (param_2._1_1_ == '\x06') {
      param_3 = 0;
    }
    else {
      param_3 = iVar2;
      if (param_2._1_1_ == '\a') {
        param_3 = 0x7fffffff;
      }
    }
  }
  iVar1 = (**(code **)(*param_1 + 0xc0))(iVar3 - iVar1,param_3 - iVar2,param_4);
  if ((iVar1 != 0) && (param_4 != 0)) {
    UpdateWindow((HWND)param_1[7]);
  }
  return iVar1;
}

