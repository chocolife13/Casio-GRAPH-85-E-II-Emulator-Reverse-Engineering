// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443840
// entry: 00443840  size: 309


void FUN_00443840(undefined4 param_1,uint param_2,ushort param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined1 local_80 [24];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_34 [52];
  
  FUN_0050baa0(param_1,1,0);
  uVar4 = 3;
  do {
    uVar2 = (uint)uVar4;
    if ((param_2 & 0xffff) + 2 < uVar2) {
      if (uVar4 < 8) {
        uVar2 = (uint)uVar4;
        iVar3 = 8 - uVar2;
        do {
          FUN_005232d0(1,uVar2);
          FUN_00523470(&DAT_005cd010,0x15);
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      return;
    }
    FUN_004b6ef0(&local_68,&DAT_005bec00);
    local_67 = *(undefined1 *)((uVar2 - 3) + param_4);
    FUN_0052f760(*(undefined1 *)((uVar2 - 3) + param_4),local_80);
    FUN_004e3800(local_80,local_80);
    FUN_0052f780(*(undefined1 *)((uVar2 - 3) + param_4),local_80);
    uVar1 = FUN_004b22b0(local_80,local_34);
    FUN_004b6e70(&local_68,uVar1);
    FUN_005232d0(1,uVar2);
    if (uVar4 == param_3) {
      FUN_00523490(&local_68);
    }
    else {
      FUN_00523470(&local_68,0x15);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}

