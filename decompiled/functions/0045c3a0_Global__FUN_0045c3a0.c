// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045c3a0
// entry: 0045c3a0  size: 1326


int FUN_0045c3a0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar2 = param_4;
  FUN_004e5780(&local_30);
  iVar3 = FUN_0047ccf0(param_4,param_2,param_3);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar6 = (param_3 + -1) * (param_2 + -1) + 1;
  iVar3 = FUN_0047cac0(param_1,1,local_c);
  if (iVar3 == 0) {
    param_4 = 0;
    if (0 < param_2) {
      do {
        iVar4 = 0;
        if (0 < param_3) {
          do {
            iVar4 = iVar4 + 1;
            iVar3 = FUN_0047ccc0(uVar2,param_4 + 1,iVar4,local_c);
            if (iVar3 != 0) goto LAB_0045c8b1;
          } while (iVar4 < param_3);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_2);
    }
    param_4 = 0;
    if (param_2 != 1 && -1 < param_2 + -1) {
      do {
        iVar3 = FUN_0047cac0(param_1,param_4 + 1 + iVar6,local_24);
        if (iVar3 != 0) goto LAB_0045c8b1;
        if (0 < param_3) {
          iVar4 = 1;
          do {
            iVar3 = FUN_0047cc50(uVar2,param_4 + 1,iVar4,local_60);
            if (iVar3 != 0) goto LAB_0045c8b1;
            FUN_004e6ab0(local_60,local_24,local_54);
            iVar3 = FUN_0047ccc0(uVar2,param_4 + 1,iVar4,local_54);
            if ((iVar3 != 0) || (iVar3 = FUN_0047cc50(uVar2,param_2,iVar4,local_60), iVar3 != 0))
            goto LAB_0045c8b1;
            FUN_004e6c30(local_60,local_24,local_54);
            iVar3 = FUN_0047ccc0(uVar2,param_2,iVar4,local_54);
            if (iVar3 != 0) goto LAB_0045c8b1;
            bVar1 = iVar4 < param_3;
            iVar4 = iVar4 + 1;
          } while (bVar1);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_2 + -1);
    }
    param_4 = 0;
    if (0 < param_3 + -1) {
      do {
        iVar3 = FUN_0047cac0(param_1,iVar6 + param_2 + param_4,local_18);
        if (iVar3 != 0) goto LAB_0045c8b1;
        if (0 < param_2) {
          iVar4 = 1;
          do {
            iVar3 = FUN_0047cc50(uVar2,iVar4,param_4 + 1,local_60);
            if (iVar3 != 0) goto LAB_0045c8b1;
            FUN_004e6ab0(local_60,local_18,local_54);
            iVar3 = FUN_0047ccc0(uVar2,iVar4,param_4 + 1,local_54);
            if ((iVar3 != 0) || (iVar3 = FUN_0047cc50(uVar2,iVar4,param_3,local_60), iVar3 != 0))
            goto LAB_0045c8b1;
            FUN_004e6c30(local_60,local_18,local_54);
            iVar3 = FUN_0047ccc0(uVar2,iVar4,param_3,local_54);
            if (iVar3 != 0) goto LAB_0045c8b1;
            bVar1 = iVar4 < param_2;
            iVar4 = iVar4 + 1;
          } while (bVar1);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_3 + -1);
    }
    local_48 = local_30;
    local_44 = local_2c;
    local_40 = local_28;
    param_4 = 0;
    if (0 < param_3 + -1) {
      do {
        if (param_2 != 1 && -1 < param_2 + -1) {
          iVar4 = (param_2 + -1) * param_4 + 2;
          iVar6 = 1;
          do {
            iVar3 = FUN_0047cac0(param_1,iVar4,local_3c);
            if (iVar3 != 0) goto LAB_0045c8b1;
            iVar5 = param_4 + 1;
            iVar3 = FUN_0047cc50(uVar2,iVar6,iVar5,local_60);
            if (iVar3 != 0) goto LAB_0045c8b1;
            FUN_004e6ab0(local_60,local_3c,local_54);
            iVar3 = FUN_0047ccc0(uVar2,iVar6,iVar5,local_54);
            if ((iVar3 != 0) || (iVar3 = FUN_0047cc50(uVar2,param_2,iVar5,local_60), iVar3 != 0))
            goto LAB_0045c8b1;
            FUN_004e6c30(local_60,local_3c,local_54);
            iVar3 = FUN_0047ccc0(uVar2,param_2,iVar5,local_54);
            if ((iVar3 != 0) || (iVar3 = FUN_0047cc50(uVar2,iVar6,param_3,local_60), iVar3 != 0))
            goto LAB_0045c8b1;
            FUN_004e6c30(local_60,local_3c,local_54);
            iVar3 = FUN_0047ccc0(uVar2,iVar6,param_3,local_54);
            if (iVar3 != 0) goto LAB_0045c8b1;
            FUN_004e6ab0(&local_48,local_3c,&local_48);
            iVar4 = iVar4 + 1;
            bVar1 = iVar6 < param_2 + -1;
            iVar6 = iVar6 + 1;
          } while (bVar1);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_3 + -1);
    }
    iVar3 = FUN_0047cc50(uVar2,param_2,param_3,local_60);
    if (iVar3 == 0) {
      FUN_004e6ab0(local_60,&local_48,local_54);
      iVar3 = FUN_0047ccc0(uVar2,param_2,param_3,local_54);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
LAB_0045c8b1:
  FUN_0047cd10(uVar2);
  return iVar3;
}

