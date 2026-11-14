// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044f270
// entry: 0044f270  size: 360


void FUN_0044f270(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_64 [48];
  undefined1 local_34 [52];
  
  FUN_0044e860(param_2);
  FUN_00523740();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xf0,local_64);
  FUN_00523470(local_64,0x15);
  if (param_2[1] == 0) {
    uVar3 = 2;
    do {
      FUN_005232d0(1,uVar3);
      FUN_00523470(&DAT_005ad48c,0x15);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
    FUN_005232d0(1,4);
    FUN_0052f6f0(0xf1,local_64);
    FUN_00523470(local_64,0x15);
    return;
  }
  iVar4 = param_2[2];
  uVar3 = 1;
  do {
    if (uVar3 == 1) {
      if (param_1 == 0) {
        if (param_2[2] != *param_2) {
LAB_0044f377:
          uVar2 = 1;
          goto LAB_0044f329;
        }
      }
      else if ((param_1 == 1) && (param_2[2] != param_2[3])) goto LAB_0044f377;
LAB_0044f327:
      uVar2 = 0;
    }
    else {
      if (((uVar3 != 6) || (iVar4 == 0)) || (*(int *)(iVar4 + 0x1c) == 0)) goto LAB_0044f327;
      uVar2 = 2;
    }
LAB_0044f329:
    uVar1 = uVar3 + 1;
    FUN_005232d0(1,uVar1);
    if (iVar4 == param_2[1]) {
      uVar2 = FUN_0044f3e0(local_34,iVar4,uVar2,0x15);
      FUN_00523490(uVar2);
      *param_3 = uVar3;
LAB_0044f3c2:
      iVar4 = *(int *)(iVar4 + 0x1c);
    }
    else {
      if (iVar4 != 0) {
        uVar2 = FUN_0044f3e0(local_34,iVar4,uVar2,0x15);
        FUN_00523470(uVar2);
        goto LAB_0044f3c2;
      }
      FUN_00523470(&DAT_005ad48c);
    }
    uVar3 = uVar1;
    if (6 < uVar1) {
      return;
    }
  } while( true );
}

