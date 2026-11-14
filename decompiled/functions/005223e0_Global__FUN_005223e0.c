// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005223e0
// entry: 005223e0  size: 286


undefined4 FUN_005223e0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  iVar2 = param_2;
  iVar6 = FUN_0051e780(param_2);
  iVar3 = param_3;
  if (iVar6 == 0) {
    if (iVar2 == 0x7545) {
      iVar6 = *param_1 + -7;
    }
    else {
      iVar6 = *param_1 + 7;
    }
    *param_1 = iVar6;
    FUN_00514940(param_3,1);
    FUN_0051d660(iVar2,iVar3);
    bVar4 = FUN_00514ea0();
    bVar5 = FUN_00514f00();
    bVar1 = *(byte *)(iVar3 + 0x8e2);
    *(byte *)(iVar3 + 0x8e2) = bVar1 | 0x10;
    if (iVar2 == 0x7545) {
      *(byte *)(iVar3 + 0x8e2) = bVar1 | 0x18;
    }
    param_2 = FUN_004d8470(iVar3 + 0x800,bVar4 | bVar5,iVar3,*(undefined1 *)(iVar3 + 0x8e2));
    if (param_2 == 0) {
      FUN_0050ae10(iVar3,*(undefined1 *)(iVar3 + 0x8e2));
      *(byte *)(iVar3 + 0x8e0) = *(byte *)(iVar3 + 0x8e0) & 0xfc;
      param_2 = FUN_00510270(iVar3);
      FUN_0050acb0(iVar3);
    }
    bVar1 = *(byte *)(iVar3 + 0x8e2);
    *(byte *)(iVar3 + 0x8e2) = bVar1 ^ 0x10;
    if (iVar2 == 0x7545) {
      *(byte *)(iVar3 + 0x8e2) = bVar1 ^ 0x18;
    }
    if (param_2 != 0) {
      FUN_0052b240(param_2);
      FUN_00515dd0();
      return 0xfffffff5;
    }
    FUN_00513550(iVar3,&param_2);
  }
  return 0;
}

