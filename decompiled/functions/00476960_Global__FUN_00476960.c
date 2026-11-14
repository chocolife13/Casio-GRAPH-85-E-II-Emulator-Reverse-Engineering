// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476960
// entry: 00476960  size: 301


void FUN_00476960(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  cVar1 = FUN_00526090(0x51);
  if (cVar1 != '\0') {
    uVar5 = param_2 + 4;
  }
  else {
    uVar5 = param_2 + 3;
  }
  uVar2 = (uint)(cVar1 == '\0');
  if ((int)(param_2 - uVar2) < 0x3e4) {
    FUN_00476940(5,uVar2);
    FUN_00476ef0(1,6,uVar5);
    if (param_1 < param_1 + 4) {
      iVar7 = param_1 * 7;
      iVar6 = param_1;
      do {
        uVar2 = FUN_00527440(0,iVar6);
        if (uVar2 < uVar5) {
          FUN_004b6ef0(local_34,s__005bf334);
        }
        else {
          iVar3 = FUN_00527570(0,iVar6,uVar5,local_4c);
          if (iVar3 == 0) {
            FUN_00476ea0(local_4c,local_34);
          }
          else {
            FUN_004b6ef0(local_34,s_ERROR_005bf324);
          }
        }
        if ((param_3 != iVar6) || (uVar4 = 0x22, param_4 != uVar5)) {
          uVar4 = 0x20;
        }
        FUN_00523a20(iVar7 + param_1 * -7 + 5,6,local_34,uVar4);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 7;
      } while (iVar6 < param_1 + 4);
    }
    return;
  }
  FUN_00476940(5,uVar2);
  FUN_005232d0(1,6);
  FUN_00523470(&DAT_005cd010,0x15);
  return;
}

