// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c0b1
// entry: 0056c0b1  size: 120


int FUN_0056c0b1(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  CHAR local_104 [256];
  
  iVar1 = FUN_00567872(param_1,local_104,0x100);
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_00555bcc(local_104,10);
    if (puVar2 != (undefined1 *)0x0) {
      iVar1 = FUN_0055401d(puVar2 + 1);
      *param_2 = iVar1;
      iVar1 = MulDiv(iVar1,DAT_005d50c4,0x48);
      *param_2 = iVar1;
      *puVar2 = 0;
    }
    lstrcpynA((LPSTR)(param_2 + 7),local_104,0x20);
    iVar1 = 1;
  }
  return iVar1;
}

