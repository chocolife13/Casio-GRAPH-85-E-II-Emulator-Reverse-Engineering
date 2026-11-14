// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057301c
// entry: 0057301c  size: 52


int __thiscall FUN_0057301c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
LAB_00573049:
    iVar3 = 0;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x70);
    do {
      if (puVar4 == (undefined4 *)0x0) goto LAB_00573049;
      puVar1 = (undefined4 *)*puVar4;
      iVar3 = puVar4[2];
      uVar2 = GetDlgCtrlID(*(HWND *)(iVar3 + 0x1c));
      puVar4 = puVar1;
    } while ((uVar2 & 0xffff) != param_2);
  }
  return iVar3;
}

