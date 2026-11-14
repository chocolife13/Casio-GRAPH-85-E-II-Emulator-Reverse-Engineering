// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043e370
// entry: 0043e370  size: 188


void FUN_0043e370(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_3c [4];
  char acStack_38 [4];
  undefined1 local_34 [52];
  
  if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_0043e640((int)*(short *)(param_1 + 0x20),local_34);
  }
  else {
    FUN_0052f6f0(0xac,local_34);
  }
  FUN_005232d0(1,1);
  FUN_00523470(local_34,0x15);
  FUN_0052f6f0(0xad,local_34);
  FUN_004b6e70(local_34,s__A___005beb14);
  cVar1 = *(char *)(param_2 + 0x26);
  iVar3 = FUN_004b6ca0(local_34);
  sVar2 = *(short *)(param_2 + 0x24);
  acStack_38[iVar3] = cVar1 + '@';
  uVar4 = FUN_0043ed70((int)sVar2,local_3c);
  FUN_004b6e70(local_34,uVar4);
  FUN_005232d0(1,2);
  FUN_00523470(local_34,0x15);
  return;
}

