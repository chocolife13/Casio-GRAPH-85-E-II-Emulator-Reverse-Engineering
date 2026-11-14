// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005146d0
// entry: 005146d0  size: 331


void FUN_005146d0(int param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  int local_4;
  
  local_c = 5;
  local_a = 5;
  local_7 = 5;
  local_b = 2;
  local_8 = 7;
  local_6 = 7;
  if (param_3 == '\0') {
    FUN_0050f990(param_1,param_2,param_4,param_5,param_6);
  }
  else {
    if (param_3 == '\x01') {
      puVar4 = &local_8;
    }
    else {
      if (param_3 != '\x02') {
        return;
      }
      puVar4 = &local_c;
    }
    _param_3 = -1;
    if (param_1 + -1 < 0) {
      _param_3 = -1 - (param_1 + -1);
    }
    iVar2 = -1;
    if (param_2 + -1 < 0) {
      iVar2 = -1 - (param_2 + -1);
    }
    iVar5 = 1;
    if (-param_1 + 0x7e < 0) {
      iVar5 = -param_1 + 0x7f;
    }
    iVar1 = 1;
    if (-param_2 + 0x3e < 0) {
      iVar1 = -param_2 + 0x3f;
    }
    local_4 = iVar5;
    if (iVar2 <= iVar1) {
      pbVar6 = puVar4 + iVar2 + 1;
      iVar3 = iVar2 + param_2;
      param_2 = (iVar1 - iVar2) + 1;
      do {
        iVar2 = iVar5;
        if (iVar5 < 1) {
          iVar1 = 1 - iVar5;
          do {
            iVar1 = iVar1 + -1;
            *pbVar6 = *pbVar6 >> 1;
          } while (iVar1 != 0);
        }
        for (; _param_3 <= iVar2; iVar2 = iVar2 + -1) {
          if ((*pbVar6 & 1) != 0) {
            FUN_0050f990(iVar2 + param_1,iVar3,param_4,param_5,param_6);
            iVar5 = local_4;
          }
          *pbVar6 = *pbVar6 >> 1;
        }
        pbVar6 = pbVar6 + 1;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  return;
}

