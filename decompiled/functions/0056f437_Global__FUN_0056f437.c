// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f437
// entry: 0056f437  size: 101


void __thiscall FUN_0056f437(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == (int *)0x0) {
    if (DAT_005d4e38 != (int *)0x0) {
      puVar2 = (undefined4 *)DAT_005d4e38[1];
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        (**(code **)(*param_1 + 0xc))(puVar2[2]);
        puVar2 = puVar1;
      }
      if (DAT_005d4e38 != (int *)0x0) {
        (**(code **)(*DAT_005d4e38 + 4))(1);
      }
      DAT_005d4e38 = (int *)0x0;
    }
    DAT_005cb964 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x50))();
    CPtrList::AddTail((CPtrList *)(param_1 + 1),param_2);
  }
  return;
}

