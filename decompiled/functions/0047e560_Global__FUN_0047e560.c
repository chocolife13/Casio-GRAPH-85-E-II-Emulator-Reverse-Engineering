// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e560
// entry: 0047e560  size: 71


undefined4 FUN_0047e560(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00482050(0,(int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),
                       (int)*(short *)(param_2 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_0047e410(0,(int)*(short *)(param_2 + 4),0,(int)*(short *)(param_2 + 6),param_2,
                         param_3);
    return uVar2;
  }
  return 9;
}

