// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047f720
// entry: 0047f720  size: 421


int FUN_0047f720(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = param_3;
  iVar3 = FUN_004820a0(0xff,param_1 * 10,param_1 * 10 + 1,0);
  if (iVar3 == 0) {
    return 9;
  }
  local_40 = iVar3;
  FUN_0052f840();
  iVar4 = FUN_00530e20(local_c,local_30);
  if (iVar4 != 0) {
    return 4;
  }
  uVar5 = FUN_004e57c0(local_3c,local_24);
  FUN_004e6dd0(local_30,uVar5);
  iVar4 = 1;
  bVar1 = false;
  if (0 < iVar3) {
    do {
      iVar3 = FUN_0052f820();
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = FUN_00481670(param_1,iVar4,local_3c);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_004816a0(param_1,iVar4,local_18);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_004e6a00(local_24,local_3c,local_3c);
      iVar3 = FUN_0047e0b0(local_3c,&local_4c,iVar2);
      if ((iVar3 == 0) && (iVar3 = FUN_0047e100(local_18,&local_48,iVar2), iVar3 == 0)) {
        FUN_005146d0(local_4c,local_48,0,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
        if (bVar1) {
          FUN_0050f940(param_3,local_44,local_4c,local_48,iVar2,2,*(undefined1 *)(iVar2 + 0x8e2));
        }
        else {
          bVar1 = true;
        }
        param_3 = local_4c;
        local_44 = local_48;
      }
      else {
        bVar1 = false;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_40);
  }
  return 0;
}

