// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004814e0
// entry: 004814e0  size: 393


int FUN_004814e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_00481d90(param_2,param_3,local_3c);
  FUN_004e5780(local_54);
  FUN_004e4120(local_54,local_54,local_30);
  iVar3 = FUN_00480600(param_1);
  iVar4 = FUN_00481670(param_1,iVar3,&local_6c);
  if (iVar4 == 0) {
    local_60 = local_6c;
    local_5c = local_68;
    local_58 = local_64;
    FUN_0052f840();
    iVar5 = FUN_004e7250(&local_6c,local_3c);
    iVar1 = 1;
    while (iVar5 == 1) {
      iVar4 = FUN_0052f820();
      if (iVar4 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      uVar6 = FUN_004e5070(iVar1,local_48,local_48);
      FUN_00481c40(param_3,uVar6);
      FUN_00481c70(&local_60,local_48,&local_6c);
      iVar4 = FUN_004e4020(&local_6c);
      if (iVar4 != 0) {
        return iVar4;
      }
      cVar2 = (char)param_1 * '\n';
      uVar6 = FUN_004e4120(&local_6c,local_54,local_18);
      iVar4 = FUN_00527b90(0xff,cVar2,iVar3,uVar6);
      if ((iVar4 != 0) || (iVar4 = FUN_00527b90(0xff,cVar2 + '\x01',iVar3,local_30), iVar4 != 0)) {
        return 4;
      }
      iVar5 = FUN_004e7250(&local_6c,local_3c);
      iVar4 = 0;
      iVar1 = iVar1 + 1;
    }
  }
  return iVar4;
}

