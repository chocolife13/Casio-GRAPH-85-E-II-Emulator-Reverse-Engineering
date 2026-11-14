// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052fd00
// entry: 0052fd00  size: 529


undefined4 FUN_0052fd00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [12];
  undefined1 local_5c [11];
  char acStack_51 [37];
  undefined1 local_2c [36];
  undefined2 local_8;
  short local_6;
  
  FUN_004e5780(local_68);
  iVar2 = FUN_00530120(acStack_51 + 1,&local_74);
  if (iVar2 == 0) {
    local_78 = (-(uint)(local_74 != 0) & 0xfffffff6) + 0x1e;
    goto LAB_0052fee6;
  }
  iVar2 = FUN_00530340(local_2c);
  if (iVar2 != 0) {
    iVar2 = FUN_00530230();
    if (iVar2 != 0) {
      local_78 = 4;
      goto LAB_0052fee6;
    }
    iVar2 = FUN_00530340(local_2c);
    if (iVar2 != 0) {
      local_78 = 4;
      goto LAB_0052fee6;
    }
  }
  if (acStack_51[local_6] == '\0') {
    iVar2 = 0;
    while (acStack_51[1] != '\x02') {
      iVar1 = iVar2 + 2;
      iVar2 = iVar2 + 1;
      acStack_51[1] = acStack_51[iVar1];
    }
    local_6 = (short)iVar2 + 1;
  }
  local_8 = 3;
  FUN_005302a0(local_2c);
  iVar2 = FUN_0052ff80(local_2c,&local_70,&local_78);
  if (iVar2 == 0) {
    if (local_78 == 0) {
      return 1;
    }
  }
  else {
    FUN_00526070(0x24,1);
    local_78 = FUN_00515090(10,local_70,local_2c,iVar2);
    if (local_78 == 0) {
      local_78 = 0;
      if (param_1 == 0) {
        *param_3 = 0;
        return 1;
      }
      do {
        do {
          iVar2 = FUN_00526620(&local_6c);
        } while (iVar2 != 0);
        switch(local_6c) {
        case 0x7532:
        case 0x7534:
        case 0x754d:
        case 0x7557:
          switch(local_6c) {
          case 0x7532:
            *param_3 = 0xfffffffe;
            return 1;
          default:
            return 1;
          case 0x7534:
            *param_3 = 0xfffffff4;
            return 1;
          case 0x754d:
            *param_3 = 0xffffffff;
            return 1;
          case 0x7557:
            *param_3 = 0xfffffff5;
            return 1;
          }
        }
      } while( true );
    }
  }
  if (local_78 == 1) {
    FUN_00515dd0();
  }
LAB_0052fee6:
  uVar3 = FUN_004e5630(local_78,local_5c,local_68,param_2);
  FUN_004e4120(uVar3);
  return 0;
}

