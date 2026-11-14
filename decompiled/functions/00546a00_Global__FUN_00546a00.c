// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546a00
// entry: 00546a00  size: 190


uint FUN_00546a00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_10;
  uint local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  iVar4 = FUN_004b7550(param_1);
  uVar2 = param_2;
  iVar5 = FUN_004b7550(param_2);
  if (iVar4 == iVar5) {
    uVar6 = FUN_004b7550(iVar1);
    iVar4 = FUN_004b79b0(iVar1,uVar2,uVar6);
    if (iVar4 == 0) {
      return 0;
    }
  }
  FUN_004ad550(local_4,local_8,&param_1);
  cVar3 = FUN_004ad350(s__SSHEET_005be210,iVar1,&local_10);
  if (cVar3 == '\0') {
    uVar7 = FUN_004ad350(s__SSHEET_005be210,uVar2,&local_c);
    if ((uVar7 & 0xff) != 0) {
      return uVar7 & 0xff;
    }
    if ((uint)(local_10 + param_1) < local_c) {
      return 0x30;
    }
  }
  FUN_004ac750(s__SSHEET_005be210,iVar1);
  uVar7 = FUN_005469c0(uVar2,iVar1);
  return uVar7;
}

