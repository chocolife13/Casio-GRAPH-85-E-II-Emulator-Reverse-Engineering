// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adfc0
// entry: 004adfc0  size: 222


void FUN_004adfc0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_a [2];
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = FUN_00411d60(local_4);
  *param_1 = 0xff00 - iVar1;
  iVar1 = FUN_00412130();
  *param_1 = *param_1 + (-0x930 - iVar1);
  iVar1 = FUN_004adeb0(s__APLWORK_005abd00,&local_8,local_a);
  if (iVar1 == 0) {
    *param_1 = *param_1 - local_8;
    iVar1 = FUN_004adeb0(s__REV2_005be1f8,&local_8,local_a);
    if (iVar1 == 0) {
      *param_1 = *param_1 - local_8;
      if ((param_2 == 0x1000) || (param_2 == 0x800)) {
        iVar1 = FUN_004adeb0(&DAT_005bfd08,&local_8,local_a);
        if (iVar1 == 0) {
          *param_1 = *param_1 - local_8;
          iVar1 = FUN_004adeb0(s__REV1_005c0794,&local_8,local_a);
          if (iVar1 == 0) {
            *param_1 = *param_1 - local_8;
          }
        }
      }
    }
  }
  return;
}

