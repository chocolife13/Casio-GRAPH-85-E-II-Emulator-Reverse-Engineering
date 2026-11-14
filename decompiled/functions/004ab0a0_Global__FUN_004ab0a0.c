// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab0a0
// entry: 004ab0a0  size: 65


undefined4 * FUN_004ab0a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_2;
  if (param_1 == 0) {
    *param_2 = DAT_005d6e50;
  }
  else {
    *param_2 = DAT_005d6e4c;
  }
  uVar2 = FUN_004aaf60(param_1,*param_2);
  FUN_00414880(*puVar1,uVar2,0,&param_2);
  return param_2;
}

