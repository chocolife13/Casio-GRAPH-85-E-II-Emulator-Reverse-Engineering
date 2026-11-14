// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7560
// entry: 004f7560  size: 435


undefined4 FUN_004f7560(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  pcVar2 = param_2;
  uVar4 = param_1;
  FUN_004fe330(param_2,param_1);
  cVar1 = pcVar2[1];
  if (cVar1 == '\x18') {
    FUN_004f7470(param_4,0);
    thunk_FUN_0040add0();
  }
  else {
    if (cVar1 == '\x1a') {
      iVar3 = FUN_004f9d60(pcVar2);
      if (iVar3 != 0) {
        FUN_004fe3e0(pcVar2,uVar4);
        iVar3 = FUN_004f56b0(uVar4,pcVar2,param_3,&param_1,0x1a);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_00528480(0,param_1);
        FUN_004f3c40(1);
        return 1;
      }
      if (*pcVar2 == -0x40) {
        FUN_00528480(0,0);
        FUN_004fe330(pcVar2,uVar4);
        FUN_004f3c40(1);
        return 1;
      }
      iVar3 = FUN_004f9b40(pcVar2);
      if (iVar3 != 0) {
        bVar5 = 0;
        param_3 = param_3 & 0xffffff00;
        do {
          FUN_00528480(0,param_3);
          bVar5 = bVar5 + 1;
          param_3 = CONCAT31(param_3._1_3_,bVar5);
        } while (bVar5 < 0x1b);
        FUN_004f3c40(1);
        return 1;
      }
      uVar4 = FUN_004f58f0(2,param_3);
      return uVar4;
    }
    if (cVar1 == '\x1e') {
      iVar3 = FUN_004f9960(pcVar2);
      if (iVar3 != 0) {
        FUN_00529950(*pcVar2 + -0x40);
        FUN_004fe330(pcVar2,uVar4);
        return 1;
      }
      if (*pcVar2 == -0x40) {
        FUN_00529950(0);
        FUN_004fe330(pcVar2,uVar4);
        return 1;
      }
      iVar3 = FUN_004f9b40(pcVar2);
      if (iVar3 != 0) {
        bVar5 = 0;
        param_3 = param_3 & 0xffffff00;
        do {
          FUN_00529950(param_3);
          bVar5 = bVar5 + 1;
          param_3 = CONCAT31(param_3._1_3_,bVar5);
        } while (bVar5 < 0x1b);
        return 1;
      }
      uVar4 = FUN_004f58f0(2,param_3);
      return uVar4;
    }
  }
  return 1;
}

