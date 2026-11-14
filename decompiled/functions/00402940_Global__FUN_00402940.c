// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402940
// entry: 00402940  size: 218


void FUN_00402940(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_3;
  iVar2 = FUN_00402150(param_1,param_2,param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_00402330(param_1,param_2,uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_004300c0(param_1,param_2,uVar1);
      if (iVar2 == 0) {
        if (((DAT_005d9564 <= param_1) && (param_1 < DAT_005d9564 + 7)) ||
           ((DAT_005d9568 <= param_1 && (param_1 < DAT_005d9568 + 7)))) {
          param_3 = param_2;
          FUN_00401e20(&param_3);
          *param_1 = (ushort)param_3 | (ushort)(byte)*param_1;
          return;
        }
        if (((DAT_005d8d40 <= param_1) && (param_1 < DAT_005d8d40 + 6)) ||
           ((DAT_005d9560 <= param_1 && (param_1 < DAT_005d9560 + 6)))) {
          param_3 = param_2;
          FUN_00401e20(&param_3);
          *param_1 = (ushort)param_3 | (ushort)(byte)*param_1;
          return;
        }
        *(byte *)param_1 = (byte)param_2;
      }
    }
  }
  return;
}

