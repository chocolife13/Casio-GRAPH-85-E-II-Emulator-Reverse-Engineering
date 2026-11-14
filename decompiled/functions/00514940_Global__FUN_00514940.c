// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514940
// entry: 00514940  size: 1360


undefined4 FUN_00514940(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_a8 [12];
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (param_2 == 0) {
    iVar4 = FUN_00515ec0(&local_90);
    if (iVar4 != 0) {
      iVar4 = FUN_00515f70(0);
      if (iVar4 != 0) {
        return 4;
      }
      FUN_00515ec0(&local_90);
    }
  }
  else {
    iVar4 = FUN_00515e10(&local_90);
    if (iVar4 != 0) {
      iVar4 = FUN_00515f70(param_2);
      if (iVar4 != 0) {
        return 4;
      }
      FUN_00515e10(&local_90);
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x818);
  *(undefined4 *)(param_1 + 0x800) = local_90;
  *(undefined4 *)(param_1 + 0x804) = local_8c;
  *(undefined4 *)(param_1 + 0x808) = local_88;
  *(undefined4 *)(param_1 + 0x80c) = local_84;
  *(undefined4 *)(param_1 + 0x810) = local_80;
  *(undefined4 *)(param_1 + 0x814) = local_7c;
  *puVar1 = local_78;
  *(undefined4 *)(param_1 + 0x81c) = local_74;
  *(undefined4 *)(param_1 + 0x820) = local_70;
  *(undefined4 *)(param_1 + 0x824) = local_6c;
  *(undefined4 *)(param_1 + 0x828) = local_68;
  *(undefined4 *)(param_1 + 0x82c) = local_64;
  *(undefined4 *)(param_1 + 0x83c) = local_60;
  *(undefined4 *)(param_1 + 0x840) = local_5c;
  *(undefined4 *)(param_1 + 0x844) = local_58;
  *(undefined4 *)(param_1 + 0x848) = local_54;
  *(undefined4 *)(param_1 + 0x84c) = local_50;
  *(undefined4 *)(param_1 + 0x850) = local_4c;
  *(undefined4 *)(param_1 + 0x854) = local_48;
  *(undefined4 *)(param_1 + 0x858) = local_44;
  *(undefined4 *)(param_1 + 0x85c) = local_40;
  local_98 = (undefined4 *)(param_1 + 0x86c);
  *local_98 = local_3c;
  *(undefined4 *)(param_1 + 0x870) = local_38;
  *(undefined4 *)(param_1 + 0x874) = local_34;
  local_94 = (undefined4 *)(param_1 + 0x878);
  *local_94 = local_30;
  *(undefined4 *)(param_1 + 0x87c) = local_2c;
  *(undefined4 *)(param_1 + 0x880) = local_28;
  *(undefined4 *)(param_1 + 0x890) = local_3c;
  *(undefined4 *)(param_1 + 0x894) = local_38;
  *(undefined4 *)(param_1 + 0x898) = local_34;
  *(undefined4 *)(param_1 + 0x89c) = local_30;
  *(undefined4 *)(param_1 + 0x8a0) = local_2c;
  *(undefined4 *)(param_1 + 0x8a4) = local_28;
  *(undefined4 *)(param_1 + 0x884) = local_24;
  *(undefined4 *)(param_1 + 0x888) = local_20;
  *(undefined4 *)(param_1 + 0x88c) = local_1c;
  *(undefined4 *)(param_1 + 0x830) = local_18;
  *(undefined4 *)(param_1 + 0x834) = local_14;
  *(undefined4 *)(param_1 + 0x838) = local_10;
  FUN_004e6b80(&local_54,&local_60,local_a8);
  FUN_004e7910(local_a8,local_a8);
  iVar4 = param_1 + 0x860;
  uVar5 = FUN_004e5070(0x3e,local_c,iVar4);
  FUN_004e6dd0(local_a8,uVar5);
  FUN_004e7910(iVar4,iVar4);
  FUN_004e5780(local_a8);
  iVar6 = FUN_004e71d0((undefined4 *)(param_1 + 0x824),local_a8);
  if (((iVar6 == 0) && (iVar6 = FUN_004e71d0(param_1 + 0x830,local_a8), iVar6 == 0)) &&
     (iVar4 = FUN_004e71d0(iVar4,local_a8), iVar4 == 0)) {
    local_9c = param_1 + 0x884;
    iVar4 = FUN_004e71d0(local_9c,local_a8);
    if (iVar4 == 0) {
      iVar4 = FUN_004e71d0(param_1 + 0x800,param_1 + 0x80c);
      if ((iVar4 == 0) && (iVar4 = FUN_004e71d0(param_1 + 0x83c,param_1 + 0x848), iVar4 == 0)) {
        iVar4 = FUN_004e7250(puVar1,local_a8);
        if (iVar4 != 0) {
          if (param_2 == 0) {
            uVar5 = FUN_004e7730(puVar1,puVar1,2);
            FUN_00516d20(uVar5);
          }
          else {
            uVar5 = FUN_004e7730(puVar1,puVar1,2);
            FUN_00516d00(uVar5);
          }
        }
        iVar4 = param_1 + 0x854;
        iVar6 = FUN_004e7250(iVar4,local_a8);
        if (iVar6 != 0) {
          if (param_2 == 0) {
            uVar5 = FUN_004e7730(iVar4,iVar4,6);
            FUN_00516d20(uVar5);
          }
          else {
            uVar5 = FUN_004e7730(iVar4,iVar4,6);
            FUN_00516d00(uVar5);
          }
        }
        iVar4 = FUN_004e7290(param_1 + 0x800,param_1 + 0x80c);
        if (iVar4 == 0) {
          bVar3 = *(byte *)(param_1 + 0x8e2) & 0xfe;
        }
        else {
          bVar3 = *(byte *)(param_1 + 0x8e2) | 1;
        }
        *(byte *)(param_1 + 0x8e2) = bVar3;
        iVar4 = FUN_004e7290(param_1 + 0x83c,param_1 + 0x848);
        puVar2 = local_94;
        puVar1 = local_98;
        if (iVar4 == 0) {
          bVar3 = *(byte *)(param_1 + 0x8e2) & 0xfd;
        }
        else {
          bVar3 = *(byte *)(param_1 + 0x8e2) | 2;
        }
        *(byte *)(param_1 + 0x8e2) = bVar3;
        iVar6 = FUN_004e7290(local_98,local_94);
        iVar4 = local_9c;
        if (((iVar6 != 0) && (iVar6 = FUN_004e7290(local_9c,local_a8), iVar6 != 0)) ||
           ((iVar6 = FUN_004e72d0(puVar1,puVar2), iVar6 != 0 &&
            (iVar6 = FUN_004e7250(iVar4,local_a8), iVar6 != 0)))) {
          if (param_2 == 0) {
            uVar5 = FUN_004e7730(iVar4,iVar4,9);
            FUN_00516d20(uVar5);
          }
          else {
            uVar5 = FUN_004e7730(iVar4,iVar4,9);
            FUN_00516d00(uVar5);
          }
        }
        FUN_004e6b80(&local_54,&local_60,local_a8);
        iVar4 = FUN_004e7b60(local_a8);
        iVar6 = FUN_004e7b60(&local_54);
        if (0xb < iVar6 - iVar4) {
          iVar4 = FUN_004e7b60(local_a8);
          iVar6 = FUN_004e7b60(&local_60);
          if (0xb < iVar6 - iVar4) {
            return 0x1c;
          }
        }
        FUN_004e6b80(&local_84,&local_90,local_a8);
        iVar4 = FUN_004e7b60(local_a8);
        iVar6 = FUN_004e7b60(&local_84);
        if (0xb < iVar6 - iVar4) {
          iVar4 = FUN_004e7b60(local_a8);
          iVar6 = FUN_004e7b60(&local_90);
          if (0xb < iVar6 - iVar4) {
            return 0x1c;
          }
        }
        return 0;
      }
    }
  }
  return 0x1c;
}

