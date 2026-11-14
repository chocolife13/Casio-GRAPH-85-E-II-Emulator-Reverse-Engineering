// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556a9e
// entry: 00556a9e  size: 239


int FUN_00556a9e(byte *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_005da6fc == 0) {
    iVar2 = _strncmp((char *)param_1,(char *)param_2,param_3);
    return iVar2;
  }
  FUN_00558590(0x19);
  param_3 = param_3 - 1;
  do {
    uVar4 = (ushort)*param_1;
    pbVar6 = param_1 + 1;
    if (((&DAT_005da801)[uVar4] & 4) == 0) {
LAB_00556b1f:
      bVar1 = *param_2;
      uVar3 = (uint)(ushort)bVar1;
      pbVar5 = param_2 + 1;
      if (((&DAT_005da801)[(ushort)bVar1] & 4) != 0) {
        if (param_3 != 0) {
          param_3 = param_3 + -1;
          if (*pbVar5 != 0) {
            uVar3 = (uint)CONCAT11(bVar1,*pbVar5);
            pbVar5 = param_2 + 2;
            goto LAB_00556b4c;
          }
        }
        uVar3 = 0;
      }
    }
    else {
      if (param_3 != 0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0) {
          uVar4 = 0;
        }
        else {
          pbVar6 = param_1 + 2;
          uVar4 = CONCAT11(*param_1,bVar1);
        }
        goto LAB_00556b1f;
      }
      uVar3 = (uint)*param_2;
      uVar4 = 0;
      pbVar5 = param_2;
      if (((&DAT_005da801)[uVar3] & 4) != 0) {
LAB_00556b7e:
        FUN_005585f1(0x19);
        return 0;
      }
    }
LAB_00556b4c:
    if (uVar4 != (ushort)uVar3) {
      FUN_005585f1(0x19);
      return (-(uint)((ushort)uVar3 < uVar4) & 2) - 1;
    }
    if ((uVar4 == 0) ||
       (bVar7 = param_3 == 0, param_2 = pbVar5, param_1 = pbVar6, param_3 = param_3 + -1, bVar7))
    goto LAB_00556b7e;
  } while( true );
}

