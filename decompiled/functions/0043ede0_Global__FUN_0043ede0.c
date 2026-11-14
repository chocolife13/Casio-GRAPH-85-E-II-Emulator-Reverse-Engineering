// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043ede0
// entry: 0043ede0  size: 502


undefined4 FUN_0043ede0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [12];
  undefined4 local_64 [12];
  char local_34 [52];
  
  local_74 = FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_70);
  FUN_0053c690(5);
  FUN_00538980(0,0,local_78);
  puVar3 = &DAT_0057f498;
  puVar4 = local_64;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,local_64);
  FUN_005387f0(0);
  if (*(short *)(param_2 + 0x1c) == 1) {
    FUN_0043e640((int)*(short *)(param_2 + 0x20),local_34);
  }
  else {
    FUN_0052f6f0(0xac,local_34);
  }
  FUN_005232d0(1,1);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0xae,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  local_34[1] = 0;
  local_34[0] = *(char *)(param_1 + 0x26) + '@';
  FUN_00523470(local_34,0x15);
  FUN_00433e40(0,param_1);
  while( true ) {
    while( true ) {
      do {
        FUN_00538b30();
        iVar2 = FUN_00526620(&local_7c);
      } while (iVar2 != 0);
      if (local_7c < 0x7535) break;
      if (local_7c == 0x754d) {
        uVar1 = 0xffffffff;
        goto LAB_0043ef9d;
      }
      if (local_7c == 0x7557) {
        uVar1 = 0xfffffff5;
        goto LAB_0043ef9d;
      }
    }
    if (local_7c == 0x7534) break;
    if (local_7c < 6) {
      if (local_7c == 5) {
        FUN_0043eff0(param_4,param_3,param_2,param_1);
      }
      else if ((local_7c != 0) && (local_7c < 5)) {
        switch(local_7c) {
        case 1:
          *(undefined2 *)(param_1 + 0x24) = 1;
          break;
        case 2:
          *(undefined2 *)(param_1 + 0x24) = 2;
          break;
        case 3:
          *(undefined2 *)(param_1 + 0x24) = 3;
          break;
        case 4:
          *(undefined2 *)(param_1 + 0x24) = 4;
        }
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined2 *)(param_1 + 0x2a) = 0;
        FUN_005302a0(param_1);
        break;
      }
    }
    else if (local_7c == 0x7532) {
      uVar1 = 0xfffffffe;
LAB_0043ef9d:
      FUN_00538810();
      FUN_005389c0(0,0,local_78);
      FUN_00538a50(local_70);
      FUN_00526440();
      FUN_00526420(local_74);
      return uVar1;
    }
  }
  uVar1 = 0;
  goto LAB_0043ef9d;
}

