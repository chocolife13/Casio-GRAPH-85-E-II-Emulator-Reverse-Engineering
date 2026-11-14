// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a4610
// entry: 004a4610  size: 660


void FUN_004a4610(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_214;
  undefined2 local_212;
  undefined2 local_210;
  undefined4 local_20c [131];
  
  local_218 = 0x66;
  puVar4 = local_20c;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_216 = 0x6c;
  local_214 = 0x73;
  local_212 = 0x30;
  local_210 = 0;
  *(undefined2 *)puVar4 = 0;
  iVar3 = FUN_004ab180();
  if ((iVar3 == 0) || (iVar3 = FUN_004a2200(0x2aa,0x2ab,0x296,0x297), iVar3 == 0x31)) {
    FUN_0042aac0(&local_218,&DAT_005be7ec,4);
    iVar3 = 2;
  }
  else {
    if (iVar3 != 0x32) {
      return;
    }
    FUN_0042aac0(&local_218,&PTR_DAT_005bff00,4);
    iVar3 = 3;
  }
  iVar1 = FUN_0049d080(&local_218,local_20c);
  if (iVar1 != -1) {
    iVar1 = FUN_0042a410(local_20c,s_BACKUP_005c0258,0xc);
    FUN_0042aac0((int)local_20c + iVar1 * 2);
    iVar1 = FUN_0042a410(local_20c,&DAT_005be754,0xc);
    FUN_0042aac0((int)local_20c + iVar1 * 2);
    iVar1 = FUN_004299c0(local_20c);
    if (iVar1 == 2) {
      FUN_004aacd0(0);
    }
    iVar1 = FUN_00429b00(local_20c,1,0);
    if (iVar1 < 0) {
      FUN_00429be0(iVar1);
      if (iVar1 != -0x10) {
        if (iVar1 == -5) {
          FUN_0049c820(0xfffffffb);
          return;
        }
        if (iVar1 != -1) {
          return;
        }
      }
      FUN_004a20c0(0x1e4,0x1e5,0x1e6,1);
      return;
    }
    FUN_00429be0(iVar1);
    iVar1 = FUN_004a2500(0x202,0);
    if (iVar1 == 0x7539) {
      uVar2 = FUN_00422260(local_20c,0);
      switch(uVar2) {
      case 0:
        FUN_004a20c0(0x172,0x173,0x174,1);
        return;
      case 0xffffffd5:
        FUN_0052b240(0x2b);
        return;
      case 0xffffffd6:
        FUN_004a20c0(0x2d2,0x2d3,0x2d4,1);
        return;
      case 0xffffffd7:
      case 0xffffffdf:
      case 0xffffffe1:
      case 0xffffffe8:
      case 0xffffffe9:
      case 0xffffffef:
      case 0xfffffff2:
      case 0xfffffff8:
      case 0xfffffffb:
      case 0xfffffffd:
        FUN_0049c820(uVar2);
        return;
      case 0xffffffde:
        FUN_004a20c0(0x2a4,0x2a5,0x2a6,1);
        return;
      case 0xfffffffc:
        FUN_0052b240(0xd);
        return;
      }
      if (iVar3 == 3) {
        FUN_0052b240(0x25);
        return;
      }
      FUN_0052b240(4);
    }
  }
  return;
}

