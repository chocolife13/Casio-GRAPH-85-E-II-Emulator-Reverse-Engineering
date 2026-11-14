// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ed7c
// entry: 0056ed7c  size: 309


undefined4 __thiscall FUN_0056ed7c(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  tagRECT local_20;
  undefined1 local_10 [8];
  int *local_8;
  
  local_8 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xcc))(param_3);
  if (((uVar1 & 0x10000000) != 0) && ((uVar1 & 0xf000) != 0)) {
    CopyRect(&local_20,(RECT *)(param_3 + 1));
    iVar6 = local_20.right - local_20.left;
    iVar5 = local_20.bottom - local_20.top;
    bVar7 = param_3[7] != 0;
    if (((local_8[0x19] & 4U) == 0) || ((local_8[0x19] & 1U) == 0)) {
      if ((uVar1 & 0xa000) == 0) {
        bVar4 = bVar7 | 0x10;
      }
      else {
        bVar4 = bVar7 | 10;
      }
    }
    else {
      bVar4 = bVar7 | 6;
    }
    piVar2 = (int *)(**(code **)(*local_8 + 0xbc))(local_10,0xffffffff,bVar4);
    iVar3 = *piVar2;
    if (iVar6 <= *piVar2) {
      iVar3 = iVar6;
    }
    iVar6 = piVar2[1];
    if (iVar5 <= piVar2[1]) {
      iVar6 = iVar5;
    }
    if ((uVar1 & 0xa000) == 0) {
      if ((uVar1 & 0x5000) != 0) {
        param_3[5] = param_3[5] + iVar3;
        iVar5 = param_3[6];
        if (param_3[6] <= iVar6) {
          iVar5 = iVar6;
        }
        param_3[6] = iVar5;
        if ((uVar1 & 0x1000) == 0) {
          if ((uVar1 & 0x4000) != 0) {
            local_20.left = local_20.right - iVar3;
            param_3[3] = param_3[3] - iVar3;
          }
        }
        else {
          param_3[1] = param_3[1] + iVar3;
        }
      }
    }
    else {
      param_3[6] = param_3[6] + iVar6;
      iVar5 = param_3[5];
      if (param_3[5] <= iVar3) {
        iVar5 = iVar3;
      }
      param_3[5] = iVar5;
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 0x8000) != 0) {
          local_20.top = local_20.bottom - iVar6;
          param_3[4] = param_3[4] - iVar6;
        }
      }
      else {
        param_3[2] = param_3[2] + iVar6;
      }
    }
    local_20.right = iVar3 + local_20.left;
    local_20.bottom = local_20.top + iVar6;
    if (*param_3 != 0) {
      FUN_0056503b(param_3,local_8[7],&local_20);
    }
  }
  return 0;
}

