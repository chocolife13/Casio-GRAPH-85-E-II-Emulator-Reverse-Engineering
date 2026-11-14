// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004711b0
// entry: 004711b0  size: 404


undefined4 FUN_004711b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_10c [4];
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec [24];
  int local_8c;
  int local_88;
  undefined4 local_78 [9];
  undefined1 local_54 [12];
  undefined1 local_48 [72];
  
  local_108 = 1;
  local_104 = 1;
  while( true ) {
    *(undefined2 *)(param_1 + 8) = 6;
    iVar2 = FUN_004673d0(&local_108,&local_104,param_1,0,&DAT_00582324);
    if (iVar2 == 2) {
      return 0xffffffff;
    }
    if (iVar2 == 3) break;
    if (iVar2 == 4) {
      cVar1 = FUN_005260a0();
      local_f8 = (int)*(short *)(param_1 + 0xe);
      local_100 = (int)cVar1;
      local_fc = (int)*(short *)(param_1 + 6);
      local_f4 = (int)*(short *)(param_1 + 0x10);
      local_f0 = (int)*(short *)(param_1 + 0x16);
      FUN_00414db0(local_10c);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar2 = FUN_00459e70(0,&local_100);
      if (iVar2 == 0) {
        FUN_00414db0(local_10c);
        local_88 = (int)*(short *)(param_1 + 6);
        puVar3 = local_ec;
        puVar4 = local_78;
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_8c = 9;
        cVar1 = FUN_00526090(0x2d);
        if ((cVar1 != '\0') ||
           (iVar2 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_8c + -1,local_78), iVar2 == 0
           )) {
          iVar2 = FUN_0046f300((int)*(short *)(param_1 + 0xe),(int)*(short *)(param_1 + 0x10),
                               local_48,local_54);
          if (iVar2 == 0) {
            iVar2 = FUN_00468630(&local_8c,&DAT_0058233c,2,param_1);
            if (iVar2 == 2) {
              return 0xffffffff;
            }
          }
          else {
            FUN_0052b240(iVar2);
          }
        }
      }
      else {
        FUN_00414db0(local_10c);
        FUN_0052b240(iVar2);
      }
    }
  }
  return 0xfffffffe;
}

