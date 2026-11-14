// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00427f30
// entry: 00427f30  size: 381


int FUN_00427f30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3;
  FUN_004b6ef0(param_3,&DAT_005cd010);
  FUN_004b6ef0(iVar1 + 0xd,&DAT_005abcf8);
  *(undefined2 *)(iVar1 + 0x28) = 10;
  uVar3 = FUN_004b6ca0(s_LIST_ANS_005be388);
  iVar4 = FUN_004b79b0(param_1,s_LIST_ANS_005be388,uVar3);
  if (iVar4 == 0) {
    FUN_0052fbc0(0,0,iVar1 + 0x16);
    iVar4 = FUN_004271f0(iVar1,&param_3,param_4);
    if (iVar4 == 0) {
      uVar2 = FUN_004ab990(param_3);
      *(undefined1 *)(iVar1 + 0x1f) = uVar2;
      return 0;
    }
  }
  else {
    uVar3 = FUN_004b6ca0(s_LIST_005be038);
    iVar4 = FUN_004b79b0(param_1,s_LIST_005be038,uVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_004b6ca0(s_LIST_005be038);
      uVar3 = FUN_0055401d(iVar4 + param_1);
      FUN_0052fbc0(0,uVar3,iVar1 + 0x16);
      iVar4 = FUN_004271f0(iVar1,&param_3,param_4);
      if (iVar4 == 0) {
        uVar2 = FUN_004ab990(param_3);
        *(undefined1 *)(iVar1 + 0x1f) = uVar2;
        return 0;
      }
    }
    else {
      uVar3 = FUN_004b6ca0(s_LISTFILE_005be394);
      iVar4 = FUN_004b79b0(param_1,s_LISTFILE_005be394,uVar3);
      if (iVar4 == 0) {
        iVar4 = FUN_004b6ca0(s_LISTFILE_005be394);
        uVar3 = FUN_0055401d(iVar4 + param_1);
        iVar4 = param_4;
        for (param_2 = param_2 + 1; param_2 < 0x1b; param_2 = param_2 + 1) {
          FUN_0052fbc0(uVar3,param_2,iVar1 + 0x16);
          iVar5 = FUN_004271f0(iVar1,&param_3,iVar4);
          if (iVar5 == 0) {
            uVar2 = FUN_004ab990(param_3);
            *(undefined1 *)(iVar1 + 0x1f) = uVar2;
            if (iVar4 == 0) {
              return param_2;
            }
          }
        }
      }
    }
  }
  return -1;
}

