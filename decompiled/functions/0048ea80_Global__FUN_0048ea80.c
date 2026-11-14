// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ea80
// entry: 0048ea80  size: 385


void FUN_0048ea80(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1cc;
  undefined1 local_1cb;
  undefined1 local_1ca;
  undefined1 local_1c9;
  undefined1 local_1c8;
  undefined1 local_198 [12];
  undefined1 local_18c [4];
  undefined1 local_188 [24];
  undefined1 local_170 [52];
  undefined1 local_13c [12];
  undefined1 local_130 [52];
  undefined1 local_fc [12];
  undefined1 local_f0 [240];
  
  FUN_004ab670(local_13c);
  FUN_004ad350(s__FINANCE_005be230,"fina_mem",local_18c);
  FUN_004ad3f0(0,0xfc,local_fc);
  FUN_004e5780(local_198);
  iVar2 = 1;
  iVar3 = 1;
  do {
    if (iVar3 == 1) {
      FUN_0052f6f0(0x12a,local_170);
    }
    else if (iVar3 == 2) {
      FUN_004e4120(local_fc,local_198,local_188);
      local_1cc = 0x6e;
      local_1cb = 0x20;
      local_1ca = 0x20;
      local_1c9 = 0x3d;
      local_1c8 = 0;
      FUN_004b6ef0(local_170,&local_1cc);
      uVar1 = FUN_004b5030(local_188,local_130);
      FUN_004b6e70(local_170,uVar1);
    }
    else if (iVar3 == 3) {
      FUN_004e4120(local_f0,local_198,local_188);
      local_1cc = 0x49;
      local_1cb = 0x25;
      local_1ca = 0x20;
      local_1c9 = 0x3d;
      local_1c8 = 0;
      FUN_004b6ef0(local_170,&local_1cc);
      uVar1 = FUN_004b5030(local_188,local_130);
      FUN_004b6e70(local_170,uVar1);
    }
    else {
      local_1cc = 0;
      FUN_004b6ef0(local_170,&local_1cc);
    }
    FUN_00495150(iVar2,param_1,local_170);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((ushort)iVar2 < 8);
  return;
}

