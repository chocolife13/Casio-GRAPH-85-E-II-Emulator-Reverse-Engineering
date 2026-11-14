// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577d12
// entry: 00577d12  size: 182


void __thiscall FUN_00577d12(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)FUN_00577dc8(local_14);
  local_c = *puVar2;
  local_8 = puVar2[1];
  iVar4 = param_2 * 0x28;
  (**(code **)(param_1[0x1e] + 0x70))(0xc,0,0,param_1[0x24] + 0x10 + iVar4);
  piVar1 = (int *)(param_1[0x24] + 0x10 + iVar4);
  iVar3 = MulDiv(*piVar1,DAT_005d50c0,param_1[0x41]);
  *piVar1 = iVar3;
  iVar3 = MulDiv(piVar1[1],DAT_005d50c4,param_1[0x42]);
  piVar1[1] = iVar3;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x108))(local_14,local_c,local_8,*piVar1,piVar1[1])
  ;
  iVar3 = param_1[0x24];
  *(undefined4 *)(iVar3 + 0x20 + iVar4) = *puVar2;
  *(undefined4 *)(iVar3 + 0x24 + iVar4) = puVar2[1];
  FUN_00577e4c(param_2);
  return;
}

