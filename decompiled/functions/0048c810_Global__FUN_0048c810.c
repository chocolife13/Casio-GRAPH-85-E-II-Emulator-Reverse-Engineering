// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c810
// entry: 0048c810  size: 581


void FUN_0048c810(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_c);
  cVar2 = FUN_00526090(0x27);
  if ((*(byte *)(param_2 + 0x90) & 0x40) == 0) {
    if (cVar2 != '\0') {
      FUN_004e6a00(param_2 + 0xc,local_c,local_18);
      FUN_004e7730(local_18,local_18);
      iVar1 = param_2 + 0x18;
      FUN_0048b460(iVar1,local_18,local_18);
      FUN_004e6dd0(local_18,iVar1,param_2 + 0x54);
      FUN_004e6dd0(local_c,iVar1,local_18);
      FUN_004e6a00(local_18,local_c,local_18);
      goto LAB_0048c9d4;
    }
    FUN_004e7730(param_2 + 0xc);
    iVar1 = param_2 + 0x18;
    FUN_0048b460(iVar1,local_18,local_18);
    FUN_004e6dd0(local_18,iVar1,param_2 + 0x54);
    FUN_004e6dd0(local_c,iVar1,local_18);
  }
  else {
    if (cVar2 != '\0') {
      FUN_004e6b80(param_2 + 0xc,local_c,local_18);
      iVar1 = param_2 + 0x18;
      FUN_0048b460(iVar1,local_18,local_18);
      FUN_004e6dd0(local_18,iVar1,param_2 + 0x54);
      FUN_004e6dd0(local_c,iVar1,local_18);
      FUN_004e6a00(local_18,local_c,local_18);
      FUN_004e7730(local_18,local_18);
LAB_0048c9d4:
      FUN_004e6a00(local_18,param_2 + 0xc,local_18);
      FUN_004e6d00(local_18,param_2 + 0x54,local_18);
      FUN_004e6d00(param_2 + 0x30,local_18,param_1 + 0xc);
      goto LAB_0048ca10;
    }
    iVar1 = param_2 + 0x18;
    FUN_0048b460(iVar1,param_2 + 0xc,local_18);
    FUN_004e6dd0(local_18,iVar1,param_2 + 0x54);
    FUN_004e6dd0(local_c,iVar1,local_18);
    FUN_004e7730(local_18,local_18);
  }
  FUN_004e6a00(local_18,param_2 + 0xc,local_18);
  FUN_004e6d00(local_18,param_2 + 0x54,local_18);
  FUN_004e6d00(param_2 + 0x30,local_18,param_1 + 0xc);
LAB_0048ca10:
  FUN_004e6d00(param_2 + 0x18,param_2 + 0x18,local_18);
  FUN_004e6dd0(local_c,local_18,local_18);
  if ((*(byte *)(param_2 + 0x90) & 0x40) == 0) {
    FUN_004e7730(local_18,local_18);
  }
  FUN_004e6d00(param_2 + 0x30,local_18,param_1 + 0x18);
  return;
}

