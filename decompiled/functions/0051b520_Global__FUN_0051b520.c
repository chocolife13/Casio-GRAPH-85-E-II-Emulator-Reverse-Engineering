// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b520
// entry: 0051b520  size: 616


undefined4 FUN_0051b520(int param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  bVar1 = *(byte *)(param_1 + 0x8e0);
  *(byte *)(param_1 + 0x8e0) = bVar1 & 0xfc;
  uVar2 = (bVar1 & 0x30) >> 4;
  if (uVar2 == 0) {
    FUN_00514940(param_1,1);
    iVar3 = FUN_00514820(param_1);
joined_r0x0051b745:
    if (iVar3 != 0) goto LAB_0051b767;
    FUN_0050ae10(param_1,0);
    iVar3 = FUN_00510270(param_1);
  }
  else if (uVar2 == 1) {
    if (param_2 == '\0') {
      FUN_00514940(param_1,1);
      iVar3 = FUN_00514820(param_1);
      if (iVar3 != 0) goto LAB_0051b767;
      *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x40;
      FUN_00514940(param_1,0);
      iVar3 = FUN_00514820(param_1);
      *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) & 0xbf;
      if (iVar3 != 0) goto LAB_0051b767;
      FUN_0050ae10(param_1,0);
      FUN_00514940(param_1,1);
      FUN_00505f10(param_1,0x80);
      iVar3 = FUN_00510270(param_1);
      if (iVar3 == 0) {
        FUN_00514940(param_1,0);
        FUN_00505f10(param_1,0x40);
        *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xfc;
        *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x40;
        iVar3 = FUN_00510270(param_1);
        *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) & 0xbf;
        FUN_00514940(param_1,1);
        FUN_00505f10(param_1,0x80);
      }
    }
    else {
      if (param_2 == '\x01') {
        FUN_00514940(param_1,1);
        iVar3 = FUN_00514820(param_1);
        goto joined_r0x0051b745;
      }
      if (param_2 == '\x02') {
        FUN_00514940(param_1,0);
        *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x40;
        iVar3 = FUN_00514820(param_1);
        if (iVar3 != 0) {
          *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) & 0xbf;
          goto LAB_0051b767;
        }
        FUN_0050ae10(param_1,0);
        iVar3 = FUN_00517ea0(&local_10);
        if (iVar3 == 0) {
          FUN_0050fc10(local_8,local_4,local_10,local_c);
        }
        FUN_00505f10(param_1,0x40);
        iVar3 = FUN_00510270(param_1);
        *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) & 0xbf;
        FUN_00505f10(param_1,0x80);
        FUN_00514940(param_1,1);
      }
    }
  }
  else {
    FUN_00514940(param_1,1);
    iVar3 = FUN_00514820(param_1);
    if (iVar3 != 0) goto LAB_0051b767;
    FUN_0050aed0(param_1);
    iVar3 = FUN_00510270(param_1);
  }
  FUN_0050acb0(param_1);
  if (iVar3 == 0) {
    return 0;
  }
LAB_0051b767:
  FUN_00515dd0();
  FUN_0052b240(iVar3);
  return 0xfffffff5;
}

