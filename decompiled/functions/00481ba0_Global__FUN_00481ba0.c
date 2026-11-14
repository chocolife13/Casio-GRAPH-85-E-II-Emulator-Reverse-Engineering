// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481ba0
// entry: 00481ba0  size: 49


undefined4 FUN_00481ba0(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*param_1;
  if ((8 < iVar2) && (iVar2 < 0x13)) {
    uVar1 = FUN_00481880(3,0,iVar2,(int)param_1[3],(int)param_1[4],(int)param_1[5]);
    return uVar1;
  }
  return 0;
}

