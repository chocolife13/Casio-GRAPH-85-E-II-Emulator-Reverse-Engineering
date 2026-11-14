// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004948a0
// entry: 004948a0  size: 151


undefined4
FUN_004948a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_5;
  iVar5 = param_5 + 0x800;
  iVar2 = FUN_004d5130(param_1,&local_4,iVar5,0);
  iVar3 = FUN_004d5130(param_3,&param_1,iVar5,0);
  iVar4 = FUN_004d5210(param_2,&local_8,iVar5);
  iVar5 = FUN_004d5210(param_4,&param_5,iVar5);
  if (((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) {
    FUN_0050f940(local_4,local_8,param_1,param_5,iVar1,2,0);
    return 0;
  }
  return 3;
}

