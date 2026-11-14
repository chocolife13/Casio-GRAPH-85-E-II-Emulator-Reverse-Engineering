// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414790
// entry: 00414790  size: 69


char * FUN_00414790(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (iVar1 = FUN_00414780(), param_1 < iVar1)) {
    switch(param_1) {
    case 0:
      return s_PowerUSB_005b6918;
    case 1:
      return s_PowerUSB_005abd18;
    case 2:
      return s_PowerUSB_005b3030;
    case 3:
      return s_PowerUSB_005af708;
    case 4:
      return s_PowerUSB_005b9cc8;
    }
  }
  return (char *)0x0;
}

