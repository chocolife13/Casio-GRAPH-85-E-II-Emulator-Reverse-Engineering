// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546ee0
// entry: 00546ee0  size: 436


undefined4 FUN_00546ee0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  uint local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined2 local_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  
  iVar6 = param_3;
  iVar1 = param_2;
  iVar4 = FUN_00486470(param_2,param_3);
  iVar2 = param_4;
  if (iVar4 == 0) {
    return 0x17;
  }
  puVar5 = (undefined4 *)FUN_00486410(param_1,iVar1,param_4,&local_10,&param_2);
  if (puVar5 != (undefined4 *)0x0) {
    if (iVar2 == 0) {
      param_3 = 0x10;
      local_c = sStack_e;
    }
    else if (iVar2 == 1) {
      param_3 = ((int)local_c + (int)sStack_e) * 4 + 0x10;
      local_c = sStack_a;
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      param_3 = sStack_e * 4 + 0x10;
    }
    if ((iVar1 <= local_c) && (iVar6 < 0x1b)) {
      FUN_004ad550(local_14,local_18,&local_1c);
      iVar2 = param_3;
      if (local_1c < (uint)(iVar6 * 4)) {
        return 4;
      }
      if (0x1a < local_c + iVar6) {
        return 0x21;
      }
      cVar3 = FUN_004abeb0(iVar6 * 4,&DAT_005cd010,param_3 + -4 + iVar1 * 4);
      if (cVar3 != '\0') {
        return 4;
      }
      local_10 = (undefined2)*puVar5;
      sStack_e = (short)((uint)*puVar5 >> 0x10);
      local_c = (short)puVar5[1];
      sStack_a = (short)((uint)puVar5[1] >> 0x10);
      sVar7 = (short)iVar6;
      if (param_4 == 0) {
        sStack_e = sStack_e + sVar7;
      }
      else if (param_4 == 2) {
        local_c = local_c + sVar7;
      }
      else if (param_4 == 1) {
        sStack_a = sStack_a + sVar7;
      }
      *puVar5 = CONCAT22(sStack_e,local_10);
      puVar5[1] = CONCAT22(sStack_a,local_c);
      puVar5[2] = puVar5[2];
      puVar5[3] = puVar5[3];
      iVar6 = iVar1 + -1 + iVar6;
      if (iVar1 <= iVar6) {
        iVar6 = (iVar6 - iVar1) + 1;
        puVar5 = (undefined4 *)(iVar2 + iVar1 * 4 + -4 + (int)puVar5);
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return 0;
}

