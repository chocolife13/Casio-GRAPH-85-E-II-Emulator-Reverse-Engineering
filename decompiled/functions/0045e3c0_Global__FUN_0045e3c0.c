// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045e3c0
// entry: 0045e3c0  size: 571


int FUN_0045e3c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_stack_00000028;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_48);
  local_60 = local_48;
  local_5c = local_44;
  local_58 = local_40;
  iVar1 = FUN_0047ca80(param_1);
  iVar2 = FUN_0047ca80(param_2);
  if (iVar1 != iVar2) {
    return 9;
  }
  iVar2 = 1;
  if (param_3 == 0) {
    if (0 < iVar1) {
      do {
        iVar3 = FUN_0047cac0(param_1,iVar2,local_3c);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_0047cac0(param_2,iVar2,local_30);
        if (iVar3 != 0) {
          return iVar3;
        }
        FUN_004e6c30(local_3c,&stack0x00000010,local_18);
        FUN_004e6c30(local_30,&stack0x0000001c,local_24);
        FUN_004e6d00(local_18,local_24,local_54);
        FUN_004e6ab0(&local_60,local_54,&local_60);
        iVar3 = FUN_0052f820();
        if (iVar3 == 1) {
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
      iVar3 = FUN_0047cac0(param_1,iVar2,local_3c);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0047cac0(param_2,iVar2,local_30);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0047cac0(param_3,iVar2,local_c);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00451770(local_c);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_004e6c30(local_3c,&stack0x00000010,local_18);
      FUN_004e6c30(local_30,&stack0x0000001c,local_24);
      FUN_004e6d00(local_18,local_24,local_54);
      FUN_004e6d00(local_54,local_c,local_54);
      FUN_004e6ab0(&local_60,local_54,&local_60);
      iVar3 = FUN_0052f820();
      if (iVar3 == 1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  *in_stack_00000028 = local_60;
  in_stack_00000028[1] = local_5c;
  in_stack_00000028[2] = local_58;
  iVar1 = FUN_004e4020(in_stack_00000028);
  return iVar1;
}

