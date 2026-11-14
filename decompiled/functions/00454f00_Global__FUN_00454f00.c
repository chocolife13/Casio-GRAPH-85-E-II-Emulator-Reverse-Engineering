// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00454f00
// entry: 00454f00  size: 288


int FUN_00454f00(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_24);
  FUN_004e5840(local_18);
  local_3c = *(undefined4 *)(param_2 + 0x34);
  local_38 = *(undefined4 *)(param_2 + 0x38);
  local_34 = *(undefined4 *)(param_2 + 0x3c);
  iVar2 = FUN_00451810(&local_3c);
  if (iVar2 == 0) {
    local_54 = *(undefined4 *)(param_2 + 0x28);
    local_50 = *(undefined4 *)(param_2 + 0x2c);
    local_4c = *(undefined4 *)(param_2 + 0x30);
    iVar2 = FUN_004518b0(&local_54);
    if (iVar2 == 0) {
      uVar3 = FUN_004e6c30(local_24,&local_54,&local_30,local_c);
      FUN_004e6d00(local_18,uVar3);
      FUN_00461af0(local_c,&local_54,&local_3c,&local_48);
      iVar2 = FUN_004517d0(&local_48);
      if (iVar2 == 0) {
        FUN_004e7730(&local_48,&local_30);
        puVar1 = (undefined4 *)(param_2 + 0x58);
        puVar4 = (undefined4 *)(param_2 + 100);
        *puVar1 = local_30;
        *(undefined4 *)(param_2 + 0x5c) = local_2c;
        *(undefined4 *)(param_2 + 0x60) = local_28;
        *puVar4 = local_48;
        *(undefined4 *)(param_2 + 0x68) = local_44;
        *(undefined4 *)(param_2 + 0x6c) = local_40;
        FUN_004e7910(puVar1,puVar1);
        FUN_004e7910(puVar4,puVar4);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

