// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567205
// entry: 00567205  size: 130


void __thiscall FUN_00567205(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = PTR_DAT_005cba44;
  }
  else {
    uVar2 = 0x40;
    if ((((param_2 < 0x41) || (uVar2 = 0x80, param_2 < 0x81)) || (uVar2 = 0x100, param_2 < 0x101))
       || (uVar2 = 0x200, param_2 < 0x201)) {
      puVar1 = (undefined4 *)FUN_005531e7();
      puVar1[2] = uVar2;
    }
    else {
      puVar1 = (undefined4 *)FUN_00566937(param_2 + 0xd);
      puVar1[2] = param_2;
    }
    *puVar1 = 1;
    *(undefined1 *)((int)puVar1 + param_2 + 0xc) = 0;
    puVar1[1] = param_2;
    *param_1 = puVar1 + 3;
  }
  return;
}

