// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b2e0
// entry: 0041b2e0  size: 686


/* WARNING: Removing unreachable block (ram,0x0041b3ec) */

uint FUN_0041b2e0(uint param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_220;
  undefined2 local_21c;
  undefined2 local_21a;
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_214;
  undefined2 local_212;
  undefined2 local_210;
  undefined2 local_20e;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined1 local_200 [512];
  
  uVar3 = 0x19;
  local_220 = 0;
  local_21c = 0;
  local_21a = 0;
  local_218 = 0;
  local_216 = 0;
  local_214 = 0;
  local_212 = 0;
  local_210 = 0;
  local_20e = 0;
  local_20c = 0;
  local_20a = 0;
  local_208 = 0;
  local_206 = 0;
  local_204 = 0;
  puVar5 = local_200;
  iVar7 = 0x80;
  do {
    FUN_00419f20(puVar5,1,0,0);
    puVar5 = puVar5 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar1 = 0x19;
  if (0x19 < DAT_005d8730) {
    do {
      uVar2 = FUN_00418e50(uVar3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      FUN_00419650(0);
      FUN_00419220(&local_220,4);
      uVar2 = local_220 & 0xfff0000;
      if ((uVar2 == param_3) && (local_220 != param_3)) {
        if (uVar2 == 0x1100000) {
          uVar6 = 0x10;
        }
        else {
          if (uVar2 != 0x1200000) {
            return 0xfffffffe;
          }
          uVar6 = 0x18;
        }
        iVar7 = (local_220 & 0xffff) - (local_220 & 0x1f);
        FUN_00419f20(local_200 + ((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4,0,
                     local_220 & 0x1f,1);
        FUN_00419650(4);
        FUN_00419220(&local_220,4);
        if (local_220 == param_1) {
          FUN_00419650(8);
          FUN_00419220(&local_21c,uVar6);
          FUN_0042ab20(&local_21c,0,0xd);
          iVar7 = FUN_0042a3d0(&local_21c,param_2,uVar6);
          if (iVar7 != 0) {
            FUN_00418f90();
            return 0xfffffff3;
          }
        }
      }
      FUN_00418f90();
      uVar3 = uVar3 + 1;
      if (0xffd < uVar3) {
        FUN_00418f90();
        return 0xfffffffa;
      }
      uVar1 = uVar3;
    } while (uVar3 < DAT_005d8730);
  }
  uVar2 = (uint)DAT_005d8730 % 0x7ff;
  if (uVar2 == 0) {
    uVar8 = FUN_0041cb40();
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)(uint)uVar8 < 0) {
      return (uint)uVar8;
    }
  }
  uVar4 = 1;
  do {
    uVar8 = FUN_00419f20(local_200 + (uVar4 - (uVar4 & 0x1f) >> 5) * 4,3,
                         CONCAT31((int3)(uVar2 >> 8),(char)uVar4) & 0xffffff1f,0);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      uVar4 = uVar4 | param_3;
      *param_4 = uVar4;
      if ((uVar4 & 0xfff0000) == 0x1200000) {
        *param_4 = uVar4 | 0x80000000;
      }
      *param_4 = *param_4 | 0x50000000;
      return (uint)uVar1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xffe);
  return 0xfffffff4;
}

