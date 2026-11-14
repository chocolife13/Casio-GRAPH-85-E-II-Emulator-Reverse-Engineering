// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407ed0
// entry: 00407ed0  size: 215


void __fastcall FUN_00407ed0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_4 = param_1;
    iVar4 = FUN_00553497(*(int *)(param_1 + 0x1c),&DAT_005a8e6c);
    if (iVar4 != 0) {
      FUN_00560ccd(&local_8);
      puVar5 = (undefined4 *)FUN_00560ce0(0);
      uVar1 = *puVar5;
      iVar6 = FUN_00560ce0(0);
      uVar2 = *(undefined4 *)(iVar6 + 4);
      iVar6 = FUN_00560ce0(0);
      uVar3 = *(undefined4 *)(iVar6 + 8);
      iVar6 = FUN_00560ce0(0);
      local_8 = *(undefined4 *)(iVar6 + 0xc);
      iVar6 = FUN_00560ce0(0);
      iVar6 = *(int *)(iVar6 + 0x10);
      iVar7 = FUN_00560ce0(0);
      FUN_00553f04(iVar4,&DAT_005a8f04,*(int *)(iVar7 + 0x14) + 0x76c,iVar6 + 1,local_8,uVar3,uVar2,
                   uVar1);
      FUN_005533e9(iVar4);
      param_1 = local_4;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

