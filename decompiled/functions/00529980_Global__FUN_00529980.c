// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529980
// entry: 00529980  size: 167


undefined4 FUN_00529980(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  iVar1 = param_1;
  FUN_0052f8a0(param_1,local_c);
  cVar4 = FUN_004ad2a0(6,local_c,&param_1);
  if (cVar4 != '\0') {
    uVar5 = FUN_00529400(iVar1,param_2,param_3);
    return uVar5;
  }
  FUN_004ad550(local_10,local_14,&local_18);
  iVar3 = param_3;
  iVar2 = param_2;
  if (param_2 * param_3 * 0xc + 0x10U <= (uint)(local_18 + param_1)) {
    FUN_00529950(iVar1);
    uVar5 = FUN_00529400(iVar1,iVar2,iVar3);
    return uVar5;
  }
  return 0x33;
}

