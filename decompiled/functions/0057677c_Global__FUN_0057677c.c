// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057677c
// entry: 0057677c  size: 115


undefined4 __thiscall FUN_0057677c(int param_1,int param_2)

{
  uint uVar1;
  uint3 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_00563a39(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  *(byte *)(param_2 + 0x23) = *(byte *)(param_2 + 0x23) | 4;
  if (DAT_005d5104 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 100);
  if ((uVar1 & 0x80) != 0) {
    return 1;
  }
  uVar4 = uVar1 & 0xff00;
  if (uVar4 != 0x1400) {
    if (uVar4 == 0x2800) {
      uVar2 = 2;
      goto LAB_005767dd;
    }
    if (uVar4 != 0x4100) {
      if (uVar4 != 0x8200) {
        return 1;
      }
      uVar2 = 8;
      goto LAB_005767dd;
    }
  }
  uVar2 = 10;
LAB_005767dd:
  *(uint *)(param_1 + 100) =
       CONCAT31((uint3)((uVar1 & 0xfffff0ff) >> 8) | uVar2,(char)(uVar1 & 0xfffff0ff)) | 0x80;
  return 1;
}

