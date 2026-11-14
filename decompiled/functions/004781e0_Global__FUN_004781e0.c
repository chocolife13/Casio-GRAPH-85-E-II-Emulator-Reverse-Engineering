// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004781e0
// entry: 004781e0  size: 82


void FUN_004781e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_3;
  FUN_004b6ef0(param_3,param_1);
  iVar1 = param_2;
  if (param_2 == 0) {
    FUN_004b6e70(uVar2,&DAT_005a91bc);
    return;
  }
  FUN_004b6e70(uVar2,&DAT_005bf314);
  uVar3 = FUN_0055c2fe(iVar1,&param_1,10);
  FUN_004b6e70(uVar2,uVar3);
  return;
}

