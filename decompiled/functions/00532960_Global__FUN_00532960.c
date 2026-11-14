// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532960
// entry: 00532960  size: 161


void __thiscall FUN_00532960(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    local_4._1_3_ = (undefined3)((uint)param_1 >> 8);
    local_4 = CONCAT31(local_4._1_3_,(char)param_3);
    FUN_00532590(param_2,param_3);
    iVar4 = 4;
    do {
      cVar2 = (char)param_3;
      iVar3 = param_2;
      uVar1 = local_4;
      param_2 = iVar3 + 0xffff;
      param_3._0_1_ = cVar2 + -1;
      FUN_00532590(param_2,(char)param_3);
      local_4 = CONCAT31(local_4._1_3_,(char)local_4 + '\x01');
      FUN_00532590(param_2,local_4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = iVar3 + 0x10006;
    FUN_00532420(iVar3 + 0x10000,iVar4,(char)param_3);
    FUN_00532420(iVar3 + 0x10000,iVar4,local_4);
    FUN_00532590(iVar4,cVar2);
    FUN_00532590(iVar4,uVar1 & 0xff);
  }
  return;
}

