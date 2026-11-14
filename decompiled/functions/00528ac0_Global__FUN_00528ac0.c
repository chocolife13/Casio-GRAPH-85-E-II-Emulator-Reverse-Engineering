// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528ac0
// entry: 00528ac0  size: 294


void FUN_00528ac0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint local_24;
  int local_20;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052f8a0(param_1,local_1c);
  cVar4 = FUN_004ad2a0(6,local_1c,&local_24);
  if (cVar4 == '\0') {
    cVar4 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar4 == '\0') {
      FUN_00528870(local_10,local_c,local_8,local_4,&local_20,&param_1);
      iVar3 = param_4;
      iVar2 = param_3;
      iVar1 = param_2;
      FUN_004ad3f0(((param_2 + -1) * param_1 + param_3) * 0xc + 5,0xc,param_4);
      local_24 = (local_24 - 0x10) / 0xc;
      if ((uint)(local_20 * param_1) < local_24) {
        FUN_004ad3f0(((local_20 + -1 + iVar1) * param_1 + iVar2) * 0xc + 5,0xc,iVar3 + 0xc);
        FUN_00529a30(0);
        return;
      }
      FUN_004e5780(iVar3 + 0xc);
    }
  }
  FUN_00529a30(cVar4);
  return;
}

