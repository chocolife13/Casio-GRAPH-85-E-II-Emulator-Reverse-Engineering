// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437d40
// entry: 00437d40  size: 317


undefined4
FUN_00437d40(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  uVar2 = 0;
  iVar4 = 1;
  if (0 < *(int *)(param_1 + 0x18)) {
    while( true ) {
      FUN_00528ac0(*param_1,param_4,iVar4,local_30);
      if (param_2 == 0xc) {
        cVar1 = FUN_00526090(0x2a);
        FUN_004e0c40(local_30,param_3,local_30,(int)cVar1);
        param_5 = param_4;
      }
      else if (param_2 == 0xd) {
        FUN_00528ac0(*param_1,param_5,iVar4,local_18);
        cVar1 = FUN_00526090(0x2a);
        FUN_004e0c40(local_30,param_3,local_30,(int)cVar1);
        cVar1 = FUN_00526090(0x2a);
        FUN_004e0740(local_30,local_18,local_30,(int)cVar1);
      }
      else if (param_2 == 0xe) {
        FUN_00528ac0(*param_1,param_5,iVar4,local_18);
        cVar1 = FUN_00526090(0x2a);
        FUN_004e0740(local_30,local_18,local_30,(int)cVar1);
      }
      FUN_004e3e70(local_30,local_30);
      iVar3 = FUN_00528bf0(*param_1,param_5,iVar4,local_30);
      if (iVar3 != 0) break;
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x18) < iVar4) {
        return 0;
      }
    }
    uVar2 = 4;
  }
  return uVar2;
}

