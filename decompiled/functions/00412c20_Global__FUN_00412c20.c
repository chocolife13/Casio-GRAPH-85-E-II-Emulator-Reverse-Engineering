// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00412c20
// entry: 00412c20  size: 2225


/* WARNING: Type propagation algorithm not settling */

void FUN_00412c20(uint *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  byte local_1e [2];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  FUN_00414db0();
  if ((char)param_1[4] == '\x01') {
    local_1e[1] = 0xff;
    local_1e[0] = 0xff;
  }
  else if ((char)param_1[4] == '\x02') {
    local_1e[0] = 0xaa;
    local_1e[1] = 0x55;
  }
  else {
    local_1e[1] = 0;
    local_1e[0] = 0;
  }
  uVar7 = *param_1;
  uVar6 = param_1[2];
  uVar3 = uVar7;
  if ((int)uVar6 < (int)uVar7) {
    uVar3 = uVar6;
    uVar6 = uVar7;
  }
  local_8 = param_1[1];
  uVar7 = param_1[3];
  local_4 = uVar7;
  if ((int)uVar7 < (int)local_8) {
    local_4 = local_8;
    local_8 = uVar7;
  }
  if ((((-1 < (int)uVar3) && ((int)uVar6 < 0x80)) && (-1 < (int)local_8)) && ((int)local_4 < 0x40))
  {
    local_c = 0;
    local_14 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3;
    local_10 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
    puVar10 = &DAT_005d8280 + local_8 * 4;
    uVar3 = uVar3 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    bVar2 = (&DAT_0057d5b4)[uVar3];
    uVar7 = uVar6 + 1 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    bVar1 = (&DAT_0057d5bc)[uVar7];
    local_18 = local_8;
    if (uVar3 == 0) {
      uVar7 = 0;
      if ((int)local_8 <= (int)local_4) {
        local_4 = (local_4 - local_8) + 1;
        do {
          iVar8 = local_14;
          if (local_14 < local_10) {
            do {
              local_c = iVar8;
              if (((-1 < iVar8) && (iVar8 < 0x80)) &&
                 ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
                bVar2 = FUN_0040ad10(iVar8,local_18);
                if (param_2 == 1) {
                  if ((char)param_1[4] == '\x04') {
                    local_1c = CONCAT31(local_1c._1_3_,~bVar2);
                  }
                  else if ((char)param_1[4] == '\x02') {
                    local_1c = CONCAT31(local_1c._1_3_,bVar2 & local_1e[uVar7]);
                  }
                  else {
                    local_1c = CONCAT31(local_1c._1_3_,local_1e[uVar7]);
                  }
                  FUN_0040ad70(iVar8,local_18,local_1c);
                }
                else {
                  if (param_2 == 2) {
                    if ((char)param_1[4] == '\x04') {
                      local_1c = CONCAT31(local_1c._1_3_,~*(byte *)(iVar8 + (int)puVar10));
                    }
                    else if ((char)param_1[4] == '\x02') {
                      local_1c = CONCAT31(local_1c._1_3_,
                                          *(byte *)(iVar8 + (int)puVar10) & local_1e[uVar7]);
                    }
                    else {
                      local_1c = CONCAT31(local_1c._1_3_,local_1e[uVar7]);
                    }
                    FUN_0040ad70(iVar8,local_18,local_1c);
                  }
                  if ((char)param_1[4] == '\x04') {
                    *(byte *)(iVar8 + (int)puVar10) = ~*(byte *)(iVar8 + (int)puVar10);
                  }
                  else if ((char)param_1[4] == '\x02') {
                    *(byte *)(iVar8 + (int)puVar10) =
                         *(byte *)(iVar8 + (int)puVar10) & local_1e[uVar7];
                  }
                  else {
                    *(byte *)(iVar8 + (int)puVar10) = local_1e[uVar7];
                  }
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < local_10);
          }
          if (((-1 < local_c) && (local_c < 0x80)) &&
             ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
            if (param_2 == 1) {
              local_c = iVar8;
              bVar2 = FUN_0040ad10(iVar8,local_18);
              if ((char)param_1[4] == '\x04') {
                bVar4 = ~bVar2;
              }
              else if ((char)param_1[4] == '\x02') {
                bVar4 = local_1e[uVar7] & bVar2;
              }
              else {
                bVar4 = local_1e[uVar7];
              }
              local_1c = CONCAT31(local_1c._1_3_,bVar4 & bVar1 | ~bVar1 & bVar2);
              FUN_0040ad70(iVar8,local_18,local_1c);
            }
            else {
              if (param_2 == 2) {
                local_c = iVar8;
                FUN_0040ad10(iVar8,local_18);
                bVar2 = *(byte *)(iVar8 + (int)puVar10);
                if ((char)param_1[4] == '\x04') {
                  bVar4 = ~bVar2;
                }
                else if ((char)param_1[4] == '\x02') {
                  bVar4 = local_1e[uVar7] & bVar2;
                }
                else {
                  bVar4 = local_1e[uVar7];
                }
                local_1c = CONCAT31(local_1c._1_3_,bVar4 & bVar1 | ~bVar1 & bVar2);
                FUN_0040ad70(iVar8,local_18,local_1c);
              }
              bVar2 = *(byte *)(iVar8 + (int)puVar10);
              bVar4 = ~bVar1 & bVar2;
              if ((char)param_1[4] == '\x04') {
                *(byte *)(iVar8 + (int)puVar10) = ~bVar2 & bVar1 | bVar4;
              }
              else if ((char)param_1[4] == '\x02') {
                *(byte *)(iVar8 + (int)puVar10) = local_1e[uVar7] & bVar2 & bVar1 | bVar4;
              }
              else {
                *(byte *)(iVar8 + (int)puVar10) = local_1e[uVar7] & bVar1 | bVar4;
              }
            }
          }
          uVar7 = (uint)(uVar7 != 1);
          puVar10 = puVar10 + 4;
          local_18 = local_18 + 1;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
        FUN_00414db0();
        return;
      }
    }
    else {
      local_c = 0;
      if ((int)local_8 <= (int)local_4) {
        uVar7 = 0;
        do {
          iVar8 = local_14;
          if (param_2 == 1) {
            bVar4 = FUN_0040ad10(local_14,local_18);
            if (iVar8 == local_10) {
              if ((char)param_1[4] == '\x04') {
                bVar5 = ~bVar4;
              }
              else if ((char)param_1[4] == '\x02') {
                bVar5 = local_1e[uVar7] & bVar4;
              }
              else {
                bVar5 = local_1e[uVar7];
              }
              local_1c = CONCAT31(local_1c._1_3_,bVar5 & bVar1 & bVar2 | bVar4 & (~bVar2 | ~bVar1));
              iVar9 = local_14;
            }
            else {
              if ((char)param_1[4] == '\x04') {
                bVar5 = ~bVar4;
              }
              else if ((char)param_1[4] == '\x02') {
                bVar5 = local_1e[uVar7] & bVar4;
              }
              else {
                bVar5 = local_1e[uVar7];
              }
              local_1c = CONCAT31(local_1c._1_3_,bVar5 & bVar2 | ~bVar2 & bVar4);
              if (((-1 < iVar8) && (iVar8 < 0x80)) &&
                 ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
                FUN_0040ad70(iVar8,local_18,local_1c);
              }
              iVar8 = local_14 + 1;
              if (iVar8 < local_10) {
                do {
                  bVar4 = FUN_0040ad10(iVar8,local_18);
                  if ((char)param_1[4] == '\x04') {
                    local_1c = CONCAT31(local_1c._1_3_,~bVar4);
                  }
                  else if ((char)param_1[4] == '\x02') {
                    local_1c = CONCAT31(local_1c._1_3_,bVar4 & local_1e[uVar7]);
                  }
                  else {
                    local_1c = CONCAT31(local_1c._1_3_,local_1e[uVar7]);
                  }
                  if (((-1 < iVar8) && (iVar8 < 0x80)) &&
                     ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
                    FUN_0040ad70(iVar8,local_18,local_1c);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < local_10);
              }
              bVar4 = FUN_0040ad10(iVar8,local_18);
              if ((char)param_1[4] == '\x04') {
                bVar5 = ~bVar4;
              }
              else if ((char)param_1[4] == '\x02') {
                bVar5 = local_1e[uVar7] & bVar4;
              }
              else {
                bVar5 = local_1e[uVar7];
              }
              local_1c = CONCAT31(local_1c._1_3_,bVar5 & bVar1 | ~bVar1 & bVar4);
              iVar9 = iVar8;
            }
            if ((((-1 < iVar8) && (iVar9 < 0x80)) && (-1 < (int)local_18)) && ((int)local_18 < 0x40)
               ) {
              FUN_0040ad70(iVar9,local_18,local_1c);
            }
          }
          else {
            iVar9 = iVar8;
            if (param_2 == 2) {
              FUN_0040ad10(local_14,local_18);
              if (iVar8 == local_10) {
                bVar4 = *(byte *)(iVar8 + (int)puVar10);
                if ((char)param_1[4] == '\x04') {
                  bVar5 = ~bVar4;
                }
                else if ((char)param_1[4] == '\x02') {
                  bVar5 = local_1e[uVar7] & bVar4;
                }
                else {
                  bVar5 = local_1e[uVar7];
                }
                local_1c = CONCAT31(local_1c._1_3_,bVar5 & bVar1 & bVar2 | (~bVar1 | ~bVar2) & bVar4
                                   );
                iVar9 = local_14;
                if ((((-1 < iVar8) && (iVar8 < 0x80)) && (-1 < (int)local_18)) &&
                   ((int)local_18 < 0x40)) {
                  FUN_0040ad70(iVar8,local_18,local_1c);
                  iVar9 = iVar8;
                }
              }
              else {
                iVar8 = local_14 + 1;
                if (iVar8 < local_10) {
                  do {
                    FUN_0040ad10(iVar8,local_18);
                    if ((char)param_1[4] == '\x04') {
                      local_1c = CONCAT31(local_1c._1_3_,~*(byte *)(iVar8 + (int)puVar10));
                    }
                    else if ((char)param_1[4] == '\x02') {
                      local_1c = CONCAT31(local_1c._1_3_,
                                          *(byte *)(iVar8 + (int)puVar10) & local_1e[uVar7]);
                    }
                    else {
                      local_1c = CONCAT31(local_1c._1_3_,local_1e[uVar7]);
                    }
                    if (((-1 < iVar8) && (iVar8 < 0x80)) &&
                       ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
                      FUN_0040ad70(iVar8,local_18,local_1c);
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < local_10);
                }
                FUN_0040ad10(iVar8,local_18);
                bVar4 = *(byte *)(iVar8 + (int)puVar10);
                if ((char)param_1[4] == '\x04') {
                  bVar5 = ~bVar4;
                }
                else if ((char)param_1[4] == '\x02') {
                  bVar5 = local_1e[uVar7] & bVar4;
                }
                else {
                  bVar5 = local_1e[uVar7];
                }
                local_1c = CONCAT31(local_1c._1_3_,bVar5 & bVar1 | ~bVar1 & bVar4);
                iVar9 = local_14;
                if (((-1 < iVar8) && (iVar8 < 0x80)) &&
                   ((-1 < (int)local_18 && ((int)local_18 < 0x40)))) {
                  FUN_0040ad70(iVar8,local_18,local_1c);
                  iVar9 = local_14;
                }
              }
            }
            bVar4 = *(byte *)(iVar9 + (int)puVar10);
            bVar5 = ~bVar2 & bVar4;
            if (iVar9 == local_10) {
              bVar5 = bVar4 & (~bVar2 | ~bVar1);
              if ((char)param_1[4] == '\x04') {
                *(byte *)(iVar9 + (int)puVar10) = ~bVar4 & bVar1 & bVar2 | bVar5;
              }
              else if ((char)param_1[4] == '\x02') {
                *(byte *)(iVar9 + (int)puVar10) = local_1e[uVar7] & bVar4 & bVar1 & bVar2 | bVar5;
              }
              else {
                *(byte *)(iVar9 + (int)puVar10) = local_1e[uVar7] & bVar1 & bVar2 | bVar5;
              }
            }
            else {
              if ((char)param_1[4] == '\x04') {
                bVar4 = ~bVar4;
LAB_00413213:
                *(byte *)(iVar9 + (int)puVar10) = bVar4 & bVar2 | bVar5;
              }
              else {
                if ((char)param_1[4] != '\x02') {
                  bVar4 = local_1e[uVar7];
                  goto LAB_00413213;
                }
                *(byte *)(iVar9 + (int)puVar10) = local_1e[uVar7] & bVar4 & bVar2 | bVar5;
              }
              while (iVar9 = iVar9 + 1, iVar9 < local_10) {
                if ((char)param_1[4] == '\x04') {
                  bVar4 = ~*(byte *)(iVar9 + (int)puVar10);
LAB_00413238:
                  *(byte *)(iVar9 + (int)puVar10) = bVar4;
                }
                else {
                  bVar4 = local_1e[uVar7];
                  if ((char)param_1[4] != '\x02') goto LAB_00413238;
                  *(byte *)(iVar9 + (int)puVar10) = *(byte *)(iVar9 + (int)puVar10) & bVar4;
                }
              }
              bVar4 = *(byte *)(iVar9 + (int)puVar10);
              bVar5 = ~bVar1 & bVar4;
              if ((char)param_1[4] == '\x04') {
                *(byte *)(iVar9 + (int)puVar10) = ~bVar4 & bVar1 | bVar5;
              }
              else if ((char)param_1[4] == '\x02') {
                *(byte *)(iVar9 + (int)puVar10) = local_1e[uVar7] & bVar4 & bVar1 | bVar5;
              }
              else {
                *(byte *)(iVar9 + (int)puVar10) = local_1e[uVar7] & bVar1 | bVar5;
              }
            }
          }
          uVar7 = (uint)(uVar7 != 1);
          local_8 = local_8 + 1;
          puVar10 = puVar10 + 4;
          local_18 = local_18 + 1;
        } while ((int)local_8 <= (int)local_4);
      }
    }
  }
  FUN_00414db0();
  return;
}

