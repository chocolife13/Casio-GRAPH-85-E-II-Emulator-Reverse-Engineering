// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546d00
// entry: 00546d00  size: 308


void FUN_00546d00(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined2 local_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  int iVar6;
  
  iVar5 = FUN_00486470(param_2,param_3);
  if (iVar5 != 0) {
    if ((param_4 == (undefined4 *)0x0) &&
       (param_4 = (undefined4 *)FUN_004869c0(param_1), param_4 == (undefined4 *)0x0)) {
      return;
    }
    FUN_00487710(param_1,param_2,param_3,param_4,param_5);
    local_10 = (undefined2)*param_4;
    sStack_e = (short)((uint)*param_4 >> 0x10);
    local_c = (short)param_4[1];
    sStack_a = (short)((uint)param_4[1] >> 0x10);
    uVar1 = param_4[2];
    uVar2 = param_4[3];
    if (param_5 == 0) {
      iVar5 = 0x10;
      sVar4 = sStack_e;
    }
    else if (param_5 == 1) {
      iVar5 = ((int)local_c + (int)sStack_e) * 4 + 0x10;
      sVar4 = sStack_a;
    }
    else {
      if (param_5 != 2) {
        return;
      }
      iVar5 = sStack_e * 4 + 0x10;
      sVar4 = local_c;
    }
    iVar6 = (int)sVar4;
    if (param_2 <= iVar6) {
      if (iVar6 < param_2 + -1 + param_3) {
        param_3 = (iVar6 - param_2) + 1;
      }
      cVar3 = FUN_004acb90(param_3 * 4 & 0xffff,iVar5 + 0xfffc + param_2 * 4 & 0xffff);
      if (cVar3 == '\0') {
        sVar4 = (short)param_3;
        if (param_5 == 0) {
          sStack_e = sStack_e - sVar4;
        }
        else if (param_5 == 2) {
          local_c = local_c - sVar4;
        }
        else if (param_5 == 1) {
          sStack_a = sStack_a - sVar4;
        }
        *param_4 = CONCAT22(sStack_e,local_10);
        param_4[1] = CONCAT22(sStack_a,local_c);
        param_4[2] = uVar1;
        param_4[3] = uVar2;
      }
    }
  }
  return;
}

