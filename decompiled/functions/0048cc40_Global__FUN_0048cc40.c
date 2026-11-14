// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048cc40
// entry: 0048cc40  size: 462


void FUN_0048cc40(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e57a0(&local_18);
  FUN_004e57c0(local_c);
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_004e5780((undefined4 *)(param_1 + 0x18));
  cVar2 = FUN_00526090(0x27);
  if ((*(byte *)(param_1 + 0x90) & 0x40) == 0) {
    if (cVar2 == '\0') {
      FUN_004e6b80();
    }
    else {
      FUN_004e6a00(param_1 + 0xc,&local_18,&local_18);
    }
    FUN_004e6dd0(&local_18,local_c,&local_18);
    FUN_004e6d00(param_1 + 0x30,&local_18,&local_18);
    FUN_004e6a00(param_1 + 0x3c,&local_18,&local_18);
    FUN_004e6d00(param_1 + 0xc,&local_18,&local_18);
    FUN_004e7730(&local_18,&local_18);
  }
  else {
    iVar1 = param_1 + 0xc;
    if (cVar2 == '\0') {
      FUN_004e6a00(iVar1,&local_18,&local_18);
      FUN_004e6dd0(&local_18,local_c,&local_18);
      FUN_004e6d00(param_1 + 0x30,&local_18,&local_18);
      FUN_004e6a00(param_1 + 0x24,&local_18,&local_18);
      FUN_004e6d00(iVar1,&local_18,&local_18);
    }
    else {
      FUN_004e6b80(iVar1,&local_18,&local_18);
      FUN_004e6dd0(&local_18,local_c,&local_18);
      FUN_004e6d00(param_1 + 0x30,&local_18,&local_18);
      FUN_004e6a00(param_1 + 0x24,&local_18,&local_18);
      FUN_004e6d00(iVar1,&local_18,&local_18);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = local_18;
  *(undefined4 *)(param_1 + 0x58) = local_14;
  *(undefined4 *)(param_1 + 0x5c) = local_10;
  FUN_004e7620(param_1 + 0x48,param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x20);
  return;
}

