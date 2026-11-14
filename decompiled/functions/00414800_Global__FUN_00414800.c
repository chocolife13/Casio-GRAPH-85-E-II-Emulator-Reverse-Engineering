// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414800
// entry: 00414800  size: 118


undefined4 FUN_00414800(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [3];
  short local_8;
  short local_6;
  undefined4 local_4;
  
  puVar3 = DAT_005d6e24;
  if (((param_3 == 0) || (puVar3 = DAT_005d6e20, param_3 == 1)) && (DAT_005d6e50 != -1)) {
    puVar4 = local_14;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if ((local_8 <= param_1) && (param_1 <= local_6)) {
      FUN_00414760(local_4);
      uVar1 = (*DAT_005cdba0)(param_1);
      *param_2 = uVar1;
      return 1;
    }
  }
  return 0;
}

