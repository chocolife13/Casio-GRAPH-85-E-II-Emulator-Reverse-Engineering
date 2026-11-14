// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046ea30
// entry: 0046ea30  size: 141


undefined4 FUN_0046ea30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_c [12];
  
  iVar1 = FUN_0047ca80(0);
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      FUN_0047cac0(0,iVar3,local_c);
      iVar2 = FUN_004e4020(local_c);
      if (iVar2 != 0) {
        FUN_0047cc00(0);
        FUN_0052b240(3);
        return 3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  uVar4 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00527e80(0,0,0,param_1);
    if (iVar1 != 0) {
      uVar4 = 4;
    }
  }
  FUN_0052b240(uVar4);
  return uVar4;
}

