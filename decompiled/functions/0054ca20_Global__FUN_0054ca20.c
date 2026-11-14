// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ca20
// entry: 0054ca20  size: 283


void FUN_0054ca20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [20];
  
  local_18 = 1;
  local_1c = 2;
  puVar2 = (undefined4 *)FUN_004138b0();
  iVar7 = param_1 * 8;
  iVar1 = iVar7 + 8;
  if (0 < iVar1) {
    puVar4 = (undefined1 *)((int)puVar2 + 7);
    iVar6 = iVar1;
    do {
      *(undefined2 *)(puVar4 + -5) = 0;
      puVar4[-3] = 0;
      puVar4[-2] = 0x10;
      *(undefined2 *)(puVar4 + -1) = 0;
      *puVar4 = 0;
      puVar4[1] = 1;
      *(undefined2 *)(puVar4 + 2) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0x10;
      *(undefined2 *)(puVar4 + 6) = 0;
      puVar4[8] = 1;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 0x10;
    } while (iVar6 != 0);
  }
  puVar5 = puVar2 + -4;
  iVar6 = 9;
  do {
    *(undefined2 *)puVar5 = 0;
    puVar5 = puVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (8 < iVar1) {
    puVar5 = puVar2 + 0x20;
    do {
      *(undefined1 *)puVar5 = 0xc0;
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = 5;
  puVar5 = puVar2;
  do {
    iVar7 = iVar7 + -1;
    puVar5[0x20] = 0xffffffff;
    puVar5[0x21] = 0xffffffff;
    puVar5[0x22] = 0xffffffff;
    puVar5[0x23] = 0xffffffff;
    puVar5 = puVar5 + 0x20;
  } while (iVar7 != 0);
  *(undefined4 *)((int)puVar2 + 2) = 0xffffffff;
  *(undefined4 *)((int)puVar2 + 6) = 0xffffffff;
  *(undefined4 *)((int)puVar2 + 10) = 0xffffffff;
  *(undefined2 *)((int)puVar2 + 0xe) = 0xffff;
  local_14[0] = 0;
  uVar3 = FUN_00488960(local_14,0x10);
  FUN_0054d340(uVar3);
  FUN_004141c0(&local_18,&local_1c,local_14,0,0xe);
  FUN_0054cb40(param_1,param_2);
  return;
}

