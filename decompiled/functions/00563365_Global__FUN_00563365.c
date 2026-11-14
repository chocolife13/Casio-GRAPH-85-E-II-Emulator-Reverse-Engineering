// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563365
// entry: 00563365  size: 53


int FUN_00563365(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_005762a6(&LAB_0057431a);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}

