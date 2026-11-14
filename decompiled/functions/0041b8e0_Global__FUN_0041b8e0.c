// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b8e0
// entry: 0041b8e0  size: 401


uint FUN_0041b8e0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  uint local_1c;
  undefined2 local_18 [12];
  
  piVar1 = param_1;
  iVar7 = 0;
  local_1c = 0;
  if (*(short *)*param_1 == 0x5c) {
    *param_1 = (int)((short *)*param_1 + 1);
  }
  if (*(short *)*param_1 == 0x5c) {
    iVar2 = FUN_0041a010((short *)*param_1 + 1);
    if (iVar2 != 1) {
      return 0xfffffffb;
    }
    *param_1 = *param_1 + 0xc;
  }
  psVar6 = (short *)*param_1;
  uVar5 = 0xffffffff;
  uVar3 = 0;
  param_1 = (int *)0x0;
  do {
    psVar4 = (short *)*piVar1;
    if (*psVar4 == 0x5c) {
      if (iVar7 == 0) {
        return 0xfffffffe;
      }
      FUN_0042a4c0(local_18,psVar6,iVar7);
      local_18[iVar7] = 0;
      FUN_0042ab20(local_18,0xffff,0xc);
      uVar3 = FUN_0041b000(local_18,uVar5,&local_1c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((DAT_005d8730 <= local_1c) || ((DAT_005d8924 & 0xfff0000) != 0x1100000)) {
        return 0xfffffffd;
      }
      uVar5 = DAT_005d8924 & 0xfffffff;
      iVar7 = 0;
      psVar4 = (short *)*piVar1;
      psVar6 = psVar4 + 1;
    }
    else {
      if (*psVar4 == 0) {
        FUN_0042a4c0(local_18,psVar6,0xc);
        FUN_0042ab20(local_18,0xffff,0xc);
        uVar3 = FUN_0041b000(local_18,uVar5,&local_1c);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (uint)DAT_005d8730;
        *param_2 = local_1c;
        *param_3 = uVar5;
        *piVar1 = (int)psVar6;
        return (uint)(local_1c < uVar3);
      }
      iVar7 = iVar7 + 1;
      if (0xc < iVar7) {
        return 0xfffffffe;
      }
    }
    *piVar1 = (int)(psVar4 + 1);
    param_1 = (int *)((int)param_1 + 1);
    if (0x100 < (int)param_1) {
      *param_3 = uVar5;
      *piVar1 = (int)psVar6;
      return uVar3;
    }
  } while( true );
}

