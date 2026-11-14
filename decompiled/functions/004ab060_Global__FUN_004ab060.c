// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab060
// entry: 004ab060  size: 55


undefined1 * FUN_004ab060(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = FUN_004aaf60(param_1,param_2);
  if ((iVar2 != 0) && (FUN_00414880(puVar1,iVar2,0,&param_2), param_2 != (undefined1 *)0x0)) {
    return param_2;
  }
  return &DAT_005cd010;
}

