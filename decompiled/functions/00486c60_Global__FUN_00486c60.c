// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486c60
// entry: 00486c60  size: 589


void FUN_00486c60(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80 [128];
  
  puVar2 = (undefined4 *)FUN_004869c0(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    if (0 < param_2) {
      for (uVar3 = (uint)(param_2 * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        param_3[0] = 0;
        param_3[1] = 0;
        param_3 = param_3 + 2;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)param_3 = 0;
        param_3 = (short *)((int)param_3 + 1);
      }
      return;
    }
  }
  else {
    local_90 = *puVar2;
    local_8c = puVar2[1];
    local_88 = puVar2[2];
    local_84 = puVar2[3];
    if (0 < param_2) {
      local_94 = param_2;
      do {
        local_a0 = (undefined4 *)0x0;
        param_3[8] = local_90._2_2_;
        param_3[9] = local_8c._2_2_;
        param_3[10] = 0;
        if (((*param_3 <= local_90._2_2_) && (puVar2[*param_3 + 3] != 0)) &&
           (local_a0 = puVar2, iVar4 = FUN_00486fd0(param_1,(int)*param_3,0,&local_a0), iVar4 != 0))
        {
          puVar6 = local_a0;
          pbVar7 = local_80;
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pbVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            pbVar7 = pbVar7 + 4;
          }
          sVar1 = FUN_00487bf0(local_80);
          param_3[10] = sVar1;
        }
        iVar4 = FUN_00488550(param_1,(int)*param_3,(int)param_3[1],&local_98,puVar2);
        if (iVar4 == -1) {
          param_3[0xd] = 0;
          param_3[0xb] = 0;
        }
        else {
          param_3[0xd] = (short)iVar4;
          param_3[0xb] = (short)local_98;
        }
        param_3[2] = 0;
        param_3[3] = 0;
        if (local_a0 != (undefined4 *)0x0) {
          uVar3 = (int)param_3[1] - 1;
          uVar5 = uVar3 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          if ((local_80[(int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3] >> (7U - (char)uVar5 & 0x1f)
              & 1) != 0) {
            param_3[2] = 0xc;
            param_3[3] = 0;
          }
        }
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        *(undefined1 *)(param_3 + 0xc) = 0;
        *(undefined1 *)((int)param_3 + 0x19) = 0;
        local_a0 = puVar2;
        iVar4 = FUN_004885f0(param_1,(int)*param_3,(int)param_3[1],&local_98,&local_9c,&local_a0);
        if (iVar4 == 0) {
          *(char *)(param_3 + 0xc) = (char)(local_9c >> 0x10);
          *(char *)((int)param_3 + 0x19) = (char)(local_9c >> 0x18);
          local_9c = local_a0[param_3[1]];
          if ((local_9c & 0x4000000) != 0) {
            iVar4 = FUN_004b7550((int)local_a0 + local_98 * 4 + (local_9c & 0xffff) + 4);
            *(uint *)(param_3 + 4) = iVar4 + 4U & 0xfffffffc;
          }
          if ((local_9c & 0x2000000) != 0) {
            iVar4 = FUN_004b7550((local_9c & 0xffff) + 4 + local_98 * 4 + *(int *)(param_3 + 4) +
                                 (int)local_a0);
            *(uint *)(param_3 + 6) = iVar4 + 4U & 0xfffffffc;
          }
        }
        param_3 = param_3 + 0xe;
        local_94 = local_94 + -1;
      } while (local_94 != 0);
    }
  }
  return;
}

