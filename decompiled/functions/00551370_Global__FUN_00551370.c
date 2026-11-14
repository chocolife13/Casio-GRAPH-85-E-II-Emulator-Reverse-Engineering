// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00551370
// entry: 00551370  size: 316


undefined4 FUN_00551370(int *param_1,int *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  undefined1 local_28 [12];
  undefined2 local_1c;
  undefined2 local_1a;
  int local_18;
  int local_14;
  int local_10;
  short local_c;
  short local_8;
  
  FUN_00485e40(local_28);
  *param_2 = 0;
  local_2c = 0;
  *param_1 = 0;
  local_1c = 1;
  local_1a = 1;
  FUN_00486c60(local_28,1,&local_1c);
  if (local_c < param_3[2]) {
    *param_1 = *param_1 + ((int)param_3[2] - (int)local_c) * 4;
  }
  iVar2 = (int)*param_3;
  if (iVar2 <= param_3[2]) {
    do {
      if (0x1a < iVar2) {
        return local_2c;
      }
      local_1c = (undefined2)iVar2;
      local_1a = 1;
      FUN_00486c60(local_28,1,&local_1c);
      if (local_8 == 0) {
        *param_1 = *param_1 + 0x80;
      }
      iVar3 = (int)param_3[1];
      if (iVar3 <= param_3[3]) {
        do {
          if (999 < iVar3) break;
          FUN_0052f840();
          iVar1 = FUN_0052f820();
          if (iVar1 == 1) {
            local_2c = 1;
            break;
          }
          local_1a = (undefined2)iVar3;
          FUN_00486c60(local_28,1,&local_1c);
          *param_2 = *param_2 + local_10 + local_14 + local_18;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= param_3[3]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_3[2]);
  }
  return local_2c;
}

