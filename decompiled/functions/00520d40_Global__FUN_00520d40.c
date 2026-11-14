// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00520d40
// entry: 00520d40  size: 309


undefined4 FUN_00520d40(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_4 * 0x20 + 0xd + *(int *)(param_3 + 0x8dc)) & 4) != 0) {
    return 0xffffffff;
  }
  FUN_0051ae90(0,*(int *)(param_3 + 0x8dc),param_4,&local_18);
  FUN_0051ae90(1,*(undefined4 *)(param_3 + 0x8dc),param_4,&local_c);
  iVar2 = FUN_004e7290(param_2,&local_c);
  if (iVar2 == 0) {
    iVar2 = FUN_004e7250(param_2,&local_18);
    if (iVar2 == 0) goto LAB_00520ddd;
    *param_2 = local_18;
    param_2[1] = local_14;
    local_4 = local_10;
  }
  else {
    *param_2 = local_c;
    param_2[1] = local_8;
  }
  param_2[2] = local_4;
LAB_00520ddd:
  puVar1 = (undefined4 *)(param_3 + 0x800);
  FUN_004d5130(param_2,param_1,puVar1,*(undefined1 *)(param_3 + 0x8e2));
  if ((*param_1 == 1) || (*param_1 == ((byte)~*(byte *)(param_3 + 0x8e2) | 0x7e) >> 1)) {
    iVar2 = FUN_004e7250(param_2,puVar1);
    if (iVar2 != 0) {
      *param_2 = *puVar1;
      param_2[1] = *(undefined4 *)(param_3 + 0x804);
      param_2[2] = *(undefined4 *)(param_3 + 0x808);
      return 0;
    }
    iVar2 = FUN_004e7290(param_2,param_3 + 0x80c);
    if (iVar2 != 0) {
      FUN_004d4da0(param_2,*param_1,puVar1,*(undefined1 *)(param_3 + 0x8e2));
    }
  }
  return 0;
}

