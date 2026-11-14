// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562d47
// entry: 00562d47  size: 86


undefined4 FUN_00562d47(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  iVar1 = FUN_0057497f();
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_00552b70();
    if ((piVar3 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar3 + 0xc))(0xe146,0,0,local_c), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_0057497f();
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0xc))(0xe146,0,0,local_c);
  }
  return uVar2;
}

