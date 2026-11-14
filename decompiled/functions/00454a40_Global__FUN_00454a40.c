// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00454a40
// entry: 00454a40  size: 284


int FUN_00454a40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5840(local_30);
  FUN_004e5ab0(local_c);
  local_60 = *(undefined4 *)(param_2 + 4);
  local_5c = *(undefined4 *)(param_2 + 8);
  local_6c = *(undefined4 *)(param_2 + 0x34);
  local_58 = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 0x38);
  local_64 = *(undefined4 *)(param_2 + 0x3c);
  iVar1 = FUN_00451810(&local_6c);
  if (iVar1 == 0) {
    FUN_004e6d00(&local_6c,local_30,local_24);
    FUN_00460d50(local_24,local_18);
    FUN_00460ff0(&local_60,&local_6c,local_48);
    iVar1 = FUN_004e4020(local_48);
    if (iVar1 == 0) {
      FUN_004e6c30(local_48,local_18,local_3c);
      iVar1 = FUN_004e7310(local_3c,local_c);
      if (iVar1 != 0) {
        return 3;
      }
      FUN_004e73d0(local_3c,&local_54);
      puVar2 = (undefined4 *)(param_2 + 0x40);
      *puVar2 = local_54;
      *(undefined4 *)(param_2 + 0x44) = local_50;
      *(undefined4 *)(param_2 + 0x48) = local_4c;
      FUN_004e7910(puVar2,puVar2);
      iVar1 = FUN_004517d0(puVar2);
    }
  }
  return iVar1;
}

