// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a51c0
// entry: 004a51c0  size: 216


void FUN_004a51c0(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0x14d,local_34);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,2);
  FUN_00523470(&DAT_005853a4,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(&DAT_005853a4,0x15);
  FUN_005232d0(1,4);
  uVar2 = FUN_0052f6f0(0x19d,local_34);
  FUN_005233e0(uVar2);
  FUN_005232d0(0xe,4);
  cVar1 = FUN_004ab110();
  if (cVar1 == '\x06') {
    pcVar3 = s__6_Min__005c02a0;
  }
  else {
    pcVar3 = s__60_Min__005c02d0;
  }
  FUN_005233e0(pcVar3);
  FUN_005232d0(1,5);
  FUN_00523470(&DAT_005853a4,0x15);
  FUN_005232d0(1,6);
  FUN_00523470(&DAT_005853a4,0x15);
  FUN_005232d0(1,7);
  FUN_00523470(&DAT_005853a4,0x15);
  return;
}

