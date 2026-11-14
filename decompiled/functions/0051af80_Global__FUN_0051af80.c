// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051af80
// entry: 0051af80  size: 363


undefined4 FUN_0051af80(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 local_30 [48];
  
  FUN_00538710();
  if ((param_2[0x8e2] & 0x80) != 0) {
    return 0xfffffffa;
  }
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar2 = FUN_0052f6f0((param_1 != 0x7634) + '\x04',local_30);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,3);
  uVar2 = FUN_0052f6f0(0x12,local_30);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,4);
  uVar2 = FUN_0052f6f0(0x13,local_30);
  FUN_005233e0(uVar2);
  FUN_005232d0(3,5);
  FUN_005233e0(s_Pict_1_20___005c32b8);
  local_30[0] = 0;
  while( true ) {
    do {
      do {
        iVar3 = FUN_00523ca0(local_30,0x11,5);
      } while (iVar3 < -2);
      if (iVar3 < 0) {
        FUN_00523800(5);
        return 0;
      }
    } while (iVar3 != 0);
    iVar3 = FUN_0055401d(local_30);
    if ((iVar3 < 0x15) && (0 < iVar3)) break;
    FUN_0052b240(8);
  }
  FUN_00523800(5);
  if (param_1 != 0x7634) {
    pbVar4 = (byte *)FUN_00516710(iVar3);
    if (pbVar4 == (byte *)0x0) {
      return 0;
    }
    iVar3 = 0x800;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_2 = *param_2 | bVar1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 0;
  }
  iVar3 = FUN_00516620(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0052b240(4);
  return 0xfffffffa;
}

